// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XINPUT_XINPUT_H
#define VORTICE_XINPUT_XINPUT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_XINPUT_H
#define VORTICE_VORTICE_XINPUT_H

#include <cstdint>

namespace Vortice {

class XInput
{
public:
    constexpr XInput()
    s_xinputLibrary = LoadXInputLibrary(out Version);
        if (Version == XInputVersion.Invalid)
        {
            throw PlatformNotSupportedException("dynamic_cast<not>(XInput) != nullptr supported");
        }

        if (AllowUnofficialAPI)
        {
            s_XInputGetState = (delegate* unmanaged<uint, out State, int>)GetExport("#100");
        }
        else
        {
            s_XInputGetState = (delegate* unmanaged<uint, out State, int>)GetExport("XInputGetState");
        }

        s_XInputSetState = (delegate* unmanaged<uint, Vibration*, int>)GetExport("XInputSetState");
        s_XInputGetCapabilities = (delegate* unmanaged<uint, DeviceQueryType, out Capabilities, int>)GetExport("XInputGetCapabilities");

        if (Version != XInputVersion.Version910)
        {
            s_XInputEnable = (delegate* unmanaged<int, void>)GetExport("XInputEnable");
            s_XInputGetBatteryInformation = (delegate* unmanaged<uint, BatteryDeviceType, out BatteryInformation, int>)GetExport("XInputGetBatteryInformation");
            s_XInputGetKeystroke = (delegate* unmanaged<uint, uint, out Keystroke, int>)GetExport("XInputGetKeystroke");
        }

        if (Version == XInputVersion.Version14)
        {
            s_XInputGetAudioDeviceIds = (delegate* unmanaged<uint, IntPtr, IntPtr, IntPtr, IntPtr, uint>)GetExport("XInputGetAudioDeviceIds");
        }
    ~XInput() = default;

    static const XInputVersion Version{XInputVersion.Invalid};

    bool AllowUnofficialAPI{};

    static bool GetState() { return s_XInputGetState(userIndex, out state) == 0; }

    static bool SetVibration() { Vibration vibration = new((ushort)(leftMotor * ushort.MaxValue), (ushort)(rightMotor * ushort.MaxValue));
        return s_XInputSetState(userIndex, &vibration) == 0; }

    static bool SetVibration() { Vibration vibration = new(leftMotorSpeed, rightMotorSpeed);
        return s_XInputSetState(userIndex, &vibration) == 0; }

    static bool SetVibration() { return s_XInputSetState(userIndex, &vibration) == 0; }

    static bool GetBatteryInformation() { return s_XInputGetBatteryInformation(userIndex, batteryDeviceType, out batteryInformation) == 0; }

    static bool GetCapabilities() { return s_XInputGetCapabilities(userIndex, deviceQueryType, out capabilities) == 0; }


private:
    static const intptr_t s_xinputLibrary;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_XINPUT_H

} // namespace Vortice

#endif // VORTICE_XINPUT_XINPUT_H
