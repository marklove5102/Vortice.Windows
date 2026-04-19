// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VOLUMEMETERLEVELS_H
#define VORTICE_VOLUMEMETERLEVELS_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace XAudio2 {
namespace Fx {

            namespace Vortice.XAudio2.Fx;

            class VolumeMeterLevels
            {
                public VolumeMeterLevels(const std::vector<float>& peakLevels, const std::vector<float>& rmsLevels, int32_t channelCount)
            {
                    PeakLevels = peakLevels;
                    RMSLevels = rmsLevels;
                    ChannelCount = channelCount;
                }

                                public float[] PeakLevels { get; }

                                public float[] RMSLevels { get; }

                            public int ChannelCount { get; }
                internal struct __Native
            {
                    internal float* pPeakLevels;
                    internal float* pRMSLevels;
                    public: int32_t ChannelCount{};
                }

                void __MarshalTo(__Native& @ref)
            {
                    @ref.ChannelCount = ChannelCount;
                    if (PeakLevels != nullptr && PeakLevels.Length > 0)
                    {
                        @ref.pPeakLevels = (float*)Unsafe.AsPointer(ref PeakLevels);
                    }
                    if (RMSLevels != nullptr && RMSLevels.Length > 0)
                    {
                        @ref.pRMSLevels = (float*)Unsafe.AsPointer(ref RMSLevels);
                    }
                }
            }


        }
    }
}

#endif // VORTICE_VOLUMEMETERLEVELS_H