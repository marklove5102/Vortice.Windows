// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ENUMDEVICESCALLBACK_H
#define VORTICE_DIRECTINPUT_ENUMDEVICESCALLBACK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENUMDEVICESCALLBACK_H
#define VORTICE_VORTICE_ENUMDEVICESCALLBACK_H

#include <cstdint>

namespace Vortice {

class EnumDevicesCallback
{
public:
    constexpr EnumDevicesCallback()
    _callback = new DirectInputEnumDevicesDelegate(DirectInputEnumDevicesImpl);
        NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
        DeviceInstances = new List<DeviceInstance>();
    ~EnumDevicesCallback() = default;

    void* NativePointer{};
    std::vector<DeviceInstance> DeviceInstances{};


private:
    const DirectInputEnumDevicesDelegate _callback;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENUMDEVICESCALLBACK_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ENUMDEVICESCALLBACK_H
