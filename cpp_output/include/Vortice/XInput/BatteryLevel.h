// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_BATTERYLEVEL_H
#define VORTICE_VORTICE_XINPUT_BATTERYLEVEL_H

#include <cstdint>

namespace Vortice::XInput {

enum class BatteryLevel : uint8_t
{
    Empty,
    Low,
    Medium,
    Full
};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_BATTERYLEVEL_H
