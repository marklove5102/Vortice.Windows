// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST_H

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

        class ID3D12GraphicsCommandList
        {
            void ResourceBarrierTransition(ID3D12Resource resource, ResourceStates stateBefore, ResourceStates stateAfter, uint32_t subresource{};
                ResourceBarrier(1, &barrier);
            }

            void ResourceBarrierAliasing(ID3D12Resource resourceBefore, ID3D12Resource resourceAfter)
        {
                var barrier{};
                ResourceBarrier(1, &barrier);
            }

            void ResourceBarrierUnorderedAccessView(ID3D12Resource resource)
        {
                var barrier{};
                ResourceBarrier(1, &barrier);
            }

            void ResourceBarrier(ResourceBarrier barrier)
        {
                ResourceBarrier(1, &barrier);
            }

            void ResourceBarrier(const std::vector<ResourceBarrier>& barriers)
        {
                fixed (ResourceBarrier* pBarriers = barriers)
                {
                    ResourceBarrier((uint)barriers.Length, pBarriers);
                }
            }

            void ResourceBarrier(uint32_t barriersCount, const std::vector<ResourceBarrier>& barriers)
        {
                fixed (ResourceBarrier* pBarriers = barriers)
                {
                    ResourceBarrier(barriersCount, pBarriers);
                }
            }

            void ResourceBarrier(const span<ResourceBarrier>& barriers)
        {
                fixed (ResourceBarrier* pBarriers = barriers)
                {
                    ResourceBarrier((uint)barriers.Length, pBarriers);
                }
            }

            void UnsetDescriptorHeaps(void)
        {
                SetDescriptorHeaps(0, (void*)nullptr);
            }

            void SetDescriptorHeaps(const std::optional<ID3D12DescriptorHeap>& heap)
        {
                if (heap is not nullptr)
                {
                    void* heapPtr{};
                    SetDescriptorHeaps(1, &heapPtr);
                }
                else
                {
                    SetDescriptorHeaps(0, (void*)nullptr);
                }
            }

            void SetDescriptorHeaps(const std::vector<ID3D12DescriptorHeap>& descriptorHeaps)
        {
                SetDescriptorHeaps(descriptorHeaps.Length, descriptorHeaps);
            }

            void SetDescriptorHeaps(int32_t numDescriptorHeaps, const std::vector<ID3D12DescriptorHeap>& descriptorHeaps)
        {
                if (numDescriptorHeaps == 0)
                {
                    SetDescriptorHeaps(0, (void*)nullptr);
                    return;
                }

                IntPtr* descriptorHeapsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < numDescriptorHeaps; i++)
                {
                    descriptorHeapsPtr= (descriptorHeaps== nullptr) ? IntPtr.Zero : descriptorHeaps.NativePointer;
                }
                SetDescriptorHeaps((uint)numDescriptorHeaps, descriptorHeapsPtr);
            }

            void SetDescriptorHeaps(const span<const ID3D12DescriptorHeap>& descriptorHeaps)
        {
                SetDescriptorHeaps(descriptorHeaps.Length, descriptorHeaps);
            }

            void SetDescriptorHeaps(int32_t numDescriptorHeaps, const span<const ID3D12DescriptorHeap>& descriptorHeaps)
        {
                if (numDescriptorHeaps == 0)
                {
                    SetDescriptorHeaps(0, (void*)nullptr);
                    return;
                }

                IntPtr* descriptorHeapsPtr = stackalloc IntPtr[(int)numDescriptorHeaps];
                for (int32_t i{}; i < numDescriptorHeaps; i++)
                {
                    descriptorHeapsPtr= (descriptorHeaps== nullptr) ? IntPtr.Zero : descriptorHeaps.NativePointer;
                }
                SetDescriptorHeaps((uint)numDescriptorHeaps, descriptorHeapsPtr);
            }

            void ClearRenderTargetView(CpuDescriptorHandle renderTargetView, Color4 color)
        {
                ClearRenderTargetView(renderTargetView, color, 0, (void*)nullptr);
            }

            void ClearRenderTargetView(CpuDescriptorHandle renderTargetView, Color4 color, const std::vector<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    ClearRenderTargetView(renderTargetView, color, (uint)rects.Length, pRects);
                }
            }

            void ClearRenderTargetView(CpuDescriptorHandle renderTargetView, Color4 color, uint32_t rectsCount, const std::vector<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    ClearRenderTargetView(renderTargetView, color, rectsCount, pRects);
                }
            }

            void ClearDepthStencilView(CpuDescriptorHandle depthStencilView, ClearFlags clearFlags, float depth, uint8_t stencil)
        {
                ClearDepthStencilView(depthStencilView, clearFlags, depth, stencil, 0, (void*)nullptr);
            }

            void ClearDepthStencilView(CpuDescriptorHandle depthStencilView, ClearFlags clearFlags, float depth, uint8_t stencil, const std::vector<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    ClearDepthStencilView(depthStencilView, clearFlags, depth, stencil, (uint)rects.Length, pRects);
                }
            }

            void ClearDepthStencilView(CpuDescriptorHandle depthStencilView, ClearFlags clearFlags, float depth, uint8_t stencil, uint32_t rectsCount, const std::vector<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    ClearDepthStencilView(depthStencilView, clearFlags, depth, stencil, rectsCount, pRects);
                }
            }

            void ClearUnorderedAccessViewFloat(GpuDescriptorHandle viewGpuHandleInCurrentHeap, CpuDescriptorHandle viewCpuHandle, ID3D12Resource resource, Color4 clearValue)
        {
                ClearUnorderedAccessViewFloat(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, 0, nullptr);
            }

            void ClearUnorderedAccessViewFloat(GpuDescriptorHandle viewGpuHandleInCurrentHeap, CpuDescriptorHandle viewCpuHandle, ID3D12Resource resource, Color4 clearValue, const std::vector<RawRect>& rects)
        {
                ClearUnorderedAccessViewFloat(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, (uint)rects.Length, rects);
            }

            void ClearUnorderedAccessViewFloat(GpuDescriptorHandle viewGpuHandleInCurrentHeap, CpuDescriptorHandle viewCpuHandle, ID3D12Resource resource, Color4 clearValue, uint32_t rectCount, const std::vector<RawRect>& rects)
        {
                ClearUnorderedAccessViewFloat(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, rectCount, rects);
            }

            void ClearUnorderedAccessViewUint(GpuDescriptorHandle viewGpuHandleInCurrentHeap, CpuDescriptorHandle viewCpuHandle, ID3D12Resource resource, Int4 clearValue)
        {
                ClearUnorderedAccessViewUint(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, 0, nullptr);
            }

            void ClearUnorderedAccessViewUint(GpuDescriptorHandle viewGpuHandleInCurrentHeap, CpuDescriptorHandle viewCpuHandle, ID3D12Resource resource, Int4 clearValue, const std::vector<RawRect>& rectangles)
        {
                ClearUnorderedAccessViewUint(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, (uint)rectangles.Length, rectangles);
            }

            void SetComputeRoot32BitConstant(uint32_t rootParameterIndex, float srcData, uint32_t destOffsetIn32BitValues)
        {
                SetComputeRoot32BitConstant(rootParameterIndex, *(uint*)&srcData, destOffsetIn32BitValues);
            }

            void SetComputeRoot32BitConstant(uint32_t rootParameterIndex, int32_t srcData, uint32_t destOffsetIn32BitValues)
        {
                SetComputeRoot32BitConstant(rootParameterIndex, *(uint*)&srcData, destOffsetIn32BitValues);
            }
            void SetComputeRoot32BitConstants(uint32_t rootParameterIndex, uint32_t num32BitValuesToSet, void* srcData, uint32_t destOffsetIn32BitValues)
        {
                SetComputeRoot32BitConstants(rootParameterIndex, num32BitValuesToSet, srcData.ToPointer(), destOffsetIn32BitValues);
            }
            public void SetComputeRoot32BitConstants<T>(uint rootParameterIndex, T[] srcData, uint32_t destOffset{};

                SetComputeRoot32BitConstants(rootParameterIndex, span, destOffset);
            }

            public void SetComputeRoot32BitConstants<T>(uint rootParameterIndex, ReadOnlySpan<T> source, uint32_t destOffset{};
                }
            }

            public void SetComputeRoot32BitConstants<T>(uint rootParameterIndex, ref T srcData, uint32_t destOffset{};
                }
            }

            public void SetComputeRoot32BitConstants<T>(uint rootParameterIndex, T srcData, uint destOffsetIn32BitValues)
                where T : unmanaged
            {
                SetComputeRoot32BitConstants(rootParameterIndex, (uint)sizeof(T) / 4, &srcData, destOffsetIn32BitValues);
            }

            void SetGraphicsRoot32BitConstant(uint32_t rootParameterIndex, float srcData, uint32_t destOffsetIn32BitValues)
        {
                SetGraphicsRoot32BitConstant(rootParameterIndex, *(uint*)&srcData, destOffsetIn32BitValues);
            }

            void SetGraphicsRoot32BitConstants(uint32_t rootParameterIndex, uint32_t num32BitValuesToSet, void* srcData, uint32_t destOffsetIn32BitValues)
        {
                SetGraphicsRoot32BitConstants(rootParameterIndex, num32BitValuesToSet, srcData.ToPointer(), destOffsetIn32BitValues);
            }

            public void SetGraphicsRoot32BitConstants<T>(uint rootParameterIndex, T[] srcData, uint32_t destOffset{};

                SetGraphicsRoot32BitConstants(rootParameterIndex, span, destOffset);
            }

            public void SetGraphicsRoot32BitConstants<T>(uint rootParameterIndex, ReadOnlySpan<T> source, uint32_t destOffset{};
                }
            }

            public void SetGraphicsRoot32BitConstants<T>(uint rootParameterIndex, ref T srcData, uint32_t destOffset{};
                }
            }

            public void SetGraphicsRoot32BitConstants<T>(uint rootParameterIndex, T srcData, uint destOffsetIn32BitValues)
                where T : unmanaged
            {
                SetGraphicsRoot32BitConstants(rootParameterIndex, (uint)sizeof(T) / 4, &srcData, destOffsetIn32BitValues);
            }

            void OMSetBlendFactor(Color4 blendFactor)
        {
                OMSetBlendFactor(&blendFactor);
            }

            void OMSetBlendFactor(float red, float green, float blue, float alpha)
        {
                float* colorPtr = stackalloc float{ red, green, blue, alpha };
                OMSetBlendFactor(colorPtr);
            }

            void OMSetBlendFactor(const std::vector<float>& color)
        {
                fixed (float* colorPtr = &color)
                {
                    OMSetBlendFactor(colorPtr);
                }
            }

            void OMSetBlendFactor(const span<const float>& color)
        {
                fixed (float* colorPtr = color)
                {
                    OMSetBlendFactor(colorPtr);
                }
            }
            void RSSetViewport(float x, float y, float width, float height, float minDepth{};
                RSSetViewports(1, &viewport);
            }

            void RSSetViewport(Viewport viewport)
        {
                RSSetViewports(1, &viewport);
            }

            void RSSetViewports(std::initializer_list<std::vector<Viewport>> viewports)
        {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports((uint)viewports.Length, pViewports);
                }
            }

            void RSSetViewports(uint32_t count, const std::vector<Viewport>& viewports)
        {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports(count, pViewports);
                }
            }

            void RSSetViewports(const span<Viewport>& viewports)
        {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports((uint)viewports.Length, pViewports);
                }
            }

            void RSSetViewports(uint32_t count, const span<Viewport>& viewports)
        {
                fixed (Viewport* pViewports = viewports)
                {
                    RSSetViewports(count, pViewports);
                }
            }

            public void RSSetViewport<T>(T viewport) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewport));
                }
        #endif RSSetViewports(1 param, &viewport param) = 0;
            }

            public void RSSetViewports<T>(T[] viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif

                unsafe
                {
                    fixed (void* viewportsPtr = &viewports)
                    {
                        RSSetViewports((uint)viewports.Length, viewportsPtr);
                    }
                }
            }

            public void RSSetViewports<T>(uint count, T[] viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif

                unsafe
                {
                    fixed (void* viewportsPtr = &viewports)
                    {
                        RSSetViewports(count, viewportsPtr);
                    }
                }
            }

            public void RSSetViewports<T>(uint count, Span<T> viewports) where T : unmanaged
            {
        #if DEBUG
                if (sizeof(T) != sizeof(Viewport))
                {
                    throw new ArgumentException($"Type T must have same size and layout as {nameof(Viewport)}", nameof(viewports));
                }
        #endif
                unsafe
                {
                    fixed (void* pViewports = viewports)
                    {
                        RSSetViewports(count, pViewports);
                    }
                }
            }
            void RSSetScissorRect(int32_t width, int32_t height)
        {
                RawRect rect{};
                RSSetScissorRects(1, &rect);
            }

            void RSSetScissorRect(const RectI& rectangle)
        {
                RawRect rect{};
                RSSetScissorRects(1, &rect);
            }

            void RSSetScissorRect(RawRect rectangle)
        {
                RSSetScissorRects(1, &rectangle);
            }

            void RSSetScissorRects(std::initializer_list<std::vector<RawRect>> rects)
        {
                fixed (void* pRects = rects)
                {
                    RSSetScissorRects((uint)rects.Length, pRects);
                }
            }

            void RSSetScissorRects(uint32_t count, const std::vector<RawRect>& rects)
        {
                fixed (void* pRects = rects)
                {
                    RSSetScissorRects(count, pRects);
                }
            }

            void RSSetScissorRects(const span<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    RSSetScissorRects((uint)rects.Length, pRects);
                }
            }

            void RSSetScissorRects(uint32_t count, const span<RawRect>& rects)
        {
                fixed (RawRect* pRects = rects)
                {
                    RSSetScissorRects(count, pRects);
                }
            }

                        void UnsetRenderTargets(void)
        {
                OMSetRenderTargets(0, (void*)nullptr, false, nullptr);
            }

                                                void OMSetRenderTargets(CpuDescriptorHandle renderTargetDescriptor, std::optional<CpuDescriptorHandle> depthStencilDescriptor{};
                }
                else
                {
                    OMSetRenderTargets(1, (void*)&renderTargetDescriptor, false, depthStencilDescriptor);
                }
            }

                                            void OMSetRenderTargets(const std::vector<CpuDescriptorHandle>& renderTargetDescriptors, std::optional<CpuDescriptorHandle> depthStencilDescriptor{};
                OMSetRenderTargets(renderTargetDescriptorsSpan, depthStencilDescriptor);
            }

                                            void OMSetRenderTargets(const span<const CpuDescriptorHandle>& renderTargetDescriptors, std::optional<CpuDescriptorHandle> depthStencilDescriptor{};
                }
            }

                                                void OMSetRenderTargets(uint32_t numRenderTargetDescriptors, CpuDescriptorHandle firstRenderTargetDescriptor, std::optional<CpuDescriptorHandle> depthStencilDescriptor{};
            }

            void OMSetRenderTargets(uint32_t numRenderTargetDescriptors, const span<const CpuDescriptorHandle>& renderTargetDescriptors, bool RTsSingleHandleToDescriptorRange{};
                }
            }

            void OMSetRenderTargets(uint32_t numRenderTargetDescriptors, CpuDescriptorHandle* renderTargetDescriptors, bool RTsSingleHandleToDescriptorRange{};
            }
            void IASetVertexBuffers(uint32_t slot, VertexBufferView vertexBufferView)
        {
                IASetVertexBuffers(slot, 1, &vertexBufferView);
            }

            void IASetVertexBuffers(uint32_t startSlot, const span<VertexBufferView>& vertexBufferViews)
        {
                fixed (VertexBufferView* vertexBufferViewsPtr = vertexBufferViews)
                {
                    IASetVertexBuffers(startSlot, (uint)vertexBufferViews.Length, vertexBufferViewsPtr);
                }
            }

            void IASetVertexBuffers(uint32_t startSlot, std::initializer_list<std::vector<VertexBufferView>> vertexBufferViews)
        {
                fixed (VertexBufferView* vertexBufferViewsPtr = vertexBufferViews)
                {
                    IASetVertexBuffers(startSlot, (uint)vertexBufferViews.Length, vertexBufferViewsPtr);
                }
            }

            void IASetVertexBuffers(uint32_t startSlot, uint32_t viewsCount, const std::vector<VertexBufferView>& vertexBufferViews)
        {
                fixed (VertexBufferView* vertexBufferViewsPtr = vertexBufferViews)
                {
                    IASetVertexBuffers(startSlot, viewsCount, vertexBufferViewsPtr);
                }
            }

            void IASetVertexBuffers(uint32_t startSlot, uint32_t viewsCount, VertexBufferView* vertexBufferViews)
        {
                IASetVertexBuffers(startSlot, viewsCount, (void*)vertexBufferViews);
            }

            void IASetIndexBuffer(IndexBufferView* view)
        {
                IASetIndexBuffer((void*)view);
            }

            void IASetIndexBuffer(uint64_t bufferLocation, uint32_t sizeInBytes, Format format)
        {
                IndexBufferView view{};
                IASetIndexBuffer((void*)&view);
            }

            void IASetIndexBuffer(uint64_t bufferLocation, uint32_t sizeInBytes, bool is32Bit{};
                IASetIndexBuffer((void*)&view);
            }

            void IASetIndexBuffer(const std::optional<IndexBufferView>& view)
        {
                if (view.HasValue)
                {
                    IndexBufferView viewCall{};
                    IASetIndexBuffer((void*)&viewCall);
                }
                else
                {
                    IASetIndexBuffer((void*)nullptr);
                }
            }

            void BeginEvent(const std::string& name)
        {
                int32_t bufferSize{};
                void* buffer = stackalloc byte{};
                PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_BeginEvent_NoArgs, 0, name);
                BeginEvent(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize);
            }

            void SetMarker(const std::string& name)
        {
                int32_t bufferSize{};
                void* buffer = stackalloc byte{};
                PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_SetMarker_NoArgs, 0, name);
                SetMarker(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize);
            }

                                                    void CopyTextureRegion(TextureCopyLocation destination, uint32_t destinationX, uint32_t destinationY, uint32_t destinationZ, TextureCopyLocation source, std::optional<Box> sourceBox{};
            }

                                                            void CopyTextureRegion(TextureCopyLocation destination, Int3 destinationCoordinate, TextureCopyLocation source, std::optional<Box> sourceBox{};
            }

                            void DiscardResource(ID3D12Resource resource)
        {
                DiscardResource(resource, nullptr);
            }

                                    void DiscardResource(ID3D12Resource resource, uint32_t firstSubresource, uint32_t numSubresources)
        {
                DiscardResource(resource, new DiscardRegion
                {
                    NumRects = 0,
                    Rects = IntPtr.Zero,
                    FirstSubresource = firstSubresource,
                    NumSubresources = numSubresources
                });
            }

                                            void DiscardResource(ID3D12Resource resource, uint32_t rectCount, const std::vector<RawRect>& rects, uint32_t firstSubresource, uint32_t numSubresources)
        {
                fixed (RawRect* rectsPtr = &rects)
                {
                    DiscardResource(resource, new DiscardRegion
                    {
                        NumRects = rectCount,
                        Rects = (IntPtr)rectsPtr,
                        FirstSubresource = firstSubresource,
                        NumSubresources = numSubresources
                    });
                }
            }

                                        void DiscardResource(ID3D12Resource resource, const std::vector<RawRect>& rects, uint32_t firstSubresource, uint32_t numSubresources)
        {
                fixed (RawRect* rectsPtr = &rects)
                {
                    DiscardResource(resource, new DiscardRegion
                    {
                        NumRects = (uint)rects.Length,
                        Rects = (IntPtr)rectsPtr,
                        FirstSubresource = firstSubresource,
                        NumSubresources = numSubresources
                    });
                }
            }

            void Reset(ID3D12CommandAllocator commandAllocator)
        {
                Reset(commandAllocator, nullptr);
            }

            static void MemcpySubresource(MemCpyDest* pDest, SubresourceData* pSrc, uintptr_t RowSizeInBytes, uint32_t NumRows, uint32_t NumSlices)
        {
                for (uint32_t z{}; z < NumSlices; ++z)
                {
                    byte* pDestSlice = (byte*)(pDest->pData) + pDest->SlicePitch * (nuint)(z);
                    byte* pSrcSlice = unchecked((byte*)(pSrc->pData) + pSrc->SlicePitch * z);

                    for (uint32_t y{}; y < NumRows; ++y)
                    {
                        NativeMemory.Copy(unchecked(pSrcSlice + pSrc->RowPitch * y), pDestSlice + pDest->RowPitch * (nuint)y, RowSizeInBytes);
                    }
                }
            }

            static void MemcpySubresource(MemCpyDest* pDest, void* pResourceData, SubresourceInfo* pSrc, uintptr_t RowSizeInBytes, uint32_t NumRows, uint32_t NumSlices)
        {
                for (uint32_t z{}; z < NumSlices; ++z)
                {
                    byte* pDestSlice = (byte*)(pDest->pData) + pDest->SlicePitch * (nuint)(z);
                    byte* pSrcSlice = ((byte*)(pResourceData) + pSrc->Offset) + pSrc->DepthPitch * z;

                    for (uint32_t y{}; y < NumRows; ++y)
                    {
                        NativeMemory.Copy(pSrcSlice + pSrc->RowPitch * y, pDestSlice + pDest->RowPitch * y, RowSizeInBytes);
                    }
                }
            }

            uint64_t UpdateSubresources(ID3D12Resource destinationResource, ID3D12Resource intermediate, uint32_t firstSubresource, uint32_t numSubresources, uint64_t requiredSize, PlacedSubresourceFootPrint* pLayouts, uint* pNumRows, ulong* pRowSizesInBytes, SubresourceData* pSrcData)
        {
                ResourceDescription IntermediateDesc{};
                ResourceDescription DestinationDesc{};

                if ((IntermediateDesc.Dimension != ResourceDimension.Buffer)
                    || (IntermediateDesc.Width < (requiredSize + pLayouts.Offset))
                    || (requiredSize > nuint.MaxValue)
                    || ((DestinationDesc.Dimension == ResourceDimension.Buffer) && ((firstSubresource != 0) || (numSubresources != 1))))
                {
                    return 0{};
                }

                byte* pData;
                Result hr{};
                if (hr.Failure)
                {
                    return 0{};
                }

                for (uint32_t i{}; i < numSubresources; ++i)
                {
                    if (pRowSizesInBytes> nuint.MaxValue)
                    {
                        return 0{};
                    }

                    MemCpyDest DestData{};

                    MemcpySubresource(&DestData, &pSrcData, unchecked((nuint)(pRowSizesInBytes)), pNumRows, pLayouts.Footprint.Depth);
                }
                intermediate.Unmap(0, nullptr);

                if (DestinationDesc.Dimension == ResourceDimension.Buffer)
                {
                    CopyBufferRegion(destinationResource, 0, intermediate, pLayouts.Offset, (ulong)pLayouts.Footprint.Width);
                }
                else
                {
                    for (uint32_t i{}; i < numSubresources; ++i)
                    {
                        TextureCopyLocation dst{};
                        TextureCopyLocation src{};
                        CopyTextureRegion_(dst, 0, 0, 0, src, nullptr);
                    }
                }

                return requiredSize{};
            }

            uint64_t UpdateSubresources(ID3D12Resource destinationResource, ID3D12Resource intermediate, uint32_t firstSubresource, uint32_t numSubresources, uint64_t requiredSize, PlacedSubresourceFootPrint* pLayouts, uint* pNumRows, ulong* pRowSizesInBytes, void* pResourceData, SubresourceInfo* pSrcData)
        {
                ResourceDescription IntermediateDesc{};
                ResourceDescription DestinationDesc{};

                if ((IntermediateDesc.Dimension != ResourceDimension.Buffer)
                    || (IntermediateDesc.Width < (requiredSize + pLayouts.Offset))
                    || (requiredSize > nuint.MaxValue)
                    || ((DestinationDesc.Dimension == ResourceDimension.Buffer) && ((firstSubresource != 0) || (numSubresources != 1))))
                {
                    return 0{};
                }

                byte* pData;
                Result hr{};

                if (hr.Failure)
                {
                    return 0{};
                }

                for (uint32_t i{}; i < numSubresources; ++i)
                {
                    if (pRowSizesInBytes> nuint.MaxValue)
                    {
                        return 0{};
                    }

                    MemCpyDest DestData{};

                    MemcpySubresource(&DestData, pResourceData, &pSrcData, unchecked((nuint)(pRowSizesInBytes)), pNumRows, pLayouts.Footprint.Depth);
                }
                intermediate.Unmap(0, nullptr);

                if (DestinationDesc.Dimension == ResourceDimension.Buffer)
                {
                    CopyBufferRegion(destinationResource, 0, intermediate, pLayouts.Offset, pLayouts.Footprint.Width);
                }
                else
                {
                    for (uint32_t i{}; i < numSubresources; ++i)
                    {
                        TextureCopyLocation dst{};
                        TextureCopyLocation src{};
                        CopyTextureRegion_(dst, 0, 0, 0, src, nullptr);
                    }
                }

                return requiredSize{};
            }

            uint64_t UpdateSubresources(ID3D12Resource destinationResource, ID3D12Resource intermediate, uint64_t intermediateOffset, uint32_t firstSubresource, uint32_t numSubresources, SubresourceData* pSrcData)
        {
                PlacedSubresourceFootPrint* layouts = stackalloc PlacedSubresourceFootPrint[(int)numSubresources];
                uint* numRows = stackalloc uint[(int)numSubresources];
                ulong* rowSizesInBytes = stackalloc ulong[(int)numSubresources];
                uint64_t requiredSize{};

                ResourceDescription resourceDesc{};
                }

                uint64_t result{};
                return result{};
            }

            uint64_t UpdateSubresources(ID3D12Resource destinationResource, ID3D12Resource intermediate, uint32_t firstSubresource, uint32_t numSubresources, uint64_t requiredSize, const span<const PlacedSubresourceFootPrint>& layouts, const span<const uint32_t>& numRows, const span<const uint64_t>& rowSizesInBytes, SubresourceData* pSrcData)
        {
                fixed (PlacedSubresourceFootPrint* pLayouts = layouts)
                fixed (uint* pNumRows = numRows)
                fixed (ulong* pRowSizesInBytes = rowSizesInBytes)
                {
                    return UpdateSubresources(destinationResource param, intermediate param, firstSubresource param, numSubresources param, requiredSize param, pLayouts param, pNumRows param, pRowSizesInBytes param, pSrcData param) = 0;
                }
            }

            uint64_t UpdateSubresources(ID3D12Resource destinationResource, ID3D12Resource intermediate, uint32_t firstSubresource, uint32_t numSubresources, uint64_t requiredSize, const span<const PlacedSubresourceFootPrint>& layouts, const span<const uint32_t>& numRows, const span<const uint64_t>& rowSizesInBytes, void* resourceData, SubresourceInfo* pSrcData)
        {
                fixed (PlacedSubresourceFootPrint* pLayouts = layouts)
                fixed (uint* pNumRows = numRows)
                fixed (ulong* pRowSizesInBytes = rowSizesInBytes)
                {
                    return UpdateSubresources(destinationResource param, intermediate param, firstSubresource param, numSubresources param, requiredSize param, pLayouts param, pNumRows param, pRowSizesInBytes param, resourceData param, pSrcData param) = 0;
                }
            }

            struct MemCpyDest
        {
                public unsafe void* pData;

                public: uintptr_t RowPitch{};
                public: uintptr_t SlicePitch{};
            }
        }


    }
}

#endif // VORTICE_ID3D12GRAPHICSCOMMANDLIST_H