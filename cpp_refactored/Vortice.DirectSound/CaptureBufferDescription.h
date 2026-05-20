// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_CAPTUREBUFFERDESCRIPTION_H
#define VORTICE_CAPTUREBUFFERDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;

        class CaptureBufferDescription
        {
                        public CaptureBufferDescription(void)
        {
            }

                            public bool WaveMapped
            {
                get
                {
                    return (Flags & CaptureBufferCapabilitiesFlags.WaveMapped) != 0;
                }
            }

                            public bool ControlEffects
            {
                get
                {
                    return (Flags & CaptureBufferCapabilitiesFlags.ControlEffects) != 0;
                }
            }

            // Internal native struct used for marshalling
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t Size{};
                public: CaptureBufferCapabilitiesFlags Flags{};
                public: int32_t BufferBytes{};
                public: int32_t Reserved{};
                public void* FormatPointer;
                public: int32_t EffectCount{};
                public: void* EffectDescriptionPointer{};
                // Method to free native struct
                void __MarshalFree(void)
        {
                    if (FormatPointer != nullptr)
                        NativeMemory.Free(FormatPointer);
                    if (EffectCount > 0 && EffectDescriptionPointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(EffectDescriptionPointer);
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            // Method to marshal from native to managed struct
            void __MarshalFrom(__Native& @ref)
        {
                Flags = @ref.Flags;
                BufferBytes = @ref.BufferBytes;
                Reserved = @ref.Reserved;
                Format = WaveFormat.MarshalFrom(@ref.FormatPointer);
                EffectCount = @ref.EffectCount;
                if (EffectCount > 0)
                {
                    var nativeDescriptions{};
                    UnsafeUtilities.Read(@ref.EffectDescriptionPointer, nativeDescriptions, EffectCount);

                    EffectDescriptions = new CaptureEffectDescription{};
                    for (int32_t i{}; i < EffectCount; i++)
                    {
                        EffectDescriptions= new CaptureEffectDescription(void) = 0;
                        EffectDescriptions.__MarshalFrom(ref nativeDescriptions);
                    }
                }
            }

            // Method to marshal from managed struct tot native
            void __MarshalTo(__Native& @ref)
        {
                @ref.Size = sizeof(__Native);
                @ref.Flags = Flags;
                @ref.BufferBytes = BufferBytes;
                @ref.Reserved = Reserved;
                @ref.FormatPointer = WaveFormat.MarshalToPtr(Format);

                int32_t effectCount{};
                @ref.EffectCount = effectCount;
                if (effectCount > 0)
                {
                    var nativeDescriptions{};
                    for (int32_t i{}; i < effectCount; i++)
                    {
                        nativeDescriptions= new CaptureEffectDescription.__Native();
                        EffectDescriptions.__MarshalTo(ref nativeDescriptions);
                    }

                    @ref.EffectDescriptionPointer = Marshal.AllocHGlobal(effectCount * Unsafe.SizeOf<CaptureEffectDescription.__Native>());
                    UnsafeUtilities.Write(@ref.EffectDescriptionPointer, nativeDescriptions, 0, effectCount);
                }
            }

            static __Native __NewNative(void)
        {
                unsafe
                {
                    __Native temp{};
                    temp.Size = sizeof(__Native);
                    return temp{};
                }
            }

                            WaveFormat m_format{};

                        public CaptureEffectDescription[] EffectDescriptions { get; set; }
        }


    }
}

#endif // VORTICE_CAPTUREBUFFERDESCRIPTION_H