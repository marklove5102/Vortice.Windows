// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_ATTRIBUTES_H
#define VORTICE_DIRECTINPUT_ATTRIBUTES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DATAFORMATATTRIBUTE_H
#define VORTICE_VORTICE_DATAFORMATATTRIBUTE_H

#include <cstdint>

namespace Vortice {

class DataFormatAttribute : public Attribute
{
public:
    constexpr DataFormatAttribute(DataFormatFlag flags)
    Flags = flags;
    ~DataFormatAttribute() = default;

    DataFormatFlag Flags{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DATAFORMATATTRIBUTE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DATAOBJECTFORMATATTRIBUTE_H
#define VORTICE_VORTICE_DATAOBJECTFORMATATTRIBUTE_H

#include <cstdint>

namespace Vortice {

class DataObjectFormatAttribute : public Attribute
{
public:
    constexpr DataObjectFormatAttribute()
    Flags = ObjectDataFormatFlags.None;
        InstanceNumber = 0;
        Guid = "";
        TypeFlags = DeviceObjectTypeFlags.All;
    constexpr DataObjectFormatAttribute(std::string guid, DeviceObjectTypeFlags typeFlags)
    Guid = guid;
        TypeFlags = typeFlags;
        Flags = ObjectDataFormatFlags.None;
        InstanceNumber = 0;
        ArrayCount = 0;
    constexpr DataObjectFormatAttribute(std::string guid, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
    Guid = guid;
        TypeFlags = typeFlags;
        Flags = flags;
    constexpr DataObjectFormatAttribute(std::string guid, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
    Guid = guid;
        TypeFlags = typeFlags;
        Flags = flags;
        InstanceNumber = instanceNumber;
    constexpr DataObjectFormatAttribute(std::string guid, int32_t arrayCount, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
    Guid = guid;
        ArrayCount = arrayCount;
        TypeFlags = typeFlags;
        Flags = flags;
    constexpr DataObjectFormatAttribute(std::string guid, int32_t arrayCount, DeviceObjectTypeFlags typeFlags)
    Guid = guid;
        ArrayCount = arrayCount;
        TypeFlags = typeFlags;
        Flags = ObjectDataFormatFlags.None;
    constexpr DataObjectFormatAttribute(DeviceObjectTypeFlags typeFlags)
    TypeFlags = typeFlags;
        Flags = ObjectDataFormatFlags.None;
        InstanceNumber = 0;
        ArrayCount = 0;
    constexpr DataObjectFormatAttribute(DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
    TypeFlags = typeFlags;
        Flags = flags;
    constexpr DataObjectFormatAttribute(DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
    TypeFlags = typeFlags;
        Flags = flags;
        InstanceNumber = instanceNumber;
    constexpr DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags)
    ArrayCount = arrayCount;
        TypeFlags = typeFlags;
        Flags = ObjectDataFormatFlags.None;
    constexpr DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
    ArrayCount = arrayCount;
        TypeFlags = typeFlags;
        Flags = flags;
    constexpr DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
    ArrayCount = arrayCount;
        TypeFlags = typeFlags;
        Flags = flags;
        InstanceNumber = instanceNumber;
    constexpr DataObjectFormatAttribute(int32_t arrayCount, DeviceObjectTypeFlags typeFlags, int32_t instanceNumber)
    ArrayCount = arrayCount;
        TypeFlags = typeFlags;
        Flags = ObjectDataFormatFlags.None;
        InstanceNumber = instanceNumber;
    ~DataObjectFormatAttribute() = default;

    int32_t ArrayCount;
    DeviceObjectTypeFlags TypeFlags;
    ObjectDataFormatFlags Flags;
    int32_t InstanceNumber;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DATAOBJECTFORMATATTRIBUTE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_ATTRIBUTES_H
