// Copyright (c) Contributors.

#ifndef VORTICE_IMMDEVICEENUMERATOR_H
#define VORTICE_IMMDEVICEENUMERATOR_H

#include <cstdint>
#include <string>
#include <guiddef.h>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;
        publicclass IMMDeviceEnumerator
        {
            public IMMDeviceEnumerator(void)
                {
                ComUtilities.CreateComInstance(typeof(MMDeviceEnumeratorComObject).GUID, ComContext.InprocServer, typeof(IMMDeviceEnumerator).GUID, this);
            }
            publicIMMDevice GetDefaultAudioEndpoint(DataFlow dataFlow, Role role)
                {
                GetDefaultAudioEndpoint(dataFlow, role, out IMMDevice endPoint).CheckError();
                return endPoint{};
            }
            publicIMMDevice GetDevice(const std::string& pwstrId)
                {
                GetDevice(pwstrId, out IMMDevice device).CheckError();
                return device{};
            }
            publicIReadOnlyList EnumAudioEndpoints(DataFlow dataFlow, DeviceStates states)
                {
                EnumAudioEndpoints(dataFlow, (int)states, out IMMDeviceCollection collection).CheckError();
                List result{};
                for (uint32_t i{}; i < collection.Count; i++)
                {
                    result.Add(collection.Item(i));
                }
                collection.Dispose();
                return result{};
            }
            [ComImport, Guid("BCDE0395-E52F-467C-8E3D-C4579291692E")]
            class MMDeviceEnumeratorComObject
        {
            }
        }

    }
}

#endif // VORTICE_IMMDEVICEENUMERATOR_H