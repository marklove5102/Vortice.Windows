// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_EFFECTDESCRIPTOR_H
#define VORTICE_XAUDIO2_EFFECTDESCRIPTOR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EFFECTDESCRIPTOR_H
#define VORTICE_VORTICE_EFFECTDESCRIPTOR_H

#include <cstdint>

namespace Vortice {

class EffectDescriptor
{
public:
    constexpr EffectDescriptor(IUnknown effect)
    {}

    constexpr EffectDescriptor(IUnknown effect, uint32_t outputChannelCount)
    EffectPointer = nullptr;
        Effect = effect;
        InitialState = true;
        OutputChannelCount = outputChannelCount;
    ~EffectDescriptor() = default;

    IUnknown get_Effect() const { _effect }
    void set_Effect(IUnknown value) { if (value == nullptr)
                throw ArgumentNullException("value", "Effect cannot be set to nullptr");
            if (_effect != nullptr)
                throw ArgumentException("Cannot set Effect twice on the same EffectDescriptor");

            _effect = value;
            EffectPointer = _effect; }


private:
    IUnknown _effect;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_EFFECTDESCRIPTOR_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WITH_H
#define VORTICE_VORTICE_WITH_H

#include <cstdint>

namespace Vortice {

class with
{
public:
    ~with() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WITH_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_EFFECTDESCRIPTOR_H
