// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_EDGEDETECTION_H
#define VORTICE_DIRECT2D1_EDGEDETECTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EDGEDETECTION_H
#define VORTICE_VORTICE_EDGEDETECTION_H

#include <cstdint>

namespace Vortice {

class EdgeDetection : public ID2D1Effect
{
public:
    constexpr EdgeDetection(ID2D1DeviceContext context)
    {}

    constexpr EdgeDetection(ID2D1EffectContext context)
    {}

    ~EdgeDetection() = default;

    float get_Strength() const { GetFloatValue((int)EdgeDetectionProperties.Strength) }
    float get_BlurRadius() const { GetFloatValue((int)EdgeDetectionProperties.BlurRadius) }
    EdgeDetectionMode get_Mode() const { GetEnumValue<EdgeDetectionMode>((int)EdgeDetectionProperties.Mode) }
    bool get_OverlayEdges() const { GetBoolValue((int)EdgeDetectionProperties.OverlayEdges) }
    AlphaMode get_AlphaMode() const { GetEnumValue<AlphaMode>((int)EdgeDetectionProperties.AlphaMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_EDGEDETECTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_EDGEDETECTION_H
