// Copyright (c) Contributors.

#ifndef VORTICE_IDIRECT3DDEVICE9ON12_H
#define VORTICE_IDIRECT3DDEVICE9ON12_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D9on12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D9on12;

        class IDirect3DDevice9On12
        {
            public Result GetD3D12Device<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? device) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(devicePtr);
                return result{};
            }

            public T GetD3D12Device<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                GetD3D12Device(typeof(T).GUID, out IntPtr devicePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(devicePtr)!;
            }

            public T UnwrapUnderlyingResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDirect3DResource9 resource, ComObject commandQueue) where T : ComObject
            {
                UnwrapUnderlyingResource(resource, commandQueue, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result UnwrapUnderlyingResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDirect3DResource9 resource, ComObject commandQueue, out T? resource12) where T : ComObject
            {
                Result result{};
                if (result.Success)
                {
                    resource12 = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }

                resource12 = nullptr;
                return result{};
            }

            Result ReturnUnderlyingResource(IDirect3DResource9 resource, const std::vector<uint64_t>& signalValues, const std::vector<ComObject>& fences)
        {
                if (signalValues.Length != fences.Length)
                {
                    throw new ArgumentException($"{nameof(signalValues)} and {nameof(fences)} length must be the same");
                }

                IntPtr* ppFences = stackalloc IntPtr{};
                for (int32_t i{}; i < fences.Length; i++)
                {
                    ppFences= (fences== nullptr) ? IntPtr.Zero : fences.NativePointer;
                }

                fixed (ulong* pSignalValues = signalValues)
                {
                    return ReturnUnderlyingResource(resource, (uint)signalValues.Length, pSignalValues, ppFences);
                }
            }

            Result ReturnUnderlyingResource(IDirect3DResource9 resource, const span<const uint64_t>& signalValues, const span<const ComObject>& fences)
        {
                if (signalValues.Length != fences.Length)
                {
                    throw new ArgumentException($"{nameof(signalValues)} and {nameof(fences)} length must be the same");
                }

                IntPtr* ppFences = stackalloc IntPtr{};
                for (int32_t i{}; i < fences.Length; i++)
                {
                    ppFences= (fences== nullptr) ? IntPtr.Zero : fences.NativePointer;
                }

                fixed (ulong* pSignalValues = signalValues)
                {
                    return ReturnUnderlyingResource(resource, (uint)signalValues.Length, pSignalValues, ppFences);
                }
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DDEVICE9ON12_H