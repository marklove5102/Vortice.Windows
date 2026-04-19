// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_BITMAPSOURCE_H
#define VORTICE_DIRECT2D1_BITMAPSOURCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BITMAPSOURCE_H
#define VORTICE_VORTICE_BITMAPSOURCE_H

#include <cstdint>

namespace Vortice {

class BitmapSource : public ID2D1Effect
{
public:
    constexpr BitmapSource(ID2D1DeviceContext context)
    {}

    constexpr BitmapSource(ID2D1EffectContext context)
    {}

    ~BitmapSource() = default;

    Vector2 get_Scale() const { GetVector2Value((int)BitmapSourceProperties.Scale) }
    BitmapSourceInterpolationMode get_InterpolationMode() const { GetEnumValue<BitmapSourceInterpolationMode>((int)BitmapSourceProperties.InterpolationMode) }
    bool get_EnableDpiCorrection() const { GetBoolValue((int)BitmapSourceProperties.EnableDpiCorrection) }
    BitmapSourceAlphaMode get_AlphaMode() const { GetEnumValue<BitmapSourceAlphaMode>((int)BitmapSourceProperties.AlphaMode) }
    BitmapSourceOrientation get_Orientation() const { GetEnumValue<BitmapSourceOrientation>((int)BitmapSourceProperties.Orientation) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BITMAPSOURCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_BITMAPSOURCE_H
