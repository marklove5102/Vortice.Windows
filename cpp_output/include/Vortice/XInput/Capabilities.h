// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_CAPABILITIES_H
#define VORTICE_VORTICE_XINPUT_CAPABILITIES_H

#include <cstdint>

namespace Vortice::XInput {

struct Capabilities
{
    DeviceType Type;
    DeviceSubType SubType;
    CapabilityFlags Flags;
    Gamepad Gamepad;
    Vibration Vibration;

};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_CAPABILITIES_H
