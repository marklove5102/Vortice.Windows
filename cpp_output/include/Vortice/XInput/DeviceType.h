// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_DEVICETYPE_H
#define VORTICE_VORTICE_XINPUT_DEVICETYPE_H

#include <cstdint>

namespace Vortice::XInput {

enum class DeviceType : uint8_t
{
    Gamepad = 0x01
};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_DEVICETYPE_H
