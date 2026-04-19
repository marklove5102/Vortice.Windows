// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICE1_H
#define VORTICE_ID3D11DEVICE1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        class ID3D11Device1
        {
            ID3D11DeviceContext1 CreateDeferredContext1(void)
        {
                return CreateDeferredContext1(0 param) = 0;
            }

            public ID3DDeviceContextState CreateDeviceContextState<T>(CreateDeviceContextStateFlags flags, FeatureLevel[] featureLevels, out FeatureLevel chosenFeatureLevel) where T : ComObject
            {
                return CreateDeviceContextState(
                    flags, featureLevels,
                    (uint)featureLevels.Length,
                    D3D11.SdkVersion,
                    typeof(T).GUID, out chosenFeatureLevel);
            }

                                    public T OpenSharedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr handle) where T : ID3D11Resource
            {
                OpenSharedResource1(handle, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result OpenSharedResource1<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr handle, out T? resource) where T : ID3D11Resource
            {
                Result result{};
                if (result.Success)
                {
                    resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                resource = default;
                return result{};
            }

            public T OpenSharedResourceByName<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string name, SharedResourceFlags access) where T : ID3D11Resource
            {
                OpenSharedResourceByName(name, (int)access, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result OpenSharedResourceByName<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(string name, SharedResourceFlags access, out T? resource) where T : ID3D11Resource
            {
                Result result{};
                if (result.Success)
                {
                    resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                resource = default;
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICE1_H