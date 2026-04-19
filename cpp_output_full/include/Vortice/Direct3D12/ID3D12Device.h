// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12DEVICE_H
#define VORTICE_DIRECT3D12_ID3D12DEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12DEVICE_H
#define VORTICE_VORTICE_ID3D12DEVICE_H

#include <cstdint>

namespace Vortice {

class ID3D12Device
{
public:
    ~ID3D12Device() = default;

    int64_t get_AdapterLuid() const { long result;
            ((delegate* unmanaged[Stdcall]<IntPtr, long*, void>)this[GetAdapterLuid__vtbl_index])(NativePointer, &result);
            return result; }
    FeatureDataD3D12Options get_Options() const { CheckFeatureSupport<FeatureDataD3D12Options>(Feature.Options) }
    FeatureDataD3D12Options1 get_Options1() const { CheckFeatureSupport<FeatureDataD3D12Options1>(Feature.Options1) }
    FeatureDataD3D12Options2 get_Options2() const { CheckFeatureSupport<FeatureDataD3D12Options2>(Feature.Options2) }
    FeatureDataD3D12Options3 get_Options3() const { CheckFeatureSupport<FeatureDataD3D12Options3>(Feature.Options3) }
    FeatureDataD3D12Options4 get_Options4() const { CheckFeatureSupport<FeatureDataD3D12Options4>(Feature.Options4) }
    FeatureDataD3D12Options5 get_Options5() const { CheckFeatureSupport<FeatureDataD3D12Options5>(Feature.Options5) }
    FeatureDataD3D12Options6 get_Options6() const { CheckFeatureSupport<FeatureDataD3D12Options6>(Feature.Options6) }
    FeatureDataD3D12Options7 get_Options7() const { CheckFeatureSupport<FeatureDataD3D12Options7>(Feature.Options7) }
    FeatureDataD3D12Options8 get_Options8() const { CheckFeatureSupport<FeatureDataD3D12Options8>(Feature.Options8) }
    FeatureDataD3D12Options9 get_Options9() const { CheckFeatureSupport<FeatureDataD3D12Options9>(Feature.Options9) }
    FeatureDataD3D12Options10 get_Options10() const { CheckFeatureSupport<FeatureDataD3D12Options10>(Feature.Options10) }
    FeatureDataD3D12Options11 get_Options11() const { CheckFeatureSupport<FeatureDataD3D12Options11>(Feature.Options11) }
    FeatureDataD3D12Options12 get_Options12() const { CheckFeatureSupport<FeatureDataD3D12Options12>(Feature.Options12) }
    FeatureDataD3D12Options13 get_Options13() const { CheckFeatureSupport<FeatureDataD3D12Options13>(Feature.Options13) }
    FeatureDataD3D12Options14 get_Options14() const { CheckFeatureSupport<FeatureDataD3D12Options14>(Feature.Options14) }
    FeatureDataD3D12Options15 get_Options15() const { CheckFeatureSupport<FeatureDataD3D12Options15>(Feature.Options15) }
    FeatureDataD3D12Options16 get_Options16() const { CheckFeatureSupport<FeatureDataD3D12Options16>(Feature.Options16) }
    FeatureDataD3D12Options17 get_Options17() const { CheckFeatureSupport<FeatureDataD3D12Options17>(Feature.Options17) }
    FeatureDataD3D12Options18 get_Options18() const { CheckFeatureSupport<FeatureDataD3D12Options18>(Feature.Options18) }
    FeatureDataD3D12Options19 get_Options19() const { CheckFeatureSupport<FeatureDataD3D12Options19>(Feature.Options19) }
    FeatureDataD3D12Options20 get_Options20() const { CheckFeatureSupport<FeatureDataD3D12Options20>(Feature.Options20) }
    FeatureDataD3D12Options21 get_Options21() const { CheckFeatureSupport<FeatureDataD3D12Options21>(Feature.Options21) }
    FeatureDataArchitecture get_Architecture() const { CheckFeatureSupport<FeatureDataArchitecture>(Feature.Architecture) }
    FeatureDataGpuVirtualAddressSupport get_GpuVirtualAddressSupport() const { CheckFeatureSupport<FeatureDataGpuVirtualAddressSupport>(Feature.GpuVirtualAddressSupport) }
    FeatureDataProtectedResourceSessionSupport get_ProtectedResourceSessionSupport() const { CheckFeatureSupport<FeatureDataProtectedResourceSessionSupport>(Feature.ProtectedResourceSessionSupport) }
    FeatureDataArchitecture1 get_Architecture1() const { CheckFeatureSupport<FeatureDataArchitecture1>(Feature.Architecture1) }
    FeatureDataShaderCache get_ShaderCache() const { CheckFeatureSupport<FeatureDataShaderCache>(Feature.ShaderCache) }
    FeatureDataExistingHeaps get_ExistingHeaps() const { CheckFeatureSupport<FeatureDataExistingHeaps>(Feature.ExistingHeaps) }
    FeatureDataSerialization get_Serialization() const { CheckFeatureSupport<FeatureDataSerialization>(Feature.Serialization) }
    FeatureDataCrossNode get_CrossNode() const { CheckFeatureSupport<FeatureDataCrossNode>(Feature.CrossNode) }

    ID3D12Resource CreateCommittedResource() { HeapProperties heapProperties = new(heapType);
        CreateCommittedResource(
            ref heapProperties,
            heapFlags,
            ref description,
            initialResourceState,
            optimizedClearValue,
            typeid(ID3D12Resource).GUID,
            out IntPtr nativePtr).CheckError();

        return new(nativePtr); }

    ID3D12Resource CreateCommittedResource() { HeapProperties heapProperties = new(heapType);
        CreateCommittedResource(
            ref heapProperties,
            HeapFlags.None,
            ref description,
            initialResourceState,
            optimizedClearValue,
            typeid(ID3D12Resource).GUID,
            out IntPtr nativePtr).CheckError();

        return new(nativePtr); }

    ID3D12Resource CreateCommittedResource() { CreateCommittedResource(
            ref heapProperties,
            heapFlags,
            ref description,
            initialResourceState,
            optimizedClearValue,
            typeid(ID3D12Resource).GUID,
            out IntPtr nativePtr).CheckError();

        return new(nativePtr); }

    ID3D12CommandQueue CreateCommandQueue() { CreateCommandQueue(description, typeid(ID3D12CommandQueue).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12CommandQueue(nativePtr); }

    ID3D12CommandQueue CreateCommandQueue() { return CreateCommandQueue(new CommandQueueDescription(type, priority, flags, nodeMask)); }

    ID3D12CommandQueue CreateCommandQueue() { return CreateCommandQueue(new CommandQueueDescription(type, priority, flags, nodeMask)); }

    ID3D12DescriptorHeap CreateDescriptorHeap() { CreateDescriptorHeap(description, typeid(ID3D12DescriptorHeap).GUID, out IntPtr nativePtr).CheckError();

        return new ID3D12DescriptorHeap(nativePtr); }

    ID3D12CommandAllocator CreateCommandAllocator() { CreateCommandAllocator(type, typeid(ID3D12CommandAllocator).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12CommandAllocator(nativePtr); }

    ID3D12Fence CreateFence() { CreateFence(initialValue, flags, typeid(ID3D12Fence).GUID, out IntPtr nativePtr).CheckError();

        return new ID3D12Fence(nativePtr); }

    HRESULT CreateRootSignature() { return CreateRootSignature(nodeMask, blob.BufferPointer, blob.BufferSize, out rootSignature); }

    ID3D12RootSignature CreateRootSignature() { CreateRootSignature(nodeMask, blobWithRootSignature, blobLengthInBytes, typeid(ID3D12RootSignature).GUID, out IntPtr nativePtr).CheckError();
        return new(nativePtr)!; }

    ID3D12RootSignature CreateRootSignature() { return CreateRootSignature(nodeMask, blob.BufferPointer, blob.BufferSize); }

    ID3D12RootSignature CreateRootSignature() { return CreateRootSignature(0, blob.BufferPointer, blob.BufferSize); }

    ID3D12RootSignature CreateRootSignature() { return CreateRootSignature(0, description, version); }

    ID3D12RootSignature CreateRootSignature() { return CreateRootSignature(0, new VersionedRootSignatureDescription(description)); }

    ID3D12RootSignature CreateRootSignature() { return CreateRootSignature(nodeMask, new VersionedRootSignatureDescription(description)); }

    ID3D12RootSignature CreateRootSignature() { return CreateRootSignature(0, description); }

    ID3D12RootSignature CreateRootSignature() { CreateRootSignature(nodeMask, description, out ID3D12RootSignature? rootSignature).CheckError();
        return rootSignature!; }

    HRESULT CreateRootSignature() { return CreateRootSignature(0, new VersionedRootSignatureDescription(description), out rootSignature); }

    HRESULT CreateRootSignature() { return CreateRootSignature(0, new VersionedRootSignatureDescription(description), out rootSignature); }

    HRESULT CreateRootSignature() { return CreateRootSignature(0, description, out rootSignature); }

    ID3D12PipelineState CreateComputePipelineState() { CreateComputePipelineState(description, typeid(ID3D12PipelineState).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12PipelineState(nativePtr); }

    ID3D12PipelineState CreateGraphicsPipelineState() { CreateGraphicsPipelineState(description, typeid(ID3D12PipelineState).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D12PipelineState(nativePtr); }

    uint64_t GetRequiredIntermediateSize() { ResourceDescription desc = resource.GetDescription();
        GetCopyableFootprints(desc, firstSubresource, numSubresources, 0, out ulong requiredSize);
        return requiredSize; }

    void GetCopyableFootprints() { GetCopyableFootprints(resourceDesc, firstSubresource, numSubresources, baseOffset,
            (void*)pLayouts, (void*)pNumRows, (void*)pRowSizeInBytes, out totalBytes); }

    void GetCopyableFootprints() { GetCopyableFootprints(resourceDesc, firstSubresource, numSubresources, baseOffset, (void*)nullptr, (void*)nullptr, (void*)nullptr, out totalBytes); }

    void* CreateSharedHandle() { return CreateSharedHandlePrivate(deviceChild, attributes, GENERIC_ALL, name); }

    HeapProperties GetCustomHeapProperties() { return GetCustomHeapProperties(0, heapType); }

    void Evict() { Evict((uint)objects.Length, objects); }

    void MakeResident() { MakeResident((uint)objects.Length, objects); }

    ResourceAllocationInfo GetResourceAllocationInfo() { return GetResourceAllocationInfo(visibleMask, (uint)resourceDescriptions.Length, resourceDescriptions); }

    ResourceAllocationInfo GetResourceAllocationInfo() { return GetResourceAllocationInfo(0, (uint)resourceDescriptions.Length, resourceDescriptions); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12DEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12DEVICE_H
