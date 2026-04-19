// Copyright (c) Contributors.

#ifndef VORTICE_DINPUT_H
#define VORTICE_DINPUT_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectInput;

        public static class DInput
        {
            static Result DirectInput8Create(void* hinstance, std::optional<IDirectInput8>& directInput)
        {
                Result result{};
                if (result.Failure)
                {
                    directInput = default;
                    return result{};
                }

                directInput = new IDirectInput8(nativePtr param) = 0;
                return result{};
            }

            static IDirectInput8 DirectInput8Create(void* hinstance)
        {
                DirectInput8Create(hinstance, SdkVersion, typeof(IDirectInput8).GUID, out IntPtr nativePtr, nullptr).CheckError();
                return new IDirectInput8(nativePtr param) = 0;
            }

            static Result DirectInput8Create(std::optional<IDirectInput8>& directInput)
        {
                Result result{};
                if (result.Failure)
                {
                    directInput = default;
                    return result{};
                }

                directInput = new IDirectInput8(nativePtr param) = 0;
                return result{};
            }

            static IDirectInput8 DirectInput8Create(void)
        {
                DirectInput8Create(GetModuleHandle(nullptr), SdkVersion, typeof(IDirectInput8).GUID, out IntPtr nativePtr, nullptr).CheckError();
                return new IDirectInput8(nativePtr param) = 0;
            }

            [DllImport("kernel32.dll", EntryPoint = "GetModuleHandleW", CharSet = CharSet.Unicode, SetLastError = true)]
            private static extern void* GetModuleHandle(const std::optional<std::string>& moduleName) = 0;
        }


    }
}

#endif // VORTICE_DINPUT_H