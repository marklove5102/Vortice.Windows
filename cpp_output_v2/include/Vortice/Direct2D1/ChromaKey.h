// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CHROMAKEY_H
#define VORTICE_DIRECT2D1_CHROMAKEY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CHROMAKEY_H
#define VORTICE_VORTICE_CHROMAKEY_H

#include <cstdint>

namespace Vortice {

class ChromaKey : public ID2D1Effect
{
public:
    constexpr ChromaKey(ID2D1DeviceContext context)
    {}

    constexpr ChromaKey(ID2D1EffectContext context)
    {}

    ~ChromaKey() = default;

    Vector3 get_Color() const { GetVector3Value((int)ChromakeyProperties.Color) }
    float get_Tolerance() const { GetFloatValue((int)ChromakeyProperties.Tolerance) }
    bool get_InvertAlpha() const { GetBoolValue((int)ChromakeyProperties.InverseErtAlpha) }
    bool get_Feather() const { GetBoolValue((int)ChromakeyProperties.Feather) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CHROMAKEY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CHROMAKEY_H
