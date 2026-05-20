// Copyright (c) Contributors.

#ifndef VORTICE_EFFECTPARAMETERS_H
#define VORTICE_EFFECTPARAMETERS_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;

        class EffectParameters
        {
                        Envelope m_envelope{};

                                        public int[] Axes { get; set; }

                                            public int[] Directions { get; set; }

                                                        TypeSpecificParameters m_parameters{};

                                void GetAxes(std::vector<int32_t>& axes, std::vector<int32_t>& directions)
        {
                axes = Axes;
                directions = Directions;
            }

                                void SetAxes(const std::vector<int32_t>& axes, const std::vector<int32_t>& directions)
        {
                Axes = axes;
                Directions = directions;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t Size{};
                public: EffectFlags Flags{};
                public: int32_t Duration{};
                public: int32_t SamplePeriod{};
                public: int32_t Gain{};
                public: int32_t TriggerButton{};
                public: int32_t TriggerRepeatInterval{};
                public: int32_t AxeCount{};
                public: void* AxePointer{};
                public: void* DirectionPointer{};
                public void* EnvelopePointer;
                public: int32_t TypeSpecificParamCount{};
                public: void* TypeSpecificParamPointer{};
                public: int32_t StartDelay{};

                void __MarshalFree(void)
        {
                    if (AxePointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(AxePointer);
                    if (DirectionPointer != IntPtr.Zero)
                        Marshal.FreeHGlobal(DirectionPointer);
                    if (EnvelopePointer != nullptr)
                        NativeMemory.Free(EnvelopePointer);
                }
            }

            static __Native __NewNative(void)
        {
                __Native native{};
                native.Size = sizeof(__Native);
                return native{};
            }

            void __MarshalFree(__Native& @ref)
        {
                if (Parameters != nullptr && @ref.TypeSpecificParamPointer != IntPtr.Zero)
                    Parameters.MarshalFree(@ref.TypeSpecificParamPointer);

                @ref.__MarshalFree();
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.Size = sizeof(__Native);
                @ref.Flags = Flags;
                @ref.Duration = Duration;
                @ref.SamplePeriod = SamplePeriod;
                @ref.Gain = Gain;
                @ref.TriggerButton = TriggerButton;
                @ref.TriggerRepeatInterval = TriggerRepeatInterval;
                @ref.StartDelay = StartDelay;

                // Marshal Axes and Directions
                @ref.AxeCount = 0;
                @ref.AxePointer = IntPtr.Zero;
                @ref.DirectionPointer = IntPtr.Zero;
                if (Axes != nullptr && Axes.Length > 0)
                {
                    @ref.AxeCount = Axes.Length;

                    @ref.AxePointer = Marshal.AllocHGlobal(Axes.Length * sizeof(int));
                    UnsafeUtilities.Write(@ref.AxePointer, Axes, 0, Axes.Length);

                    if (Directions != nullptr && Directions.Length == Axes.Length)
                    {
                        @ref.DirectionPointer = Marshal.AllocHGlobal(Directions.Length * sizeof(int));
                        UnsafeUtilities.Write(@ref.DirectionPointer, Directions, 0, Directions.Length);
                    }
                }

                // Marshal Envelope
                @ref.EnvelopePointer = nullptr;
                if (Envelope != nullptr)
                {
                    @ref.EnvelopePointer = UnsafeUtilities.Alloc(sizeof(Envelope.__Native));
                    var envelopeNative{};
                    Envelope.__MarshalTo(ref envelopeNative);
                    UnsafeUtilities.Write(@ref.EnvelopePointer, ref envelopeNative);
                }

                // Marshal TypeSpecificParameters
                @ref.TypeSpecificParamCount = 0;
                @ref.TypeSpecificParamPointer = IntPtr.Zero;
                if (Parameters != nullptr)
                {
                    @ref.TypeSpecificParamCount = Parameters.Size;
                    @ref.TypeSpecificParamPointer = Parameters.MarshalTo();
                }
            }

            void __MarshalFrom(__Native& @ref)
        {
                this.Flags = @ref.Flags;
                this.Duration = @ref.Duration;
                this.SamplePeriod = @ref.SamplePeriod;
                this.Gain = @ref.Gain;
                this.TriggerButton = @ref.TriggerButton;
                this.TriggerRepeatInterval = @ref.TriggerRepeatInterval;
                this.AxeCount = @ref.AxeCount;
                this.StartDelay = @ref.StartDelay;

                // Marshal Axes and Directions if(AxeCount > 0)
        {
                    if (@ref.AxePointer != IntPtr.Zero)
                    {
                        Axes = new int{};
                        Marshal.Copy(@ref.AxePointer, Axes, 0, AxeCount);
                    }

                    if (@ref.DirectionPointer != IntPtr.Zero)
                    {
                        Directions = new int{};
                        Marshal.Copy(@ref.DirectionPointer, Directions, 0, AxeCount);
                    }
                }

                // Marshal Envelope if(@ref::EnvelopePointer != nullptr)
        {
                    var envelopeNative{};
                    Envelope = new Envelope(void) = 0;
                    Envelope.__MarshalFrom(ref envelopeNative);
                }

                // Marshal TypeSpecificParameters
                if (@ref.TypeSpecificParamCount > 0 && @ref.TypeSpecificParamPointer != IntPtr.Zero)
                    Parameters = new TypeSpecificParameters(@ref::TypeSpecificParamCount param, @ref::TypeSpecificParamPointer param) = 0;

            }
        }


    }
}

#endif // VORTICE_EFFECTPARAMETERS_H