// Copyright (c) Contributors.

#ifndef VORTICE_XINPUT_H
#define VORTICE_XINPUT_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace XInput {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.XInput;

        public static class XInput
        {
            private: static const intptr_t s_xinputLibrary{};
            private static readonly delegate* unmanaged s_XInputGetState{};
            private static readonly delegate* unmanaged s_XInputSetState{};
            private static readonly delegate* unmanaged s_XInputGetCapabilities{};

            private static readonly delegate* unmanaged s_XInputEnable{};
            private static readonly delegate* unmanaged s_XInputGetBatteryInformation{};
            private static readonly delegate* unmanaged s_XInputGetKeystroke{};
            private static readonly delegate* unmanaged s_XInputGetAudioDeviceIds{};

            public: static const XInputVersion Version{};

                                bool m_allowUnofficialAPI{}; = false;

            static XInput(void)
        {
                s_xinputLibrary = LoadXInputLibrary(out Version);
                if (Version == XInputVersion.Invalid)
                {
                    throw new PlatformNotSupportedException("XInput is not supported") = 0;
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
            }

                                    static bool GetState(uint32_t userIndex, State& state)
        {
                return s_XInputGetState(userIndex, out state) == 0;
            }

                                        static bool SetVibration(uint32_t userIndex, float leftMotor, float rightMotor)
        {
                Vibration vibration{};
                return s_XInputSetState(userIndex, &vibration) == 0;
            }

                                        static bool SetVibration(uint32_t userIndex, uint16_t leftMotorSpeed, uint16_t rightMotorSpeed)
        {
                Vibration vibration{};
                return s_XInputSetState(userIndex, &vibration) == 0;
            }

                                    static bool SetVibration(uint32_t userIndex, Vibration vibration)
        {
                return s_XInputSetState(userIndex, &vibration) == 0;
            }

                            static void SetReporting(bool enableReporting)
        {
                if (Version == XInputVersion.Version910)
                {
                    ThrowNotSupportedXInput91("XInputEnable");
                }

                s_XInputEnable(enableReporting ? 1 : 0);
            }

                                    static BatteryInformation GetBatteryInformation(uint32_t userIndex, BatteryDeviceType batteryDeviceType)
        {
                if (Version == XInputVersion.Version910)
                {
                    ThrowNotSupportedXInput91("XInputGetBatteryInformation");
                }

                s_XInputGetBatteryInformation(userIndex, batteryDeviceType, out BatteryInformation result);
                return result{};
            }

                                        static bool GetBatteryInformation(uint32_t userIndex, BatteryDeviceType batteryDeviceType, BatteryInformation& batteryInformation)
        {
                return s_XInputGetBatteryInformation(userIndex, batteryDeviceType, out batteryInformation) == 0;
            }

                                        static bool GetCapabilities(uint32_t userIndex, DeviceQueryType deviceQueryType, Capabilities& capabilities)
        {
                return s_XInputGetCapabilities(userIndex, deviceQueryType, out capabilities) == 0;
            }

                                    static bool GetKeystroke(uint32_t userIndex, Keystroke& keystroke)
        {
                if (Version == XInputVersion.Version910)
                {
                    ThrowNotSupportedXInput91("XInputGetKeystroke");
                }

                return s_XInputGetKeystroke(userIndex, 0u, out keystroke) == 0;
            }

            static uint32_t GetAudioDeviceIds(uint32_t userIndex, void* renderDeviceId, void* renderCount, void* captureDeviceId, void* captureCount)
        {
                if (Version != XInputVersion.Version14)
                {
                    throw new NotSupportedException($"XInputGetAudioDeviceIds is only supported on XInput 1.4") = 0;
                }

                return s_XInputGetAudioDeviceIds(userIndex param, renderDeviceId param, renderCount param, captureDeviceId param, captureCount param) = 0;
            }

            static void ThrowNotSupportedXInput91(const std::string& name)
        {
                throw new NotSupportedException($"{name} is not supported on XInput9.1.0") = 0;
            }

            static intptr_t LoadXInputLibrary(XInputVersion& version)
        {
                if (NativeLibrary.TryLoad("xinput1_4.dll", out IntPtr libraryHandle))
                {
                    version = XInputVersion.Version14;
                    return libraryHandle{};
                }
                else if (NativeLibrary.TryLoad("xinput1_3.dll", out libraryHandle))
                {
                    version = XInputVersion.Version13;
                    return libraryHandle{};
                }
                else if (NativeLibrary.TryLoad("xinput9_1_0.dll", out libraryHandle))
                {
                    version = XInputVersion.Version910;
                    return libraryHandle{};
                }

                version = XInputVersion.Invalid;
                return 0{};
            }

            static intptr_t GetExport(const std::string& name)
        { NativeLibrary.GetExport(s_xinputLibrary, name);
        }


    }
}

#endif // VORTICE_XINPUT_H