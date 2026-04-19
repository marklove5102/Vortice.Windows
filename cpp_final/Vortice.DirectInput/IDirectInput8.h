// Copyright (c) Contributors.

#ifndef VORTICE_IDIRECTINPUT8_H
#define VORTICE_IDIRECTINPUT8_H

#include <cstdint>
#include <optional>

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

        class IDirectInput8
        {
                                IDirectInputDevice8 CreateDevice(Guid deviceGuid)
        {
                CreateDevice(deviceGuid, out IntPtr nativePtr, nullptr).CheckError();
                return new IDirectInputDevice8(nativePtr param) = 0;
            }

                                    Result CreateDevice(Guid deviceGuid, std::optional<IDirectInputDevice8>& device)
        {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }

                device = new IDirectInputDevice8(nativePtr param) = 0;
                return result{};
            }

            IDirectInputDevice8 CreateDevice(PredefinedDevice predefinedDevice)
        {
                switch (predefinedDevice)
                {
                    case PredefinedDevice.SysMouse:
                        return CreateDevice(DeviceGuid::SysMouse param) = 0;
                    case PredefinedDevice.SysKeyboard:
                        return CreateDevice(DeviceGuid::SysKeyboard param) = 0;
                    case PredefinedDevice.Joystick:
                        return CreateDevice(DeviceGuid::Joystick param) = 0;
                    case PredefinedDevice.SysMouseEm:
                        return CreateDevice(DeviceGuid::SysMouseEm param) = 0;
                    case PredefinedDevice.SysMouseEm2:
                        return CreateDevice(DeviceGuid::SysMouseEm2 param) = 0;
                    case PredefinedDevice.SysKeyboardEm:
                        return CreateDevice(DeviceGuid::SysKeyboardEm param) = 0;
                    case PredefinedDevice.SysKeyboardEm2:
                        return CreateDevice(DeviceGuid::SysKeyboardEm2 param) = 0;
                    default:
                        throw new ArgumentException(nameof(predefinedDevice));
                }
            }

                            public IList<DeviceInstance> GetDevices()
            {
                return GetDevices(DeviceClass::All param, DeviceEnumerationFlags::AllDevices param) = 0;
            }

                                    public IList<DeviceInstance> GetDevices(DeviceClass deviceClass, DeviceEnumerationFlags deviceEnumFlags)
            {
                var enumDevicesCallback{};
                EnumDevices((int)deviceClass, enumDevicesCallback.NativePointer, IntPtr.Zero, deviceEnumFlags);
                return enumDevicesCallback.DeviceInstances;
            }

                                    public IList<DeviceInstance> GetDevices(DeviceType deviceType, DeviceEnumerationFlags deviceEnumFlags)
            {
                var enumDevicesCallback{};
                EnumDevices((int)deviceType, enumDevicesCallback.NativePointer, IntPtr.Zero, deviceEnumFlags);
                return enumDevicesCallback.DeviceInstances;
            }

                                        bool IsDeviceAttached(Guid deviceGuid) const { return RunControlPanel(IntPtr.Zero, 0); } GetDeviceStatus(deviceGuid).Code == 0;

                        Result RunControlPanel(void) const { return RunControlPanel(handle, 0); } RunControlPanel(IntPtr.Zero, 0);

                            Result RunControlPanel(void* handle)
        { RunControlPanel(handle, 0);
        }


    }
}

#endif // VORTICE_IDIRECTINPUT8_H