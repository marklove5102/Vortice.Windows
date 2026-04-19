// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_IDIRECTINPUT8_H
#define VORTICE_DIRECTINPUT_IDIRECTINPUT8_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTINPUT8_H
#define VORTICE_VORTICE_IDIRECTINPUT8_H

#include <cstdint>

namespace Vortice {

class IDirectInput8
{
public:
    ~IDirectInput8() = default;

    IDirectInputDevice8 CreateDevice() { CreateDevice(deviceGuid, out IntPtr nativePtr, nullptr).CheckError();
        return new IDirectInputDevice8(nativePtr); }

    IList<DeviceInstance> GetDevices() { return GetDevices(DeviceClass.All, DeviceEnumerationFlags.AllDevices); }

    IList<DeviceInstance> GetDevices() { auto enumDevicesCallback = new EnumDevicesCallback();
        EnumDevices((int)deviceClass, enumDevicesCallback.NativePointer, IntPtr.Zero, deviceEnumFlags);
        return enumDevicesCallback.DeviceInstances; }

    IList<DeviceInstance> GetDevices() { auto enumDevicesCallback = new EnumDevicesCallback();
        EnumDevices((int)deviceType, enumDevicesCallback.NativePointer, IntPtr.Zero, deviceEnumFlags);
        return enumDevicesCallback.DeviceInstances; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTINPUT8_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_IDIRECTINPUT8_H
