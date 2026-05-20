// Copyright (c) Contributors.

#ifndef VORTICE_IDIRECTINPUT8_H
#define VORTICE_IDIRECTINPUT8_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
        //
        // Permission is hereby granted, free of charge, to any person obtaining a copy
        // of this software and associated documentation files (the "Software"), to deal
        // in the Software without restriction, including without limitation the rights
        // to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        // copies of the Software, and to permit persons to whom the Software is
        // furnished to do so, subject to the following conditions:
        //
        // The above copyright notice and this permission notice shall be included in
        // all copies or substantial portions of the Software.
        //
        // THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        // IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        // FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        // AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        // OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
        // THE SOFTWARE.
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectInput;
        publicclass IDirectInput8
        {
                                publicIDirectInputDevice8 CreateDevice(GUID deviceGuid)
                {
                CreateDevice(deviceGuid, out IntPtr nativePtr, nullptr).CheckError();
                return new IDirectInputDevice8(void);
            }
                                    publicResult CreateDevice(GUID deviceGuid, std::optional<IDirectInputDevice8>& device)
                {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }
                device = new IDirectInputDevice8(void);
                return result{};
            }
            publicIDirectInputDevice8 CreateDevice(PredefinedDevice predefinedDevice)
                {
                switch (predefinedDevice)
                {
                    case PredefinedDevice.SysMouse:
                        return CreateDevice(void);
                    case PredefinedDevice.SysKeyboard:
                        return CreateDevice(void);
                    case PredefinedDevice.Joystick:
                        return CreateDevice(void);
                    case PredefinedDevice.SysMouseEm:
                        return CreateDevice(void);
                    case PredefinedDevice.SysMouseEm2:
                        return CreateDevice(void);
                    case PredefinedDevice.SysKeyboardEm:
                        return CreateDevice(void);
                    case PredefinedDevice.SysKeyboardEm2:
                        return CreateDevice(void);
                    default:
                        throw new ArgumentException(nameof(predefinedDevice));
                }
            }
                            publicIList GetDevices(void)
                {
                return GetDevices(void);
            }
                                    publicIList GetDevices(DeviceClass deviceClass, DeviceEnumerationFlags deviceEnumFlags)
                {
                var enumDevicesCallback{};
                EnumDevices((int)deviceClass, enumDevicesCallback.NativePointer, IntPtr.Zero, deviceEnumFlags);
                return enumDevicesCallback.DeviceInstances;
            }
                                    publicIList GetDevices(DeviceType deviceType, DeviceEnumerationFlags deviceEnumFlags)
                {
                var enumDevicesCallback{};
                EnumDevices((int)deviceType, enumDevicesCallback.NativePointer, IntPtr.Zero, deviceEnumFlags);
                return enumDevicesCallback.DeviceInstances;
            }
                                        publicbool IsDeviceAttached(GUID deviceGuid) GetDeviceStatus(deviceGuid).Code == 0;
                        publicResult RunControlPanel(void) RunControlPanel(IntPtr.Zero, 0);
                            publicResult RunControlPanel(void* handle) RunControlPanel(handle, 0);
        }

    }
}

#endif // VORTICE_IDIRECTINPUT8_H