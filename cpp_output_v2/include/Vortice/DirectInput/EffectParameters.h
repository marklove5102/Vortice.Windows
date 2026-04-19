// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_EFFECTPARAMETERS_H
#define VORTICE_DIRECTINPUT_EFFECTPARAMETERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EFFECTPARAMETERS_H
#define VORTICE_VORTICE_EFFECTPARAMETERS_H

#include <cstdint>

namespace Vortice {

class EffectParameters
{
public:
    ~EffectParameters() = default;

    int32_t Size;
    EffectFlags Flags;
    int32_t Duration;
    int32_t SamplePeriod;
    int32_t Gain;
    int32_t TriggerButton;
    int32_t TriggerRepeatInterval;
    int32_t AxeCount;
    void* AxePointer;
    void* DirectionPointer;
    int32_t TypeSpecificParamCount;
    void* TypeSpecificParamPointer;
    int32_t StartDelay;

    Envelope Envelope{};
    TypeSpecificParameters Parameters{};

    void GetAxes() { axes = Axes;
        directions = Directions; }

    void SetAxes() { Axes = axes;
        Directions = directions; }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_EFFECTPARAMETERS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t Size;
    EffectFlags Flags;
    int32_t Duration;
    int32_t SamplePeriod;
    int32_t Gain;
    int32_t TriggerButton;
    int32_t TriggerRepeatInterval;
    int32_t AxeCount;
    void* AxePointer;
    void* DirectionPointer;
    int32_t TypeSpecificParamCount;
    void* TypeSpecificParamPointer;
    int32_t StartDelay;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_EFFECTPARAMETERS_H
