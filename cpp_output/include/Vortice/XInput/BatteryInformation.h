// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_BATTERYINFORMATION_H
#define VORTICE_VORTICE_XINPUT_BATTERYINFORMATION_H

#include <cstdint>

namespace Vortice::XInput {

struct BatteryInformation
{
    BatteryType BatteryType;
    BatteryLevel BatteryLevel;

};


} // namespace Vortice::XInput

#endif // VORTICE_VORTICE_XINPUT_BATTERYINFORMATION_H
