// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_HDRTONEMAP_H
#define VORTICE_DIRECT2D1_HDRTONEMAP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HDRTONEMAP_H
#define VORTICE_VORTICE_HDRTONEMAP_H

#include <cstdint>

namespace Vortice {

class HdrToneMap : public ID2D1Effect
{
public:
    constexpr HdrToneMap(ID2D1DeviceContext context)
    {}

    constexpr HdrToneMap(ID2D1EffectContext context)
    {}

    ~HdrToneMap() = default;

    float get_InputMaxLuminance() const { GetFloatValue((int)Props.InputMaxLuminance) }
    float get_OutputMaxLuminance() const { GetFloatValue((int)Props.OutputMaxLuminance) }
    HDRToneMapDisplayMode get_DisplayMode() const { GetEnumValue<HDRToneMapDisplayMode>((int)Props.DisplayMode) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HDRTONEMAP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_HDRTONEMAP_H
