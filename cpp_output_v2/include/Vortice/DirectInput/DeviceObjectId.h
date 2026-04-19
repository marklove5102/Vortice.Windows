// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_DEVICEOBJECTID_H
#define VORTICE_DIRECTINPUT_DEVICEOBJECTID_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICEOBJECTID_H
#define VORTICE_VORTICE_DEVICEOBJECTID_H

#include <cstdint>

namespace Vortice {

struct DeviceObjectId
{
public:
    constexpr DeviceObjectId(DeviceObjectTypeFlags typeFlags, int32_t instanceNumber)
    // Clear anyInstance flags and use instanceNumber
        _rawType = ((int)typeFlags & ~AnyInstanceMask) | ((instanceNumber < 0 | instanceNumber > InstanceNumberMax) ? 0 : ((instanceNumber & 0xFFFF) << 8));
    DeviceObjectTypeFlags get_Flags() const { return (DeviceObjectTypeFlags)(_rawType & ~AnyInstanceMask); }
    int32_t get_InstanceNumber() const { return (_rawType >> 8) & 0xFFFF; }

    bool Equals() { return other._rawType == _rawType; }

    bool Equals() override { if (ReferenceEquals(nullptr, obj)) return false;
        if (obj.GetType() != typeid(DeviceObjectId)) return false;
        return Equals((DeviceObjectId)obj); }

    int32_t GetHashCode() override { return _rawType; }


private:
    int32_t _rawType;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICEOBJECTID_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_DEVICEOBJECTID_H
