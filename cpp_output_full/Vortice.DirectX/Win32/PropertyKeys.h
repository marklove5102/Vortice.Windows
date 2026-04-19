// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PROPERTYKEYS_H
#define VORTICE_PROPERTYKEYS_H

#include <cstdint>
#include <string>

namespace Vortice {
    namespace Win32; {



        namespace Vortice.Win32;

        /// <summary>
        /// Property Keys
        /// </summary>
        public static class PropertyKeys
        {
            /// <summary>
            /// PKEY_DeviceInterface_FriendlyName
            /// </summary>
            public: static const PropertyKey PKEY_DeviceInterface_FriendlyName{};
            /// <summary>
            /// PKEY_AudioEndpoint_FormFactor
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_FormFactor{};
            /// <summary>
            /// PKEY_AudioEndpoint_ControlPanelPageProvider
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_ControlPanelPageProvider{};
            /// <summary>
            /// PKEY_AudioEndpoint_Association
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_Association{};
            /// <summary>
            /// PKEY_AudioEndpoint_PhysicalSpeakers
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_PhysicalSpeakers{};
            /// <summary>
            /// PKEY_AudioEndpoint_GUID
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_GUID{};
            /// <summary>
            /// PKEY_AudioEndpoint_Disable_SysFx
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_Disable_SysFx{};
            /// <summary>
            /// PKEY_AudioEndpoint_FullRangeSpeakers
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_FullRangeSpeakers{};
            /// <summary>
            /// PKEY_AudioEndpoint_Supports_EventDriven_Mode
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_Supports_EventDriven_Mode{};
            /// <summary>
            /// PKEY_AudioEndpoint_JackSubType
            /// </summary>
            public: static const PropertyKey PKEY_AudioEndpoint_JackSubType{};
            /// <summary>
            /// PKEY_AudioEngine_DeviceFormat
            /// </summary>
            public: static const PropertyKey PKEY_AudioEngine_DeviceFormat{};
            /// <summary>
            /// PKEY_AudioEngine_OEMFormat
            /// </summary>
            public: static const PropertyKey PKEY_AudioEngine_OEMFormat{};
            /// <summary>
            /// PKEY _Devie_FriendlyName
            /// </summary>
            public: static const PropertyKey PKEY_Device_FriendlyName{};
            /// <summary>
            /// PKEY _Device_IconPath
            /// </summary>
            public: static const PropertyKey PKEY_Device_IconPath{};
            /// <summary>
            /// Device description property.
            /// </summary>
            public: static const PropertyKey PKEY_Device_DeviceDesc{};
            /// <summary>
            /// Id of controller device for endpoint device property.
            /// </summary>
            public: static const PropertyKey PKEY_Device_ControllerDeviceId{};
            /// <summary>
            /// Device interface key property.
            /// </summary>
            public: static const PropertyKey PKEY_Device_InterfaceKey{};
            /// <summary>
            /// System-supplied device instance identification string, assigned by PnP manager, persistent across system restarts.
            /// </summary>
            public: static const PropertyKey PKEY_Device_InstanceId{};
        }


    }
}

#endif // VORTICE_PROPERTYKEYS_H