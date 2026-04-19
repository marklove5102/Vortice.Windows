// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_BATTERYDEVICETYPE_H
#define VORTICE_VORTICE_XINPUT_BATTERYDEVICETYPE_H

#include <cstdint>

namespace Vortice::XInput {

enum class BatteryDeviceType : int32_t
{
    Gamepad,
    Headset
};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_BATTERYDEVICETYPE_H
