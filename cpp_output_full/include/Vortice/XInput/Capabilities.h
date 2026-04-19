// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XINPUT_CAPABILITIES_H
#define VORTICE_XINPUT_CAPABILITIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CAPABILITIES_H
#define VORTICE_VORTICE_CAPABILITIES_H

#include <cstdint>

namespace Vortice {

struct Capabilities
{
public:
    DeviceType Type;
    DeviceSubType SubType;
    CapabilityFlags Flags;
    Gamepad Gamepad;
    Vibration Vibration;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CAPABILITIES_H

} // namespace Vortice

#endif // VORTICE_XINPUT_CAPABILITIES_H
