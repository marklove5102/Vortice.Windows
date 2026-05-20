// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICE_H
#define VORTICE_ID3D12DEVICE_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <cstring>
#include <span>
#include <initializer_list>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12Device
        {
            private: const int32_t GENERIC_ALL{};
            private: std::optional<RootSignatureVersion> _highestRootSignatureVersion{};

            public long AdapterLuid
            {
                get
                {
                    int64_t result{};
                    ((delegate* unmanaged<IntPtr, long*, void>)this)(NativePointer, &result);
                    return result{};
                }
            }

            public RootSignatureVersion HighestRootSignatureVersion
            {
                get
                {
                    if (!_highestRootSignatureVersion.HasValue)
                    {
                        var featureData{};

                        if (CheckFeatureSupport(Feature.RootSignature, &featureData, (uint)sizeof(FeatureDataRootSignature)).Failure)
                        {
                            _highestRootSignatureVersion = RootSignatureVersion.Version11;
                        }
                        else
                        {
                            _highestRootSignatureVersion = featureData.HighestVersion;
                        }
                    }

                    return _highestRootSignatureVersion.Value;
                }
            }

            public T CheckFeatureSupport<T>() where T : unmanaged
            {
                Feature feature{};

                return CheckFeatureSupport<T>(feature);
            }

            public T CheckFeatureSupport<T>(Feature feature) where T : unmanaged
            {
                T featureSupport{};
                CheckFeatureSupport(feature, &featureSupport, (uint)sizeof(T));
                return featureSupport{};
            }

            public bool CheckFeatureSupport<T>(Feature feature, ref T featureSupport) where T : unmanaged
            {
                fixed (T* featureSupportPtr = &featureSupport)
                {
                    return CheckFeatureSupport(feature, featureSupportPtr, (uint)sizeof(T)).Success;
                }
            }

            FeatureLevel CheckMaxSupportedFeatureLevel(void) const { return CheckFeatureSupport<FeatureDataD3D12Options>(Feature.Options); } CheckMaxSupportedFeatureLevel(D3D12.FeatureLevels);

            FeatureLevel CheckMaxSupportedFeatureLevel(const std::vector<FeatureLevel>& featureLevels)
        {
                fixed (FeatureLevel* levelsPtr = featureLevels)
                {
                    var featureData{};

                    if (CheckFeatureSupport(Feature.FeatureLevels, &featureData, (uint)sizeof(FeatureDataFeatureLevels)).Success)
                    {
                        return featureData.MaxSupportedFeatureLevel;
                    }

                    return FeatureLevel.Level_11_0;
                }
            }

            public FeatureDataD3D12Options Options
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options>(Feature.Options);
            }
            public FeatureDataD3D12Options1 Options1
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options1>(Feature.Options1);
            }
            public FeatureDataD3D12Options2 Options2
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options2>(Feature.Options2);
            }
            public FeatureDataD3D12Options3 Options3
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options3>(Feature.Options3);
            }
            public FeatureDataD3D12Options4 Options4
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options4>(Feature.Options4);
            }
            public FeatureDataD3D12Options5 Options5
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options5>(Feature.Options5);
            }

            public FeatureDataD3D12Options6 Options6
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options6>(Feature.Options6);
            }
            public FeatureDataD3D12Options7 Options7
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options7>(Feature.Options7);
            }
            public FeatureDataD3D12Options8 Options8
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options8>(Feature.Options8);
            }
            public FeatureDataD3D12Options9 Options9
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options9>(Feature.Options9);
            }
            public FeatureDataD3D12Options10 Options10
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options10>(Feature.Options10);
            }
            public FeatureDataD3D12Options11 Options11
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options11>(Feature.Options11);
            }
            public FeatureDataD3D12Options12 Options12
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options12>(Feature.Options12);
            }
            public FeatureDataD3D12Options13 Options13
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options13>(Feature.Options13);
            }
            public FeatureDataD3D12Options14 Options14
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options14>(Feature.Options14);
            }
            public FeatureDataD3D12Options15 Options15
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options15>(Feature.Options15);
            }
            public FeatureDataD3D12Options16 Options16
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options16>(Feature.Options16);
            }
            public FeatureDataD3D12Options17 Options17
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options17>(Feature.Options17);
            }
            public FeatureDataD3D12Options18 Options18
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options18>(Feature.Options18);
            }
            public FeatureDataD3D12Options19 Options19
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options19>(Feature.Options19);
            }
            public FeatureDataD3D12Options20 Options20
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options20>(Feature.Options20);
            }
            public FeatureDataD3D12Options21 Options21
            {
                get => CheckFeatureSupport<FeatureDataD3D12Options21>(Feature.Options21);
            }
            public FeatureDataArchitecture Architecture
            {
                get => CheckFeatureSupport<FeatureDataArchitecture>(Feature.Architecture);
            }

            public FeatureDataGpuVirtualAddressSupport GpuVirtualAddressSupport
            {
                get => CheckFeatureSupport<FeatureDataGpuVirtualAddressSupport>(Feature.GpuVirtualAddressSupport);
            }

            public FeatureDataProtectedResourceSessionSupport ProtectedResourceSessionSupport
            {
                get => CheckFeatureSupport<FeatureDataProtectedResourceSessionSupport>(Feature.ProtectedResourceSessionSupport);
            }

            public FeatureDataArchitecture1 Architecture1
            {
                get => CheckFeatureSupport<FeatureDataArchitecture1>(Feature.Architecture1);
            }

            public FeatureDataShaderCache ShaderCache
            {
                get => CheckFeatureSupport<FeatureDataShaderCache>(Feature.ShaderCache);
            }

            public FeatureDataExistingHeaps ExistingHeaps
            {
                get => CheckFeatureSupport<FeatureDataExistingHeaps>(Feature.ExistingHeaps);
            }

            public FeatureDataSerialization Serialization
            {
                get => CheckFeatureSupport<FeatureDataSerialization>(Feature.Serialization);
            }

            public FeatureDataCrossNode CrossNode
            {
                get => CheckFeatureSupport<FeatureDataCrossNode>(Feature.CrossNode);
            }

            ShaderModel CheckHighestShaderModel(ShaderModel highestShaderModel)
        {
                var featureData{};

                if (CheckFeatureSupport(Feature.ShaderModel, &featureData, (uint)sizeof(FeatureDataShaderModel)).Success)
                {
                    return featureData.HighestShaderModel;
                }

                return ShaderModel.Model5_1;
            }

            RootSignatureVersion CheckHighestRootSignatureVersion(RootSignatureVersion highestVersion)
        {
                var featureData{};

                if (CheckFeatureSupport(Feature.RootSignature, &featureData, (uint)sizeof(FeatureDataRootSignature)).Success)
                {
                    return featureData.HighestVersion;
                }

                return RootSignatureVersion.Version10;
            }

            bool CheckFormatSupport(Format format, FormatSupport1& formatSupport1, FormatSupport2& formatSupport2)
        {
                FeatureDataFormatSupport featureData{};

                if (CheckFeatureSupport(Feature.FormatSupport, &featureData, (uint)sizeof(FeatureDataFormatSupport)).Failure)
                {
                    formatSupport1 = FormatSupport1.None;
                    formatSupport2 = FormatSupport2.None;
                    return false{};
                }

                formatSupport1 = featureData.Support1;
                formatSupport2 = featureData.Support2;
                return true{};
            }

            uint32_t CheckMultisampleQualityLevels(Format format, uint32_t sampleCount, MultisampleQualityLevelFlags flags{};

                if (CheckFeatureSupport(Feature.MultisampleQualityLevels, &featureData, (uint)sizeof(FeatureDataMultisampleQualityLevels)).Failure)
                {
                    return 0{};
                }

                return featureData.NumQualityLevels;
            }

            uint8_t GetFormatPlaneCount(Format format)
        {
                var featureData{};

                if (CheckFeatureSupport(Feature.FormatInfo, &featureData, (uint)sizeof(FeatureDataFormatInfo)).Failure)
                {
                    return 0{};
                }

                return featureData.PlaneCount;
            }

            FeatureDataCommandQueuePriority CheckCommandQueuePriority(CommandListType commandListType)
        {
                FeatureDataCommandQueuePriority featureData{};

                if (CheckFeatureSupport(Feature.CommandQueuePriority, &featureData, (uint)sizeof(FeatureDataFormatInfo)).Failure)
                {
                    return default{};
                }

                return featureData{};
            }
            ID3D12Resource CreateCommittedResource(HeapType heapType, HeapFlags heapFlags, ResourceDescription description, ResourceStates initialResourceState, std::optional<ClearValue> optimizedClearValue{};
                CreateCommittedResource(
                    ref heapProperties,
                    heapFlags,
                    ref description,
                    initialResourceState,
                    optimizedClearValue,
                    typeof(ID3D12Resource).GUID,
                    out IntPtr nativePtr).CheckError();

                return new(nativePtr param) = 0;
            }

            ID3D12Resource CreateCommittedResource(HeapType heapType, ResourceDescription description, ResourceStates initialResourceState, std::optional<ClearValue> optimizedClearValue{};
                CreateCommittedResource(
                    ref heapProperties,
                    HeapFlags.None,
                    ref description,
                    initialResourceState,
                    optimizedClearValue,
                    typeof(ID3D12Resource).GUID,
                    out IntPtr nativePtr).CheckError();

                return new(nativePtr param) = 0;
            }

            ID3D12Resource CreateCommittedResource(HeapProperties heapProperties, HeapFlags heapFlags, ResourceDescription description, ResourceStates initialResourceState, std::optional<ClearValue> optimizedClearValue{};

                return new(nativePtr param) = 0;
            }

            Result CreateCommittedResource(HeapProperties heapProperties, HeapFlags heapFlags, ResourceDescription description, ResourceStates initialResourceState, std::optional<ID3D12Resource>& resource)
        {
                Result result{};

                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = new ID3D12Resource(nativePtr param) = 0;
                return result{};
            }

            Result CreateCommittedResource(HeapProperties heapProperties, HeapFlags heapFlags, ResourceDescription description, ResourceStates initialResourceState, const std::optional<ClearValue>& optimizedClearValue, std::optional<ID3D12Resource>& resource)
        {
                Result result{};

                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = new ID3D12Resource(nativePtr param) = 0;
                return result{};
            }

            public T CreateCommittedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription description,
                ResourceStates initialResourceState,
                std::optional<ClearValue> optimizedClearValue{};

                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommittedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(HeapProperties heapProperties, HeapFlags heapFlags, ResourceDescription description, ResourceStates initialResourceState, out T? resource) where T : ID3D12Resource
            {
                Result result{};

                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public Result CreateCommittedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(HeapProperties heapProperties,
                HeapFlags heapFlags,
                ResourceDescription description,
                ResourceStates initialResourceState,
                ClearValue? optimizedClearValue,
                out T? resource) where T : ID3D12Resource
            {
                Result result{};

                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public Result CreateCommandQueue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in CommandQueueDescription description, out T? commandQueue) where T : ID3D12CommandQueue
            {
                Result result{};
                if (result.Failure)
                {
                    commandQueue = default;
                    return result{};
                }

                commandQueue = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T CreateCommandQueue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in CommandQueueDescription description) where T : ID3D12CommandQueue
            {
                CreateCommandQueue(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public T CreateCommandQueue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type, int32_t priority{};
            }

            public T CreateCommandQueue<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type, CommandQueuePriority priority, CommandQueueFlags flags{};
            }

            Result CreateCommandQueue(const CommandQueueDescription& description, std::optional<ID3D12CommandQueue>& commandQueue)
        {
                Result result{};
                if (result.Failure)
                {
                    commandQueue = default;
                    return result{};
                }

                commandQueue = new(nativePtr);
                return result{};
            }

            ID3D12CommandQueue CreateCommandQueue(const CommandQueueDescription& description)
        {
                CreateCommandQueue(description, typeof(ID3D12CommandQueue).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12CommandQueue(nativePtr param) = 0;
            }

            ID3D12CommandQueue CreateCommandQueue(CommandListType type, int32_t priority{};
            }

            ID3D12CommandQueue CreateCommandQueue(CommandListType type, CommandQueuePriority priority, CommandQueueFlags flags{};
            }
            ID3D12DescriptorHeap CreateDescriptorHeap(const DescriptorHeapDescription& description)
        {
                CreateDescriptorHeap(description, typeof(ID3D12DescriptorHeap).GUID, out IntPtr nativePtr).CheckError();

                return new ID3D12DescriptorHeap(nativePtr param) = 0;
            }

            Result CreateDescriptorHeap(const DescriptorHeapDescription& description, std::optional<ID3D12DescriptorHeap>& descriptorHeap)
        {
                Result result{};
                if (result.Failure)
                {
                    descriptorHeap = default;
                    return result{};
                }

                descriptorHeap = new ID3D12DescriptorHeap(nativePtr param) = 0;
                return result{};
            }

            public T CreateDescriptorHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in DescriptorHeapDescription description) where T : ID3D12DescriptorHeap
            {
                CreateDescriptorHeap(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateDescriptorHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in DescriptorHeapDescription description, out T? descriptorHeap) where T : ID3D12DescriptorHeap
            {
                Result result{};
                if (result.Failure)
                {
                    descriptorHeap = default;
                    return result{};
                }

                descriptorHeap = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            ID3D12CommandAllocator CreateCommandAllocator(CommandListType type)
        {
                CreateCommandAllocator(type, typeof(ID3D12CommandAllocator).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12CommandAllocator(nativePtr param) = 0;
            }

            Result CreateCommandAllocator(CommandListType type, std::optional<ID3D12CommandAllocator>& commandAllocator)
        {
                Result result{};
                if (result.Failure)
                {
                    commandAllocator = default;
                    return result{};
                }

                commandAllocator = new ID3D12CommandAllocator(nativePtr param) = 0;
                return result{};
            }

            public T CreateCommandAllocator<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type) where T : ID3D12CommandAllocator
            {
                CreateCommandAllocator(type, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommandAllocator<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type, out T? commandAllocator) where T : ID3D12CommandAllocator
            {
                Result result{};
                if (result.Failure)
                {
                    commandAllocator = default;
                    return result{};
                }

                commandAllocator = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public T CreateCommandList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandListType type, ID3D12CommandAllocator commandAllocator, std::optional<ID3D12PipelineState> initialState{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public T CreateCommandList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint nodeMask, CommandListType type, ID3D12CommandAllocator commandAllocator, std::optional<ID3D12PipelineState> initialState{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommandList<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint nodeMask, CommandListType type, ID3D12CommandAllocator commandAllocator, ID3D12PipelineState initialState, out T? commandList) where T : ID3D12CommandList
            {
                Result result{};
                if (result.Failure)
                {
                    commandList = default;
                    return result{};
                }

                commandList = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            ID3D12Fence CreateFence(uint64_t initialValue{};

                return new ID3D12Fence(nativePtr param) = 0;
            }

            Result CreateFence(uint64_t initialValue, FenceFlags flags, std::optional<ID3D12Fence>& fence)
        {
                Result result{};
                if (result.Failure)
                {
                    fence = default;
                    return result{};
                }

                fence = new ID3D12Fence(nativePtr param) = 0;
                return result{};
            }

            public T CreateFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint64_t initialValue{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ulong initialValue, FenceFlags flags, out T? fence) where T : ID3D12Fence
            {
                Result result{};
                if (result.Failure)
                {
                    fence = default;
                    return result{};
                }

                fence = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public T CreateHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in HeapDescription description) where T : ID3D12Heap
            {
                CreateHeap(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in HeapDescription description, out T? heap) where T : ID3D12Heap
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
            Result CreateRootSignature(uint32_t nodeMask, intptr_t blobWithRootSignature, uintptr_t blobLengthInBytes, std::optional<ID3D12RootSignature>& rootSignature)
        {
                Result result{};
                if (result.Failure)
                {
                    rootSignature = default;
                    return default{};
                }

                rootSignature = new(nativePtr);
                return result{};
            }

            Result CreateRootSignature(uint32_t nodeMask, Blob blob, std::optional<ID3D12RootSignature>& rootSignature)
        {
                return CreateRootSignature(nodeMask param, blob::BufferPointer param, blob::BufferSize param, rootSignature& param) = 0;
            }

            Result CreateRootSignature(uint32_t nodeMask, const std::vector<uint8_t>& blobWithRootSignature, std::optional<ID3D12RootSignature>& rootSignature)
        {
                fixed (void* pBuffer = blobWithRootSignature)
                {
                    return CreateRootSignature(nodeMask, (nint)pBuffer, (nuint)blobWithRootSignature.Length, out rootSignature);
                }
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, intptr_t blobWithRootSignature, uintptr_t blobLengthInBytes)
        {
                CreateRootSignature(nodeMask, blobWithRootSignature, blobLengthInBytes, typeof(ID3D12RootSignature).GUID, out IntPtr nativePtr).CheckError();
                return new(nativePtr)!;
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, Blob blob)
        {
                return CreateRootSignature(nodeMask param, blob::BufferPointer param, blob::BufferSize param) = 0;
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, const std::vector<uint8_t>& blobWithRootSignature)
        {
                fixed (void* pBuffer = blobWithRootSignature)
                {
                    return CreateRootSignature(nodeMask, (nint)pBuffer, (nuint)blobWithRootSignature.Length);
                }
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, const span<uint8_t>& blobWithRootSignature)
        {
                fixed (void* pBuffer = blobWithRootSignature)
                {
                    return CreateRootSignature(nodeMask, (nint)pBuffer, (nuint)blobWithRootSignature.Length);
                }
            }

            public ID3D12RootSignature CreateRootSignature<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(nint blobWithRootSignature, nuint blobLengthInBytes) where T : ID3D12RootSignature
            {
                CreateRootSignature(0, blobWithRootSignature, blobLengthInBytes, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            ID3D12RootSignature CreateRootSignature(Blob blob)
        {
                return CreateRootSignature(0 param, blob::BufferPointer param, blob::BufferSize param) = 0;
            }

            ID3D12RootSignature CreateRootSignature(const std::vector<uint8_t>& blobWithRootSignature)
        {
                fixed (void* pBuffer = blobWithRootSignature)
                {
                    return CreateRootSignature(0, (IntPtr)pBuffer, (nuint)blobWithRootSignature.Length);
                }
            }

            ID3D12RootSignature CreateRootSignature(const span<uint8_t>& blobWithRootSignature)
        {
                fixed (void* pBuffer = blobWithRootSignature)
                {
                    return CreateRootSignature(0, (nint)pBuffer, (nuint)blobWithRootSignature.Length);
                }
            }

            ID3D12RootSignature CreateRootSignature(const RootSignatureDescription& description, RootSignatureVersion version)
        {
                return CreateRootSignature(0 param, description param, version param) = 0;
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, const RootSignatureDescription& description, RootSignatureVersion version)
        {
                Result result{};
                if (result.Failure || blob is nullptr)
                {
                    if (errorBlob != nullptr)
                    {
                        throw new SharpGenException(result, errorBlob.AsString());
                    }

                    throw new SharpGenException(result param) = 0;
                }

                try
                {
                    CreateRootSignature(nodeMask, blob.BufferPointer, blob.BufferSize, typeof(ID3D12RootSignature).GUID, out IntPtr nativePtr).CheckError();
                    return new(nativePtr)!;
                }
                finally
                {
                    errorBlob?.Dispose();
                    blob.Dispose();
                }
            }

            Result CreateRootSignature(uint32_t nodeMask, const RootSignatureDescription& description, RootSignatureVersion version, std::optional<ID3D12RootSignature>& rootSignature)
        {
                Result result{};
                if (result.Failure || blob is nullptr)
                {
                    if (errorBlob != nullptr)
                    {
                        throw new SharpGenException(result, errorBlob.AsString());
                    }

                    errorBlob?.Dispose();
                    rootSignature = default;
                    return result{};
                }

                try
                {
                    result = CreateRootSignature(nodeMask, blob.BufferPointer, blob.BufferSize, typeof(ID3D12RootSignature).GUID, out IntPtr nativePtr);
                    if (result.Failure)
                    {
                        rootSignature = default;
                        return default{};
                    }

                    rootSignature = MarshallingHelpers.FromPointer<ID3D12RootSignature>(nativePtr);
                    return result{};
                }
                finally
                {
                    errorBlob?.Dispose();
                    blob.Dispose();
                }
            }

            ID3D12RootSignature CreateRootSignature(const RootSignatureDescription1& description)
        {
                return CreateRootSignature(0, new VersionedRootSignatureDescription(description));
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, const RootSignatureDescription1& description)
        {
                return CreateRootSignature(nodeMask, new VersionedRootSignatureDescription(description));
            }

            ID3D12RootSignature CreateRootSignature(const VersionedRootSignatureDescription& description)
        {
                return CreateRootSignature(0 param, description param) = 0;
            }

            ID3D12RootSignature CreateRootSignature(uint32_t nodeMask, const VersionedRootSignatureDescription& description)
        {
                CreateRootSignature(nodeMask, description, out ID3D12RootSignature? rootSignature).CheckError();
                return rootSignature!;
            }

            Result CreateRootSignature(const RootSignatureDescription1& description, std::optional<ID3D12RootSignature>& rootSignature)
        {
                return CreateRootSignature(0, new VersionedRootSignatureDescription(description), out rootSignature);
            }

            Result CreateRootSignature(uint32_t nodeMask, const RootSignatureDescription1& description, std::optional<ID3D12RootSignature>& rootSignature)
        {
                return CreateRootSignature(0, new VersionedRootSignatureDescription(description), out rootSignature);
            }

            Result CreateRootSignature(const VersionedRootSignatureDescription& description, std::optional<ID3D12RootSignature>& rootSignature)
        {
                return CreateRootSignature(0 param, description param, rootSignature& param) = 0;
            }

            Result CreateRootSignature(uint32_t nodeMask, const VersionedRootSignatureDescription& description, std::optional<ID3D12RootSignature>& rootSignature)
        {
                Result result{};

                if (result.Failure || signature is nullptr)
                {
                    if (errorBlob is not nullptr)
                    {
                        throw new SharpGenException(result, errorBlob.AsString());
                    }

                    errorBlob?.Dispose();
                    rootSignature = default;
                    return result{};
                }

                try
                {
                    result = CreateRootSignature(nodeMask, signature!.BufferPointer, signature.BufferSize, typeof(ID3D12RootSignature).GUID, out IntPtr nativePtr);
                    if (result.Failure)
                    {
                        rootSignature = default;
                        return default{};
                    }

                    rootSignature = new(nativePtr);
                    return result{};
                }
                finally
                {
                    errorBlob?.Dispose();
                    signature.Dispose();
                }
            }

            Result SerializeRootSignature(const VersionedRootSignatureDescription& description, std::optional<Blob>& signature, std::optional<Blob>& errorBlob)
        {
                Result result{};
                signature = default;
                errorBlob = default;

                // D3DX12SerializeVersionedRootSignature switch(HighestRootSignatureVersion param)
        {
                    case RootSignatureVersion.Version10:
                        switch (description.Version)
                        {
                            case RootSignatureVersion.Version10:
                                result = D3D12.D3D12SerializeRootSignature(description.Description_1_0, RootSignatureVersion.Version1, out signature, out errorBlob);
                                break;

                            case RootSignatureVersion.Version11:
                                // Convert to version 1.0.
                                RootSignatureDescription1 desc_1_1{};
                                RootParameter[]? parameters_1_0 = nullptr;

                                if (desc_1_1?.Parameters?.Length > 0)
                                {
                                    parameters_1_0 = new RootParameter{};
                                    for (int32_t i{}; i < parameters_1_0.Length; i++)
                                    {
                                        ShaderVisibility parameterShaderVisibility{};

                                        switch (desc_1_1.Parameters.ParameterType)
                                        {
                                            case RootParameterType.Constant32Bits:
                                                parameters_1_0= new RootParameter(desc_1_1::Parameters::Constants param, parameterShaderVisibility param) = 0;
                                                break;

                                            case RootParameterType.ConstantBufferView:
                                            case RootParameterType.ShaderResourceView:
                                            case RootParameterType.UnorderedAccessView:
                                                parameters_1_0= new RootParameter(desc_1_1.Parameters.ParameterType,
                                                    new RootDescriptor(desc_1_1.Parameters.Descriptor.ShaderRegister, desc_1_1.Parameters.Descriptor.RegisterSpace),
                                                    desc_1_1.Parameters.ShaderVisibility
                                                    );
                                                break;

                                            case RootParameterType.DescriptorTable:
                                                RootDescriptorTable1 table_1_1{};
                                                DescriptorRange[] ranges = new DescriptorRange[table_1_1.Ranges?.Length ?? 0];

                                                for (int32_t x{}; x < ranges.Length; x++)
                                                {
                                                    ranges= new DescriptorRange(table_1_1::Ranges! param) = 0;
                                                }

                                                parameters_1_0= new RootParameter(new RootDescriptorTable(ranges), parameterShaderVisibility);
                                                break;
                                        }
                                    }
                                }

                                var desc_1_0{};
                                result = D3D12.D3D12SerializeRootSignature(desc_1_0, RootSignatureVersion.Version1, out signature, out errorBlob);
                                break;
                        }
                        break;

                    case RootSignatureVersion.Version11:
                        result = D3D12.D3D12SerializeVersionedRootSignature(description, out signature, out errorBlob);
                        break;
                }

                return result{};
            }
            public T CreateCommandSignature<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandSignatureDescription description, ID3D12RootSignature? rootSignature) where T : ID3D12CommandSignature
            {
                CreateCommandSignature(description, rootSignature, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateCommandSignature<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(CommandSignatureDescription description, ID3D12RootSignature? rootSignature, out T? commandSignature) where T : ID3D12CommandSignature
            {
                Result result{};
                if (result.Failure)
                {
                    commandSignature = default;
                    return result{};
                }

                commandSignature = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public T CreateComputePipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ComputePipelineStateDescription description) where T : ID3D12PipelineState
            {
                CreateComputePipelineState(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateComputePipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ComputePipelineStateDescription description, out T? pipelineState) where T : ID3D12PipelineState
            {
                Result result{};
                if (result.Failure)
                {
                    pipelineState = default;
                    return result{};
                }

                pipelineState = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            ID3D12PipelineState CreateComputePipelineState(ComputePipelineStateDescription description)
        {
                CreateComputePipelineState(description, typeof(ID3D12PipelineState).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12PipelineState(nativePtr param) = 0;
            }

            Result CreateComputePipelineState(ComputePipelineStateDescription description, std::optional<ID3D12PipelineState>& pipelineState)
        {
                Result result{};
                if (result.Failure)
                {
                    pipelineState = default;
                    return result{};
                }

                pipelineState = new ID3D12PipelineState(nativePtr param) = 0;
                return result{};
            }
            public T CreateGraphicsPipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(GraphicsPipelineStateDescription description) where T : ID3D12PipelineState
            {
                CreateGraphicsPipelineState(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateGraphicsPipelineState<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(GraphicsPipelineStateDescription description, out T? pipelineState) where T : ID3D12PipelineState
            {
                Result result{};
                if (result.Failure)
                {
                    pipelineState = default;
                    return result{};
                }

                pipelineState = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            ID3D12PipelineState CreateGraphicsPipelineState(GraphicsPipelineStateDescription description)
        {
                CreateGraphicsPipelineState(description, typeof(ID3D12PipelineState).GUID, out IntPtr nativePtr).CheckError();
                return new ID3D12PipelineState(nativePtr param) = 0;
            }

            Result CreateGraphicsPipelineState(GraphicsPipelineStateDescription description, std::optional<ID3D12PipelineState>& pipelineState)
        {
                Result result{};
                if (result.Failure)
                {
                    pipelineState = default;
                    return result{};
                }

                pipelineState = new ID3D12PipelineState(nativePtr param) = 0;
                return result{};
            }
            public T CreateQueryHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(QueryHeapDescription description) where T : ID3D12QueryHeap
            {
                CreateQueryHeap(description, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateQueryHeap<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(in QueryHeapDescription description, out T? queryHeap) where T : ID3D12QueryHeap
            {
                Result result{};
                if (result.Failure)
                {
                    queryHeap = default;
                    return result{};
                }

                queryHeap = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public T CreatePlacedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                ID3D12Heap heap,
                ulong heapOffset,
                ResourceDescription resourceDescription,
                ResourceStates initialState,
                std::optional<ClearValue> clearValue{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreatePlacedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                ID3D12Heap heap,
                ulong heapOffset,
                ResourceDescription resourceDescription,
                ResourceStates initialState,
                out T? resource) where T : ID3D12Resource
            {
                Result result{};
                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public Result CreatePlacedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                ID3D12Heap heap,
                ulong heapOffset,
                ResourceDescription resourceDescription,
                ResourceStates initialState,
                in ClearValue clearValue,
                out T? resource) where T : ID3D12Resource
            {
                Result result{};
                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public T CreateReservedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription resourceDescription, ResourceStates initialState, std::optional<ClearValue> clearValue{};
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateReservedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription resourceDescription, ResourceStates initialState, out T? resource) where T : ID3D12Resource
            {
                Result result{};
                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public Result CreateReservedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ResourceDescription resourceDescription, ResourceStates initialState, in ClearValue clearValue, out T? resource) where T : ID3D12Resource
            {
                Result result{};
                if (result.Failure)
                {
                    resource = default;
                    return result{};
                }

                resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            void CopyDescriptors(uint32_t numDestDescriptorRanges, const std::vector<CpuDescriptorHandle>& destDescriptorRangeStarts, const std::vector<uint32_t>& destDescriptorRangeSizes, uint32_t numSrcDescriptorRanges, const std::vector<CpuDescriptorHandle>& srcDescriptorRangeStarts, const std::vector<uint32_t>& srcDescriptorRangeSizes, DescriptorHeapType descriptorHeapsType)
        {
                fixed (CpuDescriptorHandle* pDestDescriptorRangeStarts = destDescriptorRangeStarts)
                fixed (uint* pDestDescriptorRangeSizes = destDescriptorRangeSizes)
                fixed (CpuDescriptorHandle* pSrcDescriptorRangeStarts = srcDescriptorRangeStarts)
                fixed (uint* pSrcDescriptorRangeSizes = srcDescriptorRangeSizes)
                    CopyDescriptors(numDestDescriptorRanges, pDestDescriptorRangeStarts, pDestDescriptorRangeSizes,
                        numSrcDescriptorRanges, pSrcDescriptorRangeStarts, pSrcDescriptorRangeSizes,
                        descriptorHeapsType);
            }

            void CopyDescriptors(uint32_t numDestDescriptorRanges, const span<const CpuDescriptorHandle>& destDescriptorRangeStarts, const span<const uint32_t>& destDescriptorRangeSizes, uint32_t numSrcDescriptorRanges, const span<const CpuDescriptorHandle>& srcDescriptorRangeStarts, const span<const uint32_t>& srcDescriptorRangeSizes, DescriptorHeapType descriptorHeapsType)
        {
                fixed (CpuDescriptorHandle* pDestDescriptorRangeStarts = destDescriptorRangeStarts)
                fixed (uint* pDestDescriptorRangeSizes = destDescriptorRangeSizes)
                fixed (CpuDescriptorHandle* pSrcDescriptorRangeStarts = srcDescriptorRangeStarts)
                fixed (uint* pSrcDescriptorRangeSizes = srcDescriptorRangeSizes)
                    CopyDescriptors(numDestDescriptorRanges, pDestDescriptorRangeStarts, pDestDescriptorRangeSizes,
                        numSrcDescriptorRanges, pSrcDescriptorRangeStarts, pSrcDescriptorRangeSizes,
                        descriptorHeapsType);
            }
            uint64_t GetRequiredIntermediateSize(ID3D12Resource resource, uint32_t firstSubresource, uint32_t numSubresources)
        {
                ResourceDescription desc{};
                GetCopyableFootprints(desc, firstSubresource, numSubresources, 0, out ulong requiredSize);
                return requiredSize{};
            }

            void GetCopyableFootprints(ResourceDescription resourceDesc, uint32_t firstSubresource, uint32_t numSubresources, uint64_t baseOffset, PlacedSubresourceFootPrint* pLayouts, uint* pNumRows, ulong* pRowSizeInBytes, uint64_t& totalBytes)
        {
                GetCopyableFootprints(resourceDesc, firstSubresource, numSubresources, baseOffset,
                    (void*)pLayouts, (void*)pNumRows, (void*)pRowSizeInBytes, out totalBytes);
            }

            void GetCopyableFootprints(ResourceDescription resourceDesc, uint32_t firstSubresource, uint32_t numSubresources, uint64_t baseOffset, uint64_t& totalBytes)
        {
                GetCopyableFootprints(resourceDesc, firstSubresource, numSubresources, baseOffset, (void*)nullptr, (void*)nullptr, (void*)nullptr, out totalBytes);
            }

            void GetCopyableFootprints(ResourceDescription resourceDesc, uint32_t firstSubresource, uint32_t numSubresources, uint64_t baseOffset, const std::vector<PlacedSubresourceFootPrint>& layouts, const std::vector<uint32_t>& numRows, const std::vector<uint64_t>& rowSizeInBytes, uint64_t& totalBytes)
        {
                fixed (PlacedSubresourceFootPrint* pLayouts = layouts)
                fixed (uint* pNumRows = numRows)
                fixed (ulong* pRowSizeInBytes = rowSizeInBytes)
                {
                    GetCopyableFootprints(resourceDesc, firstSubresource, numSubresources, baseOffset, pLayouts, pNumRows, pRowSizeInBytes, out totalBytes);
                }
            }

            void GetCopyableFootprints(ResourceDescription resourceDesc, uint32_t firstSubresource, uint32_t numSubresources, uint64_t baseOffset, const span<PlacedSubresourceFootPrint>& layouts, const span<uint32_t>& numRows, const span<uint64_t>& rowSizeInBytes, uint64_t& totalBytes)
        {
                fixed (PlacedSubresourceFootPrint* pLayouts = layouts)
                fixed (uint* pNumRows = numRows)
                fixed (ulong* pRowSizeInBytes = rowSizeInBytes)
                {
                    GetCopyableFootprints(resourceDesc, firstSubresource, numSubresources, baseOffset, pLayouts, pNumRows, pRowSizeInBytes, out totalBytes);
                }
            }

            void* CreateSharedHandle(ID3D12DeviceChild deviceChild, const std::optional<SecurityAttributes>& attributes, const std::string& name)
        {
                return CreateSharedHandlePrivate(deviceChild param, attributes param, GENERIC_ALL param, name param) = 0;
            }

                                    public T OpenSharedHandle<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr handle) where T : ComObject
            {
                OpenSharedHandle(handle, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

                                        public Result OpenSharedHandle<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr handle, out T? sharedHandle) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    sharedHandle = default;
                    return result{};
                }

                sharedHandle = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

                                void* OpenSharedHandleByName(const std::string& name)
        {
                Result result{};
                if (result.Failure)
                {
                    return IntPtr.Zero;
                }

                return handleRef{};
            }

            HeapProperties GetCustomHeapProperties(HeapType heapType)
        {
                return GetCustomHeapProperties(0 param, heapType param) = 0;
            }

                            void Evict(std::initializer_list<std::vector<ID3D12Pageable>> objects)
        {
                Evict((uint)objects.Length, objects);
            }

                            void MakeResident(std::initializer_list<std::vector<ID3D12Pageable>> objects)
        {
                MakeResident((uint)objects.Length, objects);
            }

            ResourceAllocationInfo GetResourceAllocationInfo(uint32_t visibleMask, std::initializer_list<std::vector<ResourceDescription>> resourceDescriptions)
        {
                return GetResourceAllocationInfo(visibleMask, (uint)resourceDescriptions.Length, resourceDescriptions);
            }

            ResourceAllocationInfo GetResourceAllocationInfo(std::initializer_list<std::vector<ResourceDescription>> resourceDescriptions)
        {
                return GetResourceAllocationInfo(0, (uint)resourceDescriptions.Length, resourceDescriptions);
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICE_H