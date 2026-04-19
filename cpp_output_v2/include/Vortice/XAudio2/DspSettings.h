// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_DSPSETTINGS_H
#define VORTICE_XAUDIO2_DSPSETTINGS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DSPSETTINGS_H
#define VORTICE_VORTICE_DSPSETTINGS_H

#include <cstdint>

namespace Vortice {

class DspSettings
{
public:
    constexpr DspSettings(uint32_t sourceChannelCount, uint32_t destinationChannelCount)
    SourceChannelCount = sourceChannelCount;
        DestinationChannelCount = destinationChannelCount;

        MatrixCoefficients = new float[sourceChannelCount * destinationChannelCount];
        DelayTimes = new float[destinationChannelCount];
    ~DspSettings() = default;

    const std::vector<float> MatrixCoefficients;
    const std::vector<float> DelayTimes;
    void* MatrixCoefficientsPointer;
    void* DelayTimesPointer;
    uint32_t SrcChannelCount;
    uint32_t DstChannelCount;
    float LPFDirectCoefficient;
    float LPFReverbCoefficient;
    float ReverbLevel;
    float DopplerFactor;
    float EmitterToListenerAngle;
    float EmitterToListenerDistance;
    float EmitterVelocityComponent;
    float ListenerVelocityComponent;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DSPSETTINGS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USED_H
#define VORTICE_VORTICE_USED_H

#include <cstdint>

namespace Vortice {

struct used
{
public:
    void* MatrixCoefficientsPointer;
    void* DelayTimesPointer;
    uint32_t SrcChannelCount;
    uint32_t DstChannelCount;
    float LPFDirectCoefficient;
    float LPFReverbCoefficient;
    float ReverbLevel;
    float DopplerFactor;
    float EmitterToListenerAngle;
    float EmitterToListenerDistance;
    float EmitterVelocityComponent;
    float ListenerVelocityComponent;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_USED_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* MatrixCoefficientsPointer;
    void* DelayTimesPointer;
    uint32_t SrcChannelCount;
    uint32_t DstChannelCount;
    float LPFDirectCoefficient;
    float LPFReverbCoefficient;
    float ReverbLevel;
    float DopplerFactor;
    float EmitterToListenerAngle;
    float EmitterToListenerDistance;
    float EmitterVelocityComponent;
    float ListenerVelocityComponent;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_DSPSETTINGS_H
