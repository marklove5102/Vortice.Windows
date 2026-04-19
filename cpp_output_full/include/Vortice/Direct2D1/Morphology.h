// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_MORPHOLOGY_H
#define VORTICE_DIRECT2D1_MORPHOLOGY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MORPHOLOGY_H
#define VORTICE_VORTICE_MORPHOLOGY_H

#include <cstdint>

namespace Vortice {

class Morphology : public ID2D1Effect
{
public:
    constexpr Morphology(ID2D1DeviceContext context)
    {}

    constexpr Morphology(ID2D1EffectContext context)
    {}

    ~Morphology() = default;

    MorphologyMode get_Mode() const { GetEnumValue<MorphologyMode>((int)MorphologyProperties.Mode) }
    int32_t get_Width() const { (int)GetUIntValue((int)MorphologyProperties.Width) }
    int32_t get_Height() const { (int)GetUIntValue((int)MorphologyProperties.Height) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MORPHOLOGY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_MORPHOLOGY_H
