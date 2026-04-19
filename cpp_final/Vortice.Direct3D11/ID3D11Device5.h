// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICE5_H
#define VORTICE_ID3D11DEVICE5_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        class ID3D11Device5
        {
            ID3D11Fence CreateFence(uint64_t initialValue, FenceFlags flags{};
                return new ID3D11Fence(nativePtr param) = 0;
            }

            public T CreateFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ulong initialValue, FenceFlags flags{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ulong initialValue, FenceFlags flags, out T? fence) where T: ID3D11Fence
            {
                Result result{};
                if (result.Success)
                {
                    fence = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                fence = default;
                return result{};
            }

            ID3D11Fence OpenSharedFence(void* fenceHandle)
        {
                OpenSharedFence(fenceHandle, typeof(ID3D11Fence).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D11Fence(nativePtr param) = 0;
            }

            public T OpenSharedFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr fenceHandle) where T : ID3D11Fence
            {
                OpenSharedFence(fenceHandle, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result OpenSharedFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr fenceHandle, out T? fence) where T : ID3D11Fence
            {
                Result result{};
                if (result.Success)
                {
                    fence = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                fence = default;
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICE5_H