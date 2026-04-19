// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CUSTOMEFFECTPROPERTYATTRIBUTE_H
#define VORTICE_DIRECT2D1_CUSTOMEFFECTPROPERTYATTRIBUTE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUSTOMEFFECTPROPERTYATTRIBUTE_H
#define VORTICE_VORTICE_CUSTOMEFFECTPROPERTYATTRIBUTE_H

#include <cstdint>

namespace Vortice {

class CustomEffectPropertyAttribute : public Attribute
{
public:
    constexpr CustomEffectPropertyAttribute(PropertyType propertyType, int32_t order)
    PropertyType = propertyType;
        Order = order;
    ~CustomEffectPropertyAttribute() = default;

    PropertyType PropertyType{};
    int32_t Order{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUSTOMEFFECTPROPERTYATTRIBUTE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CUSTOMEFFECTPROPERTYATTRIBUTE_H
