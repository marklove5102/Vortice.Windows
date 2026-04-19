// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_DATAOBJECTFORMAT_H
#define VORTICE_DIRECTINPUT_DATAOBJECTFORMAT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_OBJECTDATAFORMAT_H
#define VORTICE_VORTICE_OBJECTDATAFORMAT_H

#include <cstdint>

namespace Vortice {

class ObjectDataFormat
{
public:
    constexpr ObjectDataFormat()
    {}

    constexpr ObjectDataFormat(GUID guid, int32_t offset, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags)
    {}

    constexpr ObjectDataFormat(GUID guid, int32_t offset, DeviceObjectTypeFlags typeFlags, ObjectDataFormatFlags flags, int32_t instanceNumber)
    Guid = guid;
        Offset = offset;
        TypeFlags = typeFlags;
        InstanceNumber = instanceNumber;
        Flags = flags;
    ~ObjectDataFormat() = default;

    void* GuidPointer;
    int32_t Offset;
    int32_t Type;
    ObjectDataFormatFlags Flags;

    GUID Guid{};
    int32_t Offset{};
    DeviceObjectTypeFlags TypeFlags{};
    int32_t InstanceNumber{};
    ObjectDataFormatFlags Flags{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_OBJECTDATAFORMAT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USED_H
#define VORTICE_VORTICE_USED_H

#include <cstdint>

namespace Vortice {

struct used
{
public:
    void* GuidPointer;
    int32_t Offset;
    int32_t Type;
    ObjectDataFormatFlags Flags;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_USED_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* GuidPointer;
    int32_t Offset;
    int32_t Type;
    ObjectDataFormatFlags Flags;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_DATAOBJECTFORMAT_H
