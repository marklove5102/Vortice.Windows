// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ENUMEFFECTSINFILECALLBACK_H
#define VORTICE_DIRECTINPUT_ENUMEFFECTSINFILECALLBACK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENUMEFFECTSINFILECALLBACK_H
#define VORTICE_VORTICE_ENUMEFFECTSINFILECALLBACK_H

#include <cstdint>

namespace Vortice {

class EnumEffectsInFileCallback
{
public:
    constexpr EnumEffectsInFileCallback()
    unsafe
        {
            _callback = new DirectInputEnumEffectsInFileDelegate(DirectInputEnumEffectsInFileImpl);
            NativePointer = Marshal.GetFunctionPointerForDelegate(_callback);
            EffectsInFile = new List<EffectFile>();
        }
    ~EnumEffectsInFileCallback() = default;

    void* NativePointer{};
    std::vector<EffectFile> EffectsInFile{};


private:
    const DirectInputEnumEffectsInFileDelegate _callback;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENUMEFFECTSINFILECALLBACK_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ENUMEFFECTSINFILECALLBACK_H
