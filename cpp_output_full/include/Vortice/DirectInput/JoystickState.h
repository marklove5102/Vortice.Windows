// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_JOYSTICKSTATE_H
#define VORTICE_DIRECTINPUT_JOYSTICKSTATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_JOYSTICKSTATE_H
#define VORTICE_VORTICE_JOYSTICKSTATE_H

#include <cstdint>

namespace Vortice {

class JoystickState : public IDeviceState<RawJoystickState, public JoystickUpdate>
{
public:
    constexpr JoystickState()
    Sliders = new int[2];
        PointOfViewControllers = new int[4];
        Buttons = new bool[128];
        VelocitySliders = new int[2];
        AccelerationSliders = new int[2];
        ForceSliders = new int[2];
    ~JoystickState() = default;

    int32_t X{};
    int32_t Y{};
    int32_t Z{};
    int32_t RotationX{};
    int32_t RotationY{};
    int32_t RotationZ{};
    int32_t VelocityX{};
    int32_t VelocityY{};
    int32_t VelocityZ{};
    int32_t AngularVelocityX{};
    int32_t AngularVelocityY{};
    int32_t AngularVelocityZ{};
    int32_t AccelerationX{};
    int32_t AccelerationY{};
    int32_t AccelerationZ{};
    int32_t AngularAccelerationX{};
    int32_t AngularAccelerationY{};
    int32_t AngularAccelerationZ{};
    int32_t ForceX{};
    int32_t ForceY{};
    int32_t ForceZ{};
    int32_t TorqueX{};
    int32_t TorqueY{};
    int32_t TorqueZ{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_JOYSTICKSTATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_JOYSTICKSTATE_H
