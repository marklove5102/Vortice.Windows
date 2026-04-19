// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_PROPERTYKEYS_H
#define VORTICE_DIRECTX_PROPERTYKEYS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PROPERTYKEYS_H
#define VORTICE_VORTICE_PROPERTYKEYS_H

#include <cstdint>

namespace Vortice {

class PropertyKeys
{
public:
    ~PropertyKeys() = default;

    static const PropertyKey PKEY_DeviceInterface_FriendlyName{new(new Guid(0x026e516e, unchecked((short)0xb814), 0x414b, 0x83, 0xcd, 0x85, 0x6d, 0x6f, 0xef, 0x48, 0x22), 2)};
    static const PropertyKey PKEY_AudioEndpoint_FormFactor{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 0)};
    static const PropertyKey PKEY_AudioEndpoint_ControlPanelPageProvider{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 1)};
    static const PropertyKey PKEY_AudioEndpoint_Association{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 2)};
    static const PropertyKey PKEY_AudioEndpoint_PhysicalSpeakers{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 3)};
    static const PropertyKey PKEY_AudioEndpoint_GUID{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 4)};
    static const PropertyKey PKEY_AudioEndpoint_Disable_SysFx{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 5)};
    static const PropertyKey PKEY_AudioEndpoint_FullRangeSpeakers{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 6)};
    static const PropertyKey PKEY_AudioEndpoint_Supports_EventDriven_Mode{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 7)};
    static const PropertyKey PKEY_AudioEndpoint_JackSubType{new(new Guid(0x1da5d803, unchecked((short)0xd492), 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e), 8)};
    static const PropertyKey PKEY_AudioEngine_DeviceFormat{new(new Guid(unchecked((int)0xf19f064d), 0x82c, 0x4e27, 0xbc, 0x73, 0x68, 0x82, 0xa1, 0xbb, 0x8e, 0x4c), 0)};
    static const PropertyKey PKEY_AudioEngine_OEMFormat{new(new Guid(unchecked((int)0xe4870e26), 0x3cc5, 0x4cd2, 0xba, 0x46, 0xca, 0xa, 0x9a, 0x70, 0xed, 0x4), 3)};
    static const PropertyKey PKEY_Device_FriendlyName{new(new Guid(unchecked((int)0xa45c254e), unchecked((short)0xdf1c), 0x4efd, 0x80, 0x20, 0x67, 0xd1, 0x46, 0xa8, 0x50, 0xe0), 14)};
    static const PropertyKey PKEY_Device_IconPath{new(new Guid(unchecked((int)0x259abffc), unchecked((short)0x50a7), 0x47ce, 0xaf, 0x8, 0x68, 0xc9, 0xa7, 0xd7, 0x33, 0x66), 12)};
    static const PropertyKey PKEY_Device_DeviceDesc{new(new Guid(unchecked((int)0xa45c254e), unchecked((short)0xdf1c), 0x4efd, 0x80, 0x20, 0x67, 0xd1, 0x46, 0xa8, 0x50, 0xe0), 2)};
    static const PropertyKey PKEY_Device_ControllerDeviceId{new(new Guid(unchecked((int)0xb3f8fa53), unchecked((short)0x0004), 0x438e, 0x90, 0x03, 0x51, 0xa4, 0x6e, 0x13, 0x9b, 0xfc), 2)};
    static const PropertyKey PKEY_Device_InterfaceKey{new(new Guid(unchecked((int)0x233164c8), unchecked((short)0x1b2c), 0x4c7d, 0xbc, 0x68, 0xb6, 0x71, 0x68, 0x7a, 0x25, 0x67), 1)};
    static const PropertyKey PKEY_Device_InstanceId{new(new Guid(0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57), 256)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PROPERTYKEYS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_KEY_H
#define VORTICE_VORTICE_KEY_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) key
{
public:
    virtual ~key() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_KEY_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_PROPERTYKEYS_H
