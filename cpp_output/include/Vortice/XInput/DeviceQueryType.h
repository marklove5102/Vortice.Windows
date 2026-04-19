// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_DEVICEQUERYTYPE_H
#define VORTICE_VORTICE_XINPUT_DEVICEQUERYTYPE_H

#include <cstdint>

namespace Vortice::XInput {

enum class DeviceQueryType : int32_t
{
    Any = 0,
    Gamepad = 1
};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_DEVICEQUERYTYPE_H
