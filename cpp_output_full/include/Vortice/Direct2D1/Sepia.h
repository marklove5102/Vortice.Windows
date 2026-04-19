// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_SEPIA_H
#define VORTICE_DIRECT2D1_SEPIA_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SEPIA_H
#define VORTICE_VORTICE_SEPIA_H

#include <cstdint>

namespace Vortice {

class Sepia : public ID2D1Effect
{
public:
    constexpr Sepia(ID2D1DeviceContext context)
    {}

    constexpr Sepia(ID2D1EffectContext context)
    {}

    ~Sepia() = default;

    float get_Intensity() const { GetFloatValue((int)SepiaProperties.Intensity) }
    AlphaMode get_AlphaMode() const { GetEnumValue<AlphaMode>((int)SepiaProperties.AlphaMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SEPIA_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_SEPIA_H
