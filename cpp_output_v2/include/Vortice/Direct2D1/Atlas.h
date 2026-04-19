// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ATLAS_H
#define VORTICE_DIRECT2D1_ATLAS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ATLAS_H
#define VORTICE_VORTICE_ATLAS_H

#include <cstdint>

namespace Vortice {

class Atlas : public ID2D1Effect
{
public:
    constexpr Atlas(ID2D1DeviceContext context)
    {}

    constexpr Atlas(ID2D1EffectContext context)
    {}

    ~Atlas() = default;

    Vector4 get_InputRectangle() const { GetVector4Value((int)AtlasProperties.InputRectangle) }
    Vector4 get_InputPaddingRect() const { GetVector4Value((int)AtlasProperties.InputPaddingRectangle) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ATLAS_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ATLAS_H
