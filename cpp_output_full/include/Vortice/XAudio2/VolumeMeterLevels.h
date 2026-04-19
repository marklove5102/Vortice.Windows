// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_VOLUMEMETERLEVELS_H
#define VORTICE_XAUDIO2_VOLUMEMETERLEVELS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VOLUMEMETERLEVELS_H
#define VORTICE_VORTICE_VOLUMEMETERLEVELS_H

#include <cstdint>

namespace Vortice {

class VolumeMeterLevels
{
public:
    constexpr VolumeMeterLevels(std::vector<float> peakLevels, std::vector<float> rmsLevels, int32_t channelCount)
    PeakLevels = peakLevels;
        RMSLevels = rmsLevels;
        ChannelCount = channelCount;
    ~VolumeMeterLevels() = default;

    int32_t ChannelCount;

    int32_t ChannelCount{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VOLUMEMETERLEVELS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t ChannelCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_VOLUMEMETERLEVELS_H
