// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_COLORMANAGEMENT_H
#define VORTICE_DIRECT2D1_COLORMANAGEMENT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COLORMANAGEMENT_H
#define VORTICE_VORTICE_COLORMANAGEMENT_H

#include <cstdint>

namespace Vortice {

class ColorManagement : public ID2D1Effect
{
public:
    constexpr ColorManagement(ID2D1DeviceContext context)
    {}

    constexpr ColorManagement(ID2D1EffectContext context)
    {}

    ~ColorManagement() = default;

    ColorManagementRenderingIntent get_SourceRenderingIntent() const { GetEnumValue<ColorManagementRenderingIntent>((int)ColorManagementProperties.SourceRenderingIntent) }
    ColorManagementRenderingIntent get_DestinationRenderingIntent() const { GetEnumValue<ColorManagementRenderingIntent>((int)ColorManagementProperties.DestinationRenderingIntent) }
    ColorManagementAlphaMode get_AlphaMode() const { GetEnumValue<ColorManagementAlphaMode>((int)ColorManagementProperties.AlphaMode) }
    ColormanagementQuality get_Quality() const { GetEnumValue<ColormanagementQuality>((int)ColorManagementProperties.Quality) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_COLORMANAGEMENT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_COLORMANAGEMENT_H
