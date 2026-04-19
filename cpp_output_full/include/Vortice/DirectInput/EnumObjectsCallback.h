// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ENUMOBJECTSCALLBACK_H
#define VORTICE_DIRECTINPUT_ENUMOBJECTSCALLBACK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENUMOBJECTSCALLBACK_H
#define VORTICE_VORTICE_ENUMOBJECTSCALLBACK_H

#include <cstdint>

namespace Vortice {

class EnumObjectsCallback
{
public:
    constexpr EnumObjectsCallback()
    unsafe
        {
            _callback = new DirectInputEnumObjectsDelegate(DirectInputEnumObjectsImpl);
            NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
            Objects = new List<DeviceObjectInstance>();
        }
    ~EnumObjectsCallback() = default;

    void* NativePointer{};
    std::vector<DeviceObjectInstance> Objects{};


private:
    const DirectInputEnumObjectsDelegate _callback;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENUMOBJECTSCALLBACK_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ENUMOBJECTSCALLBACK_H
