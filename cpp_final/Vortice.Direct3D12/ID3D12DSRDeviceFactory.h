// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DSRDEVICEFACTORY_H
#define VORTICE_ID3D12DSRDEVICEFACTORY_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12DSRDeviceFactory
        {
            public T CreateDSRDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Device device, uint nodeMask) where T : ComObject
            {
                CreateDSRDevice(device, nodeMask, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateDSRDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D12Device device, uint nodeMask, out T? DSRDevice) where T : ComObject
            {
                Result result{};

                if (result.Failure)
                {
                    DSRDevice = nullptr;
                    return result{};
                }

                DSRDevice = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DSRDEVICEFACTORY_H