// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_EXPOSURE_H
#define VORTICE_DIRECT2D1_EXPOSURE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EXPOSURE_H
#define VORTICE_VORTICE_EXPOSURE_H

#include <cstdint>

namespace Vortice {

class Exposure : public ID2D1Effect
{
public:
    constexpr Exposure(ID2D1DeviceContext context)
    {}

    constexpr Exposure(ID2D1EffectContext context)
    {}

    ~Exposure() = default;

    float get_Value() const { GetFloatValue((int)ExposureProperties.ExposureValue) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_EXPOSURE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_EXPOSURE_H
