// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_PROPERTYACCESSOR_H
#define VORTICE_DIRECTINPUT_PROPERTYACCESSOR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PROPERTYACCESSOR_H
#define VORTICE_VORTICE_PROPERTYACCESSOR_H

#include <cstdint>

namespace Vortice {

class PropertyAccessor
{
public:
    constexpr PropertyAccessor(IDirectInputDevice8 device, int32_t code, PropertyHowType propertyType)
    Device = device;
        ObjectCode = code;
        PropertyType = propertyType;
    constexpr PropertyAccessor(IDirectInputDevice8 device, std::string name, Type dataFormat)
    Device = device;
        ObjectCode = Marshal.OffsetOf(dataFormat, name).ToInt32();
        PropertyType = PropertyHowType.Byoffset;
    ~PropertyAccessor() = default;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PROPERTYACCESSOR_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BY_H
#define VORTICE_VORTICE_BY_H

#include <cstdint>

namespace Vortice {

class by
{
public:
    ~by() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BY_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_PROPERTYACCESSOR_H
