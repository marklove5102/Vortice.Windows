// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ENUMEFFECTSCALLBACK_H
#define VORTICE_DIRECTINPUT_ENUMEFFECTSCALLBACK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENUMEFFECTSCALLBACK_H
#define VORTICE_VORTICE_ENUMEFFECTSCALLBACK_H

#include <cstdint>

namespace Vortice {

class EnumEffectsCallback
{
public:
    constexpr EnumEffectsCallback()
    unsafe
        {
            _callback = new DirectInputEnumEffectsDelegate(DirectInputEnumEffectsImpl);
            NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
            EffectInfos = new List<EffectInfo>();
        }
    ~EnumEffectsCallback() = default;

    void* NativePointer{};
    std::vector<EffectInfo> EffectInfos{};


private:
    const DirectInputEnumEffectsDelegate _callback;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENUMEFFECTSCALLBACK_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ENUMEFFECTSCALLBACK_H
