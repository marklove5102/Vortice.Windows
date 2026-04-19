// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CROP_H
#define VORTICE_DIRECT2D1_CROP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CROP_H
#define VORTICE_VORTICE_CROP_H

#include <cstdint>

namespace Vortice {

class Crop : public ID2D1Effect
{
public:
    constexpr Crop(ID2D1DeviceContext context)
    {}

    constexpr Crop(ID2D1EffectContext context)
    {}

    ~Crop() = default;

    Vector4 get_Rectangle() const { GetVector4Value((int)CropProperties.Rectangle) }
    BorderMode get_BorderMode() const { GetEnumValue<BorderMode>((int)CropProperties.BorderMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CROP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CROP_H
