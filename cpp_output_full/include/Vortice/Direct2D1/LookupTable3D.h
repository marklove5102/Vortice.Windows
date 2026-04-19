// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_LOOKUPTABLE3D_H
#define VORTICE_DIRECT2D1_LOOKUPTABLE3D_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LOOKUPTABLE3D_H
#define VORTICE_VORTICE_LOOKUPTABLE3D_H

#include <cstdint>

namespace Vortice {

class LookupTable3D : public ID2D1Effect
{
public:
    constexpr LookupTable3D(ID2D1DeviceContext context)
    {}

    constexpr LookupTable3D(ID2D1EffectContext context)
    {}

    ~LookupTable3D() = default;

    AlphaMode get_AlphaMode() const { GetEnumValue<AlphaMode>((int)LookupTable3DProperties.Lut) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_LOOKUPTABLE3D_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_LOOKUPTABLE3D_H
