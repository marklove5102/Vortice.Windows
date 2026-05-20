// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11ON12DEVICE2_H
#define VORTICE_ID3D11ON12DEVICE2_H

#include <cstdint>
#include <vector>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace Direct3D11on12 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11on12;
        publicclass ID3D11On12Device2
        {
            public T UnwrapUnderlyingResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D11Resource resource, ComObject commandQueue) where T : ComObject
            {
                UnwrapUnderlyingResource(resource, commandQueue, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public Result UnwrapUnderlyingResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ID3D11Resource resource, ComObject commandQueue, out T? resource12) where T : ComObject
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
            publicResult ReturnUnderlyingResource(ID3D11Resource resource11, const std::vector<uint64_t>& signalValues, const std::vector<ComObject>& fences)
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
                    return ReturnUnderlyingResource(resource11, (uint)signalValues.Length, pSignalValues, ppFences);
                }
            }
            publicResult ReturnUnderlyingResource(ID3D11Resource resource11, const std::span<const uint64_t>& signalValues, const std::span<const ComObject>& fences)
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
                    return ReturnUnderlyingResource(resource11, (uint)signalValues.Length, pSignalValues, ppFences);
                }
            }
        }

    }
}

#endif // VORTICE_ID3D11ON12DEVICE2_H