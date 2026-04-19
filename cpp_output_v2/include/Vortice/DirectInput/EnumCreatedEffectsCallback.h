// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ENUMCREATEDEFFECTSCALLBACK_H
#define VORTICE_DIRECTINPUT_ENUMCREATEDEFFECTSCALLBACK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENUMCREATEDEFFECTSCALLBACK_H
#define VORTICE_VORTICE_ENUMCREATEDEFFECTSCALLBACK_H

#include <cstdint>

namespace Vortice {

class EnumCreatedEffectsCallback
{
public:
    constexpr EnumCreatedEffectsCallback()
    unsafe
        {
            _callback = new DirectInputEnumCreatedEffectsDelegate(DirectInputEnumCreatedEffectsImpl);
            NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
            Effects = new List<IDirectInputEffect>();
        }
    ~EnumCreatedEffectsCallback() = default;

    void* NativePointer{};
    std::vector<IDirectInputEffect> Effects{};


private:
    const DirectInputEnumCreatedEffectsDelegate _callback;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENUMCREATEDEFFECTSCALLBACK_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ENUMCREATEDEFFECTSCALLBACK_H
