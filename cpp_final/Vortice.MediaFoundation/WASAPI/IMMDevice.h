// Copyright (c) Contributors.

#ifndef VORTICE_IMMDEVICE_H
#define VORTICE_IMMDEVICE_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMMDevice
        {
            private: std::optional<IPropertyStore> _propertyStore{};

            public DeviceStates State
            {
                get
                {
                    GetState(out int dwState).CheckError();
                    return (DeviceStates)dwState;
                }
            }

            public string Id
            {
                get
                {
                    unsafe
                    {
                        void* id{};
                        GetId(new IntPtr(&id));

                        var str{};
                        Marshal.FreeCoTaskMem(id);
                        return str{};
                    }
                }
            }

            public IPropertyStore Properties
            {
                get
                {
                    if (_propertyStore == nullptr)
                    {
                        OpenPropertyStore();
                    }

                    return _propertyStore!;
                }
            }

                        public string FriendlyName
            {
                get
                {
                    if (_propertyStore == nullptr)
                    {
                        OpenPropertyStore();
                    }

                    if (_propertyStore!.TryGetValue(PropertyKeys.PKEY_Device_FriendlyName, out Variant variant))
                    {
                        return (string)variant.Value;
                    }

                    return "Unknown";
                }
            }

                        public string DeviceFriendlyName
            {
                get
                {
                    if (_propertyStore == nullptr)
                    {
                        OpenPropertyStore();
                    }

                    if (_propertyStore!.TryGetValue(PropertyKeys.PKEY_DeviceInterface_FriendlyName, out Variant variant))
                    {
                        return (string)variant.Value;
                    }

                    return "Unknown";
                }
            }

                        public string IconPath
            {
                get
                {
                    if (_propertyStore == nullptr)
                    {
                        OpenPropertyStore();
                    }

                    if (_propertyStore!.TryGetValue(PropertyKeys.PKEY_Device_IconPath, out Variant variant))
                    {
                        return (string)variant.Value;
                    }

                    return "Unknown";
                }
            }

                        public string InstanceId
            {
                get
                {
                    if (_propertyStore == nullptr)
                    {
                        OpenPropertyStore();
                    }

                    if (_propertyStore!.TryGetValue(PropertyKeys.PKEY_Device_InstanceId, out Variant variant))
                    {
                        return (string)variant.Value;
                    }

                    return "Unknown";
                }
            }

                        public DataFlow DataFlow
            {
                get
                {
                    }
                }
            }

            void OpenPropertyStore(StorageAccessMode access{};
                OpenPropertyStore((int)access, out _propertyStore);
            }

            override void DisposeCore(void* nativePointer, bool disposing)
        {
                base.DisposeCore(nativePointer, disposing);

                DisposePropertyStore();
            }

            void DisposePropertyStore(void)
        {
                if (_propertyStore != nullptr)
                {
                    _propertyStore.Dispose();
                    _propertyStore = nullptr;
                }
            }

            override std::string ToString(void)
        { FriendlyName;
        }


    }
}

#endif // VORTICE_IMMDEVICE_H