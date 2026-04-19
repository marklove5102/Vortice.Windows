// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORY4_H
#define VORTICE_IDXGIFACTORY4_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIFactory4
        {
                                    public Result EnumWarpAdapter<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? adapter) where T : IDXGIAdapter
            {
                Result result{};
                if (result.Success)
                {
                    adapter = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                adapter = nullptr;
                return result{};
            }

                                public T EnumWarpAdapter<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : IDXGIAdapter
            {
                EnumWarpAdapter(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                    public Result EnumAdapterByLuid<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Luid adapterLuid, out T? adapter) where T : IDXGIAdapter
            {
                Result result{};
                if (result.Success)
                {
                    adapter = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                adapter = nullptr;
                return result{};
            }

                                    public T EnumAdapterByLuid<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Luid adapterLuid) where T : IDXGIAdapter
            {
                EnumAdapterByLuid(adapterLuid, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_IDXGIFACTORY4_H