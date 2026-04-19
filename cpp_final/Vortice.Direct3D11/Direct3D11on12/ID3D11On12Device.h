// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11ON12DEVICE_H
#define VORTICE_ID3D11ON12DEVICE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D11on12 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11on12;

        class ID3D11On12Device
        {
            public T CreateWrappedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IUnknown d3d12Resource, ResourceFlags flags, ResourceStates inState, ResourceStates outState)
                where T : ID3D11Resource
            {
                CreateWrappedResource(d3d12Resource, flags, inState, outState, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateWrappedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IUnknown d3d12Resource, ResourceFlags flags, ResourceStates inState, ResourceStates outState, out T? resource11)
                where T : ID3D11Resource
            {
                Result result{};
                if (result.Success)
                {
                    resource11 = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                resource11 = nullptr;
                return result{};
            }

            void AcquireWrappedResources(const std::vector<ID3D11Resource>& resources)
        {
                AcquireWrappedResources(resources, (uint)resources.Length);
            }

            void ReleaseWrappedResources(const std::vector<ID3D11Resource>& resources)
        {
                ReleaseWrappedResources(resources, (uint)resources.Length);
            }
        }


    }
}

#endif // VORTICE_ID3D11ON12DEVICE_H