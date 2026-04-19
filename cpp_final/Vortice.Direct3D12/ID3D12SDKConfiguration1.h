// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12SDKCONFIGURATION1_H
#define VORTICE_ID3D12SDKCONFIGURATION1_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12SDKConfiguration1
        {
            ID3D12DeviceFactory CreateDeviceFactory(uint32_t sdkVersion, const std::string& sdkPath)
        {
                CreateDeviceFactory(sdkVersion, sdkPath, typeof(ID3D12DeviceFactory).GUID, out IntPtr nativePtr).CheckError();
                return new(nativePtr param) = 0;
            }

            Result CreateDeviceFactory(uint32_t sdkVersion, const std::string& sdkPath, std::optional<ID3D12DeviceFactory>& factory)
        {
                Result result{};

                if (result.Failure)
                {
                    factory = nullptr;
                    return result{};
                }

                factory = new(nativePtr);
                return result{};
            }

            public T CreateDeviceFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint sdkVersion, string sdkPath) where T : ID3D12DeviceFactory
            {
                CreateDeviceFactory(sdkVersion, sdkPath, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateDeviceFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint sdkVersion, string sdkPath, out T? factory) where T : ID3D12DeviceFactory
            {
                Result result{};

                if (result.Failure)
                {
                    factory = nullptr;
                    return result{};
                }

                factory = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12SDKCONFIGURATION1_H