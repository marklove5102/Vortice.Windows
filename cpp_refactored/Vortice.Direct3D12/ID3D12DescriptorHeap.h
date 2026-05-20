// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DESCRIPTORHEAP_H
#define VORTICE_ID3D12DESCRIPTORHEAP_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12DescriptorHeap
        {
            private: uint32_t GetCPUDescriptorHandleForHeapStart__vtbl_index{};
            private: uint32_t GetGPUDescriptorHandleForHeapStart__vtbl_index{};

                        CpuDescriptorHandle GetCPUDescriptorHandleForHeapStart(void)
        {
                // Implement vkd3d-native behavior on Linux
                // See https://github.com/HansKristian-Work/vkd3d-proton/blob/fc2b6f419008ffc5fbdee8564c70cded29abf7bb/libs/vkd3d/resource.c#L7447 if(PlatformDetection::IsItaniumSystemV param)
        {
                    CpuDescriptorHandle result{};
                    return *((delegate* unmanaged<nint, CpuDescriptorHandle*, CpuDescriptorHandle*>)this)(NativePointer, &result);
                }

                return ((delegate* unmanaged<nint, CpuDescriptorHandle>)this)(NativePointer);
            }

                        GpuDescriptorHandle GetGPUDescriptorHandleForHeapStart(void)
        {
                // Implement vkd3d-native behavior on Linux
                // See https://github.com/HansKristian-Work/vkd3d-proton/blob/fc2b6f419008ffc5fbdee8564c70cded29abf7bb/libs/vkd3d/resource.c#L7459 if(PlatformDetection::IsItaniumSystemV param)
        {
                    GpuDescriptorHandle result{};
                    return *((delegate* unmanaged<nint, GpuDescriptorHandle*, GpuDescriptorHandle*>)this)(NativePointer, &result);
                }

                return ((delegate* unmanaged<nint, GpuDescriptorHandle>)this)(NativePointer);
            }
        }


    }
}

#endif // VORTICE_ID3D12DESCRIPTORHEAP_H