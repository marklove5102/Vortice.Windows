// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE3_H
#define VORTICE_ID3D12DEVICE3_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Device3
        {
                        Result EnqueueMakeResident(ResidencyFlags flags, const std::vector<ID3D12Pageable>& objects, ID3D12Fence fenceToSignal, uint64_t fenceValueToSignal)
        {
                return EnqueueMakeResident(flags, (uint)(objects?.Length ?? 0), objects, fenceToSignal, fenceValueToSignal);
            }

                                        public T OpenExistingHeapFromAddress<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr address) where T : ID3D12Heap
            {
                OpenExistingHeapFromAddress(address, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result OpenExistingHeapFromAddress<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr address, out T? heap) where T : ID3D12Heap
            {
                Result result{};
                if (result.Failure)
                {
                    heap = default;
                    return result{};
                }

                heap = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T OpenExistingHeapFromFileMapping<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr fileMapping) where T : ID3D12Heap
            {
                OpenExistingHeapFromFileMapping(fileMapping, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result OpenExistingHeapFromFileMapping<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr fileMapping, out T? heap) where T : ID3D12Heap
            {
                Result result{};
                if (result.Failure)
                {
                    heap = default;
                    return result{};
                }

                heap = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE3_H