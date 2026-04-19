// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_ENUMDELEGATECALLBACK_H
#define VORTICE_DIRECTSOUND_ENUMDELEGATECALLBACK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENUMDELEGATECALLBACK_H
#define VORTICE_VORTICE_ENUMDELEGATECALLBACK_H

#include <cstdint>

namespace Vortice {

class EnumDelegateCallback
{
public:
    constexpr EnumDelegateCallback()
    _callback = new DirectSoundEnumDelegate(DirectSoundEnumImpl);
        NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
        Informations = [];
    ~EnumDelegateCallback() = default;

    void* NativePointer{};
    std::vector<DeviceInformation> Informations{};


private:
    DirectSoundEnumDelegate _callback;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENUMDELEGATECALLBACK_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_ENUMDELEGATECALLBACK_H
