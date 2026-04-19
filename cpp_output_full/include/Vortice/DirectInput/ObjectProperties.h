// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_OBJECTPROPERTIES_H
#define VORTICE_DIRECTINPUT_OBJECTPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_OBJECTPROPERTIES_H
#define VORTICE_VORTICE_OBJECTPROPERTIES_H

#include <cstdint>

namespace Vortice {

class ObjectProperties : public PropertyAccessor
{
public:
    constexpr ObjectProperties(IDirectInputDevice8 device, int32_t code, PropertyHowType howType)
    {}

    ~ObjectProperties() = default;

    int32_t Granularity{> GetInt(PropertyGuids.Granularity)};
    InputRange LogicalRange{> GetRange(PropertyGuids.LogicalRange)};
    InputRange PhysicalRange{> GetRange(PropertyGuids.PhysicalRange)};

    int32_t get_DeadZone() const { GetInt(PropertyGuids.DeadZone) }
    InputRange get_Range() const { GetRange(PropertyGuids.Range) }
    int32_t get_Saturation() const { GetInt(PropertyGuids.Saturation) }
    int32_t get_BufferSize() const { GetInt(PropertyGuids.BufferSize) }
    bool get_AutoCenter() const { GetBool(PropertyGuids.AutoCenter) }
    DeviceAxisMode get_AxisMode() const { return (DeviceAxisMode)GetInt(PropertyGuids.AxisMode); }
    void set_AxisMode(DeviceAxisMode value) { Set(PropertyGuids.AxisMode, (int)value); }
    GUID get_ClassGuid() const { GetGuid(PropertyGuids.GuidAndPath) }
    int32_t get_ForceFeedbackGain() const { GetInt(PropertyGuids.FFGain) }
    std::string get_InstanceName() const { GetString(PropertyGuids.InstanceName) }
    std::string get_InterfacePath() const { GetPath(PropertyGuids.GuidAndPath) }
    int32_t get_JoystickId() const { GetInt(PropertyGuids.Joystickid) }
    int32_t get_MemoryLoad() const { GetInt(PropertyGuids.FFLoad) }
    std::string get_PortDisplayName() const { GetPath(PropertyGuids.GetPortDisplayName) }
    int32_t get_ProductId() const { (GetInt(PropertyGuids.VidPid) >> 16) & 0xFFFF }
    std::string get_ProductName() const { GetString(PropertyGuids.ProductName) }
    std::string get_TypeName() const { GetPath(PropertyGuids.TypeName) }
    std::string get_UserName() const { GetPath(PropertyGuids.UserName) }
    int32_t get_VendorId() const { GetInt(PropertyGuids.VidPid) & 0xFFFF }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_OBJECTPROPERTIES_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICE_H
#define VORTICE_VORTICE_DEVICE_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) device
{
public:
    virtual ~device() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICE_H
#define VORTICE_VORTICE_DEVICE_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) device
{
public:
    virtual ~device() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GUID_H
#define VORTICE_VORTICE_GUID_H

#include <cstdint>

namespace Vortice {

class GUID
{
public:
    ~GUID() = default;

    GUID get_ClassGuid() const { GetGuid(PropertyGuids.GuidAndPath) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GUID_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICE_H
#define VORTICE_VORTICE_DEVICE_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) device
{
public:
    virtual ~device() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GUID_H
#define VORTICE_VORTICE_GUID_H

#include <cstdint>

namespace Vortice {

class GUID
{
public:
    ~GUID() = default;

    GUID get_ClassGuid() const { GetGuid(PropertyGuids.GuidAndPath) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GUID_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PATH_H
#define VORTICE_VORTICE_PATH_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) path
{
public:
    virtual ~path() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PATH_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICE_H
#define VORTICE_VORTICE_DEVICE_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) device
{
public:
    virtual ~device() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PATH_H
#define VORTICE_VORTICE_PATH_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) path
{
public:
    virtual ~path() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PATH_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_OBJECTPROPERTIES_H
