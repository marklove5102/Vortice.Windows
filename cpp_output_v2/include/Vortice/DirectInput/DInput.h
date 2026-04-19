// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_DINPUT_H
#define VORTICE_DIRECTINPUT_DINPUT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DINPUT_H
#define VORTICE_VORTICE_DINPUT_H

#include <cstdint>

namespace Vortice {

class DInput
{
public:
    ~DInput() = default;

    static IDirectInput8 DirectInput8Create() { DirectInput8Create(hinstance, SdkVersion, typeid(IDirectInput8).GUID, out IntPtr nativePtr, nullptr).CheckError();
        return new IDirectInput8(nativePtr); }

    static IDirectInput8 DirectInput8Create() { DirectInput8Create(GetModuleHandle(nullptr), SdkVersion, typeid(IDirectInput8).GUID, out IntPtr nativePtr, nullptr).CheckError();
        return new IDirectInput8(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DINPUT_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_DINPUT_H
