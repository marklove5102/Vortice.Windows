// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_HIGHLIGHTSANDSHADOWS_H
#define VORTICE_DIRECT2D1_HIGHLIGHTSANDSHADOWS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HIGHLIGHTSANDSHADOWS_H
#define VORTICE_VORTICE_HIGHLIGHTSANDSHADOWS_H

#include <cstdint>

namespace Vortice {

class HighlightsAndShadows : public ID2D1Effect
{
public:
    constexpr HighlightsAndShadows(ID2D1DeviceContext context)
    {}

    constexpr HighlightsAndShadows(ID2D1EffectContext context)
    {}

    ~HighlightsAndShadows() = default;

    float get_Highlights() const { GetFloatValue((int)HighlightsAndShadowsProperties.Highlights) }
    float get_Shadows() const { GetFloatValue((int)HighlightsAndShadowsProperties.Shadows) }
    float get_Clarity() const { GetFloatValue((int)HighlightsAndShadowsProperties.Clarity) }
    HighlightsAndShadowsInputGamma get_InputGamma() const { GetEnumValue<HighlightsAndShadowsInputGamma>((int)HighlightsAndShadowsProperties.InputGamma) }
    float get_MaskBlurRadius() const { GetFloatValue((int)HighlightsAndShadowsProperties.MaskBlurRadius) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HIGHLIGHTSANDSHADOWS_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_HIGHLIGHTSANDSHADOWS_H
