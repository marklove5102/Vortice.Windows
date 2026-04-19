// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_CAPABILITIES_H
#define VORTICE_DIRECTINPUT_CAPABILITIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CAPABILITIES_H
#define VORTICE_VORTICE_CAPABILITIES_H

#include <cstdint>

namespace Vortice {

struct Capabilities
{
public:
    DeviceType Type{> (DeviceType)(RawType & 0xFF)};
    int32_t Subtype{> RawType >> 8};
    bool IsHumanInterfaceDevice{> ((RawType & 0x10000) != 0)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CAPABILITIES_H

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

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_CAPABILITIES_H
