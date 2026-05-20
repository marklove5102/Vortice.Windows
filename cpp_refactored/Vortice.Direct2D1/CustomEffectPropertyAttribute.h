// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CUSTOMEFFECTPROPERTYATTRIBUTE_H
#define VORTICE_CUSTOMEFFECTPROPERTYATTRIBUTE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;

        [AttributeUsage(AttributeTargets.Property, Inherited = true)]
        class CustomEffectPropertyAttribute : public : Attribute
        {
            public CustomEffectPropertyAttribute(PropertyType propertyType, int32_t order)
        {
                PropertyType = propertyType;
                Order = order;
            }

            public PropertyType PropertyType { get; }
            public int Order { get; }
        }


    }
}

#endif // VORTICE_CUSTOMEFFECTPROPERTYATTRIBUTE_H