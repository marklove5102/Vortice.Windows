// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST_H
#define VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST_H
#define VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST_H

#include <cstdint>

namespace Vortice {

class ID3D12GraphicsCommandList
{
public:
    ~ID3D12GraphicsCommandList() = default;

    uintptr_t RowPitch;
    uintptr_t SlicePitch;

    void ResourceBarrierTransition() { auto barrier = new ResourceBarrier(
            new ResourceTransitionBarrier(resource, stateBefore, stateAfter, subresource),
            flags);
        ResourceBarrier(1, &barrier); }

    void ResourceBarrierAliasing() { auto barrier = new ResourceBarrier(new ResourceAliasingBarrier(resourceBefore, resourceAfter));
        ResourceBarrier(1, &barrier); }

    void ResourceBarrierUnorderedAccessView() { auto barrier = new ResourceBarrier(new ResourceUnorderedAccessViewBarrier(resource));
        ResourceBarrier(1, &barrier); }

    void ResourceBarrier() { ResourceBarrier(1, &barrier); }

    void UnsetDescriptorHeaps() { SetDescriptorHeaps(0, (void*)nullptr); }

    void SetDescriptorHeaps() { SetDescriptorHeaps(descriptorHeaps.Length, descriptorHeaps); }

    void SetDescriptorHeaps() { SetDescriptorHeaps(descriptorHeaps.Length, descriptorHeaps); }

    void ClearRenderTargetView() { ClearRenderTargetView(renderTargetView, color, 0, (void*)nullptr); }

    void ClearDepthStencilView() { ClearDepthStencilView(depthStencilView, clearFlags, depth, stencil, 0, (void*)nullptr); }

    void ClearUnorderedAccessViewFloat() { ClearUnorderedAccessViewFloat(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, 0, nullptr); }

    void ClearUnorderedAccessViewFloat() { ClearUnorderedAccessViewFloat(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, (uint)rects.Length, rects); }

    void ClearUnorderedAccessViewFloat() { ClearUnorderedAccessViewFloat(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, rectCount, rects); }

    void ClearUnorderedAccessViewUint() { ClearUnorderedAccessViewUint(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, 0, nullptr); }

    void ClearUnorderedAccessViewUint() { ClearUnorderedAccessViewUint(viewGpuHandleInCurrentHeap, viewCpuHandle, resource, &clearValue, (uint)rectangles.Length, rectangles); }

    void SetComputeRoot32BitConstant() { SetComputeRoot32BitConstant(rootParameterIndex, *(uint*)&srcData, destOffsetIn32BitValues); }

    void SetComputeRoot32BitConstant() { SetComputeRoot32BitConstant(rootParameterIndex, *(uint*)&srcData, destOffsetIn32BitValues); }

    void SetComputeRoot32BitConstants() { SetComputeRoot32BitConstants(rootParameterIndex, num32BitValuesToSet, srcData.ToPointer(), destOffsetIn32BitValues); }

    void SetGraphicsRoot32BitConstant() { SetGraphicsRoot32BitConstant(rootParameterIndex, *(uint*)&srcData, destOffsetIn32BitValues); }

    void SetGraphicsRoot32BitConstants() { SetGraphicsRoot32BitConstants(rootParameterIndex, num32BitValuesToSet, srcData.ToPointer(), destOffsetIn32BitValues); }

    void OMSetBlendFactor() { OMSetBlendFactor(&blendFactor); }

    void RSSetViewport() { auto viewport = new Viewport(x, y, width, height, minDepth, maxDepth);
        RSSetViewports(1, &viewport); }

    void RSSetViewport() { RSSetViewports(1, &viewport); }

    void RSSetScissorRect() { RawRect rect = new(0, 0, width, height);
        RSSetScissorRects(1, &rect); }

    void RSSetScissorRect() { RawRect rect = rectangle;
        RSSetScissorRects(1, &rect); }

    void RSSetScissorRect() { RSSetScissorRects(1, &rectangle); }

    void UnsetRenderTargets() { OMSetRenderTargets(0, (void*)nullptr, false, nullptr); }

    void OMSetRenderTargets() { ReadOnlySpan<CpuDescriptorHandle> renderTargetDescriptorsSpan = renderTargetDescriptors.AsSpan();
        OMSetRenderTargets(renderTargetDescriptorsSpan, depthStencilDescriptor); }

    void OMSetRenderTargets() { OMSetRenderTargets(numRenderTargetDescriptors, (void*)&firstRenderTargetDescriptor, true, depthStencilDescriptor); }

    void OMSetRenderTargets() { OMSetRenderTargets(numRenderTargetDescriptors, (void*)renderTargetDescriptors, RTsSingleHandleToDescriptorRange, depthStencilDescriptor); }

    void IASetVertexBuffers() { IASetVertexBuffers(slot, 1, &vertexBufferView); }

    void IASetVertexBuffers() { IASetVertexBuffers(startSlot, viewsCount, (void*)vertexBufferViews); }

    void IASetIndexBuffer() { IASetIndexBuffer((void*)view); }

    void IASetIndexBuffer() { IndexBufferView view = new(bufferLocation, sizeInBytes, format);
        IASetIndexBuffer((void*)&view); }

    void IASetIndexBuffer() { IndexBufferView view = new(bufferLocation, sizeInBytes, is32Bit ? Format.R32_UInt : Format.R16_UInt);
        IASetIndexBuffer((void*)&view); }

    void BeginEvent() { int bufferSize = PixHelpers.CalculateNoArgsEventSize(name);
        void* buffer = stackalloc byte[bufferSize];
        PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_BeginEvent_NoArgs, 0, name);
        BeginEvent(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize); }

    void SetMarker() { int bufferSize = PixHelpers.CalculateNoArgsEventSize(name);
        void* buffer = stackalloc byte[bufferSize];
        PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_SetMarker_NoArgs, 0, name);
        SetMarker(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize); }

    void CopyTextureRegion() { CopyTextureRegion_(destination, destinationX, destinationY, destinationZ, source, sourceBox); }

    void CopyTextureRegion() { CopyTextureRegion_(destination,
            (uint)destinationCoordinate.X, (uint)destinationCoordinate.Y, (uint)destinationCoordinate.Z,
            source, sourceBox); }

    void DiscardResource() { DiscardResource(resource, nullptr); }

    void Reset() { Reset(commandAllocator, nullptr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEMCPYDEST_H
#define VORTICE_VORTICE_MEMCPYDEST_H

#include <cstdint>

namespace Vortice {

struct MemCpyDest
{
public:
    uintptr_t RowPitch;
    uintptr_t SlicePitch;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MEMCPYDEST_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST_H
