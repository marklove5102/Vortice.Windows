// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_EMITTER_H
#define VORTICE_EMITTER_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        class Emitter
        {
                        public: std::optional<Cone> Cone{};

            public float[]? ChannelAzimuths;

            public CurvePoint[]? VolumeCurve;

            public CurvePoint[]? LfeCurve;

            public CurvePoint[]? LpfDirectCurve;

            public CurvePoint[]? LpfReverbCurve;

            public CurvePoint[]? ReverbCurve;

            // Internal native struct used for marshalling
            [StructLayout(LayoutKind.Sequential, Pack = 1)]
            internal struct __Native
        {
                public Cone* ConePointer;
                public: Vector3 OrientFront{};
                public: Vector3 OrientTop{};
                public: Vector3 Position{};
                public: Vector3 Velocity{};
                public: float InnerRadius{};
                public: float InnerRadiusAngle{};
                public: uint32_t ChannelCount{};
                public: float ChannelRadius{};
                public void* ChannelAzimuthsPointer;
                public: void* VolumeCurvePointer{};
                public: void* LFECurvePointer{};
                public: void* LPFDirectCurvePointer{};
                public: void* LPFReverbCurvePointer{};
                public: void* ReverbCurvePointer{};
                public: float CurveDistanceScaler{};
                public: float DopplerScaler{};
                public: Cone Cone{};

                void __MarshalFree(void)
        {
                    if (ChannelAzimuthsPointer != nullptr)
                        NativeMemory.Free(ChannelAzimuthsPointer);
                    if (VolumeCurvePointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(VolumeCurvePointer);
                    if (LFECurvePointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(LFECurvePointer);
                    if (LPFDirectCurvePointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(LPFDirectCurvePointer);
                    if (LPFReverbCurvePointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(LPFReverbCurvePointer);
                    if (ReverbCurvePointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(ReverbCurvePointer);
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.OrientFront = OrientFront;
                @ref.OrientTop = OrientTop;
                @ref.Position = Position;
                @ref.Velocity = Velocity;
                @ref.InnerRadius = InnerRadius;
                @ref.InnerRadiusAngle = InnerRadiusAngle;
                @ref.ChannelCount = ChannelCount;
                @ref.ChannelRadius = ChannelRadius;

                if (ChannelAzimuths != nullptr
                    && ChannelAzimuths.Length > 0 && ChannelCount > 0)
                {
                    @ref.ChannelAzimuthsPointer = NativeMemory.Alloc((nuint)(sizeof(float) * Math.Min(ChannelCount, ChannelAzimuths.Length)));
                    MemoryHelpers.Write((nint)@ref.ChannelAzimuthsPointer, new Span<float>(ChannelAzimuths), (int)ChannelCount);
                }

                @ref.VolumeCurvePointer = DistanceCurve.FromCurvePoints(VolumeCurve);
                @ref.LFECurvePointer = DistanceCurve.FromCurvePoints(LfeCurve);
                @ref.LPFDirectCurvePointer = DistanceCurve.FromCurvePoints(LpfDirectCurve);
                @ref.LPFReverbCurvePointer = DistanceCurve.FromCurvePoints(LpfReverbCurve);
                @ref.ReverbCurvePointer = DistanceCurve.FromCurvePoints(ReverbCurve);
                @ref.CurveDistanceScaler = CurveDistanceScaler;
                @ref.DopplerScaler = DopplerScaler;

                if (Cone == nullptr)
                {
                    @ref.ConePointer = nullptr;
                }
                else
                {
                    @ref.Cone = Cone.Value;
                    @ref.ConePointer = (Cone*)Unsafe.AsPointer(ref @ref.Cone);
                }
            }
        }


    }
}

#endif // VORTICE_EMITTER_H