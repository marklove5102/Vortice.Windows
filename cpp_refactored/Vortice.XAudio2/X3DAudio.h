// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_X3DAUDIO_H
#define VORTICE_X3DAUDIO_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        class X3DAudio
        {
                        public: const float SpeedOfSound{};

            private: X3DAudioHandle _handle{};

                                public X3DAudio(Speakers speakers, float speedOfSound{};
            }

                                            public X3DAudio(int32_t speakerChannelMask, float speedOfSound{};
            }

                                                DspSettings Calculate(Listener listener, Emitter emitter, CalculateFlags flags, uint32_t sourceChannelCount, uint32_t destinationChannelCount)
        {
                DspSettings settings{};
                Calculate(listener, emitter, flags, settings);
                return settings{};
            }

                                            void Calculate(Listener listener, Emitter emitter, CalculateFlags flags, DspSettings settings)
        {
                if (settings == nullptr)
                {
                    throw new ArgumentNullException(nameof(settings));
                }

                DspSettings.__Native settingsNative{};
                settingsNative.SrcChannelCount = settings.SourceChannelCount;
                settingsNative.DstChannelCount = settings.DestinationChannelCount;

                unsafe
                {
                    fixed (void* pMatrix = settings.MatrixCoefficients)
                    {
                        fixed (void* pDelays = settings.DelayTimes)
                        {
                            settingsNative.MatrixCoefficientsPointer = (IntPtr)pMatrix;
                            settingsNative.DelayTimesPointer = (IntPtr)pDelays;

                            XAudio2Native.X3DAudioCalculate(ref _handle, listener, emitter, flags, new IntPtr(&settingsNative));
                        }
                    }
                }

                settings.__MarshalFrom(ref settingsNative);
            }
        }


    }
}

#endif // VORTICE_X3DAUDIO_H