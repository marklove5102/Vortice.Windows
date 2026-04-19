// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT_H
#define VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICECONTEXT_H
#define VORTICE_VORTICE_ID3D11DEVICECONTEXT_H

#include <cstdint>

namespace Vortice {

class ID3D11DeviceContext
{
public:
    ~ID3D11DeviceContext() = default;

    void ClearRenderTargetView() { ClearRenderTargetView(renderTargetView, new Color4(color)); }

    void OMSetBlendState() { IntPtr blendStatePtr = blendState?.(NativePointer ? NativePointer : IntPtr).Zero;
        ((delegate* unmanaged[Stdcall]<IntPtr, void*, float*, uint, void>)this[OMSetBlendState__vtbl_index])(NativePointer, (void*)blendStatePtr, nullptr, DefaultSampleMask); }

    void OMSetBlendState() { IntPtr blendStatePtr = blendState?.(NativePointer ? NativePointer : IntPtr).Zero;
        ((delegate* unmanaged[Stdcall]<IntPtr, void*, float*, uint, void>)this[OMSetBlendState__vtbl_index])(NativePointer, (void*)blendStatePtr, blendFactor, DefaultSampleMask); }

    void OMSetBlendState() { IntPtr blendStatePtr = blendState?.(NativePointer ? NativePointer : IntPtr).Zero;
        ((delegate* unmanaged[Stdcall]<IntPtr, void*, float*, uint, void>)this[OMSetBlendState__vtbl_index])(NativePointer, (void*)blendStatePtr, blendFactor, sampleMask); }

    void OMSetBlendState() { OMSetBlendState(blendState, (float*)&blendFactor, DefaultSampleMask); }

    void OMSetBlendState() { OMSetBlendState(blendState, (float*)&blendFactor, sampleMask); }

    void UnsetRenderTargets() { OMSetRenderTargets(0, (void*)nullptr, nullptr); }

    void OMSetRenderTargets() { IntPtr renderTargetViewPtr = renderTargetView == nullptr ? IntPtr.Zero : renderTargetView.NativePointer;
        OMSetRenderTargets(1, &renderTargetViewPtr, depthStencilView); }

    void OMSetRenderTargetsAndUnorderedAccessViews() { OMSetRenderTargetsAndUnorderedAccessViews(
            (uint)renderTargetViews.Length, renderTargetViews, depthStencilView,
            uavStartSlot, (uint)unorderedAccessViews.Length, unorderedAccessViews, uavInitialCounts
            ); }

    ID3D11CommandList FinishCommandList() { FinishCommandList(restoreState, out ID3D11CommandList result).CheckError();
        return result; }

    bool IsDataAvailable() { return GetData(data, IntPtr.Zero, 0, AsyncGetDataFlags.None) == Result.Ok; }

    bool IsDataAvailable() { return GetData(data, IntPtr.Zero, 0, flags) == Result.Ok; }

    DataStream GetData() { auto result = new DataStream((int)data.DataSize, true, true);
        GetData(data, result.BasePointer, (uint)result.Length, flags);
        return result; }

    void OMGetBlendState() { IntPtr blendStatePtr = IntPtr.Zero;
        ((delegate* unmanaged[Stdcall]<IntPtr, void*, float*, out uint, void>)this[OMGetBlendState__vtbl_index])(
            NativePointer, &blendStatePtr, blendFactor, out sampleMask);
        blendState = new ID3D11BlendState(blendStatePtr); }

    ID3D11BlendState OMGetBlendState() { OMGetBlendState(out ID3D11BlendState blendState, default, out _);
        return blendState; }

    ID3D11BlendState OMGetBlendState() { Color4 blendFactorResult = default;
        OMGetBlendState(out ID3D11BlendState blendState, (float*)&blendFactorResult, out _);
        blendFactor = blendFactorResult;
        return blendState; }

    ID3D11BlendState OMGetBlendState() { Color4 blendFactorResult = default;
        OMGetBlendState(out ID3D11BlendState blendState, (float*)&blendFactorResult, out sampleMask);
        blendFactor = blendFactorResult;
        return blendState; }

    void RSSetViewport() { auto viewport = new Viewport(x, y, width, height, minDepth, maxDepth);
        RSSetViewports(1, &viewport); }

    void RSSetViewport() { RSSetViewports(1, &viewport); }

    uint32_t RSGetViewports() { uint numViewports = 0;
        RSGetViewports(ref numViewports, (void*)nullptr);
        return numViewports; }

    Viewport RSGetViewport() { uint numViewports = 1;
        Viewport viewport = default;
        RSGetViewports(ref numViewports, (void*)&viewport);
        return viewport; }

    void RSGetViewports() { RSGetViewports(ref count, (void*)viewports); }

    uint32_t RSGetScissorRects() { uint numRects = 0;
        RSGetScissorRects(ref numRects, IntPtr.Zero);
        return numRects; }

    void RSSetScissorRect() { RawRect rawRect = new(x, y, x + width, y + height);
        RSSetScissorRects(1, &rawRect); }

    void RSSetScissorRect() { RawRect rect = new(0, 0, width, height);
        RSSetScissorRects(1, &rect); }

    void RSSetScissorRect() { RawRect rawRect = rectangle;
        RSSetScissorRects(1, &rawRect); }

    void RSSetScissorRect() { RSSetScissorRects(1, &rectangle); }

    RawRect RSGetScissorRect() { uint numRects = 1;
        auto rect = new RawRect();
        RSGetScissorRects(ref numRects, new IntPtr(&rect));
        return rect; }

    void RSGetScissorRects() { RSGetScissorRects(ref count, (IntPtr)rects); }

    void SOSetTargets() { SOSetTargets((uint)targets.Length, targets, offsets); }

    void UnsetSOTargets() { SOSetTargets(0, (void*)nullptr, (void*)nullptr); }

    void IASetVertexBuffer() { IntPtr pVertexBuffers = buffer == nullptr ? IntPtr.Zero : buffer.NativePointer;
        IASetVertexBuffers(slot, 1, &pVertexBuffers, &stride, &offset); }

    void IASetVertexBuffers() { IASetVertexBuffers(firstSlot, (uint)vertexBuffers.Length, vertexBuffers, strides, offsets); }

    void VSSetShader() { IntPtr shaderPtr = vertexShader?.(NativePointer ? NativePointer : IntPtr).Zero;
        VSSetShader(shaderPtr, IntPtr.Zero, 0); }

    void VSSetShader() { VSSetShader(vertexShader, classInstances, (uint)classInstances.Length); }

    void VSUnsetConstantBuffer() { void* nullBuffer = default;
        VSSetConstantBuffers(slot, 1, &nullBuffer); }

    void VSSetConstantBuffer() { IntPtr nativePtr = constantBuffer == nullptr ? IntPtr.Zero : constantBuffer.NativePointer;
        VSSetConstantBuffers(slot, 1, &nativePtr); }

    void VSSetConstantBuffers() { VSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void VSUnsetSampler() { void* nullSampler = default;
        VSSetSamplers(slot, 1, &nullSampler); }

    void VSSetSampler() { IntPtr nativePtr = sampler == nullptr ? IntPtr.Zero : sampler.NativePointer;
        VSSetSamplers(slot, 1, &nativePtr); }

    void VSSetSamplers() { VSSetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void VSUnsetShaderResource() { void* nullResource = default;
        VSSetShaderResources(slot, 1, &nullResource); }

    void VSSetShaderResource() { IntPtr nativePtr = shaderResourceView == nullptr ? IntPtr.Zero : shaderResourceView.NativePointer;
        VSSetShaderResources(slot, 1, &nativePtr); }

    void VSSetShaderResources() { VSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    ID3D11VertexShader VSGetShader() { uint count = 0;
        VSGetShader(out ID3D11VertexShader shader, nullptr, ref count);
        return shader; }

    ID3D11VertexShader VSGetShader() { uint count = (uint)classInstances.Length;
        VSGetShader(out ID3D11VertexShader shader, classInstances, ref count);
        return shader; }

    ID3D11VertexShader VSGetShader() { VSGetShader(out ID3D11VertexShader shader, classInstances, ref classInstancesCount);
        return shader; }

    void VSGetConstantBuffers() { VSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void VSGetSamplers() { VSGetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void VSGetShaderResources() { VSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    void PSSetShader() { IntPtr shaderPtr = pixelShader?.(NativePointer ? NativePointer : IntPtr).Zero;
        PSSetShader(shaderPtr, IntPtr.Zero, 0); }

    void PSSetShader() { PSSetShader(pixelShader, classInstances, (uint)classInstances.Length); }

    void PSUnsetConstantBuffer() { void* nullBuffer = default;
        PSSetConstantBuffers(slot, 1, &nullBuffer); }

    void PSSetConstantBuffer() { IntPtr nativePtr = constantBuffer == nullptr ? IntPtr.Zero : constantBuffer.NativePointer;
        PSSetConstantBuffers(slot, 1, &nativePtr); }

    void PSSetConstantBuffers() { PSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void PSUnsetSampler() { void* nullSampler = default;
        PSSetSamplers(slot, 1, &nullSampler); }

    void PSSetSampler() { IntPtr nativePtr = sampler == nullptr ? IntPtr.Zero : sampler.NativePointer;
        PSSetSamplers(slot, 1, &nativePtr); }

    void PSSetSamplers() { PSSetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void PSUnsetShaderResource() { void* nullResource = default;
        PSSetShaderResources(slot, 1, &nullResource); }

    void PSSetShaderResource() { IntPtr nativePtr = shaderResourceView == nullptr ? IntPtr.Zero : shaderResourceView.NativePointer;
        PSSetShaderResources(slot, 1, &nativePtr); }

    void PSSetShaderResources() { PSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    ID3D11PixelShader PSGetShader() { uint count = 0;
        PSGetShader(out ID3D11PixelShader shader, nullptr, ref count);
        return shader; }

    ID3D11PixelShader PSGetShader() { uint count = (uint)classInstances.Length;
        PSGetShader(out ID3D11PixelShader shader, classInstances, ref count);
        return shader; }

    ID3D11PixelShader PSGetShader() { PSGetShader(out ID3D11PixelShader shader, classInstances, ref classInstancesCount);
        return shader; }

    void PSGetConstantBuffers() { PSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void PSGetSamplers() { PSGetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void PSGetShaderResources() { PSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    void DSSetShader() { IntPtr shaderPtr = domainShader?.(NativePointer ? NativePointer : IntPtr).Zero;
        DSSetShader(shaderPtr, IntPtr.Zero, 0); }

    void DSSetShader() { DSSetShader(domainShader, classInstances, (uint)classInstances.Length); }

    void DSUnsetConstantBuffer() { void* nullBuffer = default;
        DSSetConstantBuffers(slot, 1, &nullBuffer); }

    void DSSetConstantBuffer() { IntPtr nativePtr = constantBuffer == nullptr ? IntPtr.Zero : constantBuffer.NativePointer;
        DSSetConstantBuffers(slot, 1, &nativePtr); }

    void DSSetConstantBuffers() { DSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void DSUnsetSampler() { void* nullSampler = default;
        DSSetSamplers(slot, 1, &nullSampler); }

    void DSSetSampler() { IntPtr nativePtr = sampler == nullptr ? IntPtr.Zero : sampler.NativePointer;
        DSSetSamplers(slot, 1, &nativePtr); }

    void DSSetSamplers() { DSSetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void DSUnsetShaderResource() { void* nullResource = default;
        DSSetShaderResources(slot, 1, &nullResource); }

    void DSSetShaderResource() { IntPtr nativePtr = shaderResourceView == nullptr ? IntPtr.Zero : shaderResourceView.NativePointer;
        DSSetShaderResources(slot, 1, &nativePtr); }

    void DSSetShaderResources() { DSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    ID3D11DomainShader DSGetShader() { uint count = 0;
        DSGetShader(out ID3D11DomainShader shader, nullptr, ref count);
        return shader; }

    ID3D11DomainShader DSGetShader() { uint count = (uint)classInstances.Length;
        DSGetShader(out ID3D11DomainShader shader, classInstances, ref count);
        return shader; }

    ID3D11DomainShader DSGetShader() { DSGetShader(out ID3D11DomainShader shader, classInstances, ref classInstancesCount);
        return shader; }

    void DSGetConstantBuffers() { DSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void DSGetSamplers() { DSGetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void DSGetShaderResources() { DSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    void HSSetShader() { IntPtr shaderPtr = hullShader?.(NativePointer ? NativePointer : IntPtr).Zero;
        HSSetShader(shaderPtr, IntPtr.Zero, 0); }

    void HSSetShader() { HSSetShader(hullShader, classInstances, (uint)classInstances.Length); }

    void HSUnsetConstantBuffer() { void* nullBuffer = default;
        HSSetConstantBuffers(slot, 1, &nullBuffer); }

    void HSSetConstantBuffer() { IntPtr nativePtr = constantBuffer == nullptr ? IntPtr.Zero : constantBuffer.NativePointer;
        HSSetConstantBuffers(slot, 1, &nativePtr); }

    void HSSetConstantBuffers() { HSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void HSUnsetSampler() { void* nullSampler = default;
        HSSetSamplers(slot, 1, &nullSampler); }

    void HSSetSampler() { IntPtr nativePtr = sampler == nullptr ? IntPtr.Zero : sampler.NativePointer;
        HSSetSamplers(slot, 1, &nativePtr); }

    void HSSetSamplers() { HSSetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void HSUnsetShaderResource() { void* nullResource = default;
        HSSetShaderResources(slot, 1, &nullResource); }

    void HSSetShaderResource() { IntPtr nativePtr = shaderResourceView == nullptr ? IntPtr.Zero : shaderResourceView.NativePointer;
        HSSetShaderResources(slot, 1, &nativePtr); }

    void HSSetShaderResources() { HSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    ID3D11HullShader HSGetShader() { uint count = 0;
        HSGetShader(out ID3D11HullShader shader, nullptr, ref count);
        return shader; }

    ID3D11HullShader HSGetShader() { uint count = (uint)classInstances.Length;
        HSGetShader(out ID3D11HullShader shader, classInstances, ref count);
        return shader; }

    ID3D11HullShader HSGetShader() { HSGetShader(out ID3D11HullShader shader, classInstances, ref classInstancesCount);
        return shader; }

    void HSGetConstantBuffers() { HSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void HSGetSamplers() { HSGetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void HSGetShaderResources() { HSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    void GSSetShader() { IntPtr shaderPtr = geometryShader?.(NativePointer ? NativePointer : IntPtr).Zero;
        GSSetShader(shaderPtr, IntPtr.Zero, 0); }

    void GSSetShader() { GSSetShader(geometryShader, classInstances, (uint)classInstances.Length); }

    void GSUnsetConstantBuffer() { void* nullBuffer = default;
        GSSetConstantBuffers(slot, 1, &nullBuffer); }

    void GSSetConstantBuffer() { IntPtr nativePtr = constantBuffer == nullptr ? IntPtr.Zero : constantBuffer.NativePointer;
        GSSetConstantBuffers(slot, 1, &nativePtr); }

    void GSSetConstantBuffers() { GSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void GSUnsetSampler() { void* nullSampler = default;
        GSSetSamplers(slot, 1, &nullSampler); }

    void GSSetSampler() { IntPtr nativePtr = sampler == nullptr ? IntPtr.Zero : sampler.NativePointer;
        GSSetSamplers(slot, 1, &nativePtr); }

    void GSSetSamplers() { GSSetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void GSUnsetShaderResource() { void* nullResource = default;
        GSSetShaderResources(slot, 1, &nullResource); }

    void GSSetShaderResource() { IntPtr nativePtr = shaderResourceView == nullptr ? IntPtr.Zero : shaderResourceView.NativePointer;
        GSSetShaderResources(slot, 1, &nativePtr); }

    void GSSetShaderResources() { GSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    ID3D11GeometryShader GSGetShader() { uint count = 0;
        GSGetShader(out ID3D11GeometryShader shader, nullptr, ref count);
        return shader; }

    ID3D11GeometryShader GSGetShader() { uint count = (uint)classInstances.Length;
        GSGetShader(out ID3D11GeometryShader shader, classInstances, ref count);
        return shader; }

    ID3D11GeometryShader GSGetShader() { GSGetShader(out ID3D11GeometryShader shader, classInstances, ref classInstancesCount);
        return shader; }

    void GSGetConstantBuffers() { GSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void GSGetSamplers() { GSGetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void GSGetShaderResources() { GSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    void CSSetShader() { IntPtr shaderPtr = computeShader?.(NativePointer ? NativePointer : IntPtr).Zero;
        CSSetShader(shaderPtr, IntPtr.Zero, 0); }

    void CSSetShader() { CSSetShader(computeShader, classInstances, (uint)classInstances.Length); }

    void CSUnsetConstantBuffer() { void* nullBuffer = default;
        CSSetConstantBuffers(slot, 1, &nullBuffer); }

    void CSSetConstantBuffer() { IntPtr nativePtr = constantBuffer == nullptr ? IntPtr.Zero : constantBuffer.NativePointer;
        CSSetConstantBuffers(slot, 1, &nativePtr); }

    void CSSetConstantBuffers() { CSSetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void CSUnsetSampler() { void* nullSampler = default;
        CSSetSamplers(slot, 1, &nullSampler); }

    void CSSetSampler() { IntPtr nativePtr = sampler == nullptr ? IntPtr.Zero : sampler.NativePointer;
        CSSetSamplers(slot, 1, &nativePtr); }

    void CSSetSamplers() { CSSetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void CSUnsetShaderResource() { void* nullResource = default;
        CSSetShaderResources(slot, 1, &nullResource); }

    void CSSetShaderResource() { IntPtr nativePtr = shaderResourceView == nullptr ? IntPtr.Zero : shaderResourceView.NativePointer;
        CSSetShaderResources(slot, 1, &nativePtr); }

    void CSSetShaderResources() { CSSetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    ID3D11ComputeShader CSGetShader() { uint count = 0;
        CSGetShader(out ID3D11ComputeShader shader, nullptr, ref count);
        return shader; }

    ID3D11ComputeShader CSGetShader() { uint count = (uint)classInstances.Length;
        CSGetShader(out ID3D11ComputeShader shader, classInstances, ref count);
        return shader; }

    ID3D11ComputeShader CSGetShader() { CSGetShader(out ID3D11ComputeShader shader, classInstances, ref classInstancesCount);
        return shader; }

    void CSGetConstantBuffers() { CSGetConstantBuffers(startSlot, (uint)constantBuffers.Length, constantBuffers); }

    void CSGetSamplers() { CSGetSamplers(startSlot, (uint)samplers.Length, samplers); }

    void CSGetShaderResources() { CSGetShaderResources(startSlot, (uint)shaderResourceViews.Length, shaderResourceViews); }

    void CSSetUnorderedAccessView() { IntPtr nativePtr = unorderedAccessView == nullptr ? IntPtr.Zero : unorderedAccessView.NativePointer;
        CSSetUnorderedAccessViews(slot, 1, &nativePtr, &uavInitialCount); }

    MappedSubresource Map() { Map(resource, 0, mode, flags, out MappedSubresource mappedSubresource).CheckError();
        return mappedSubresource; }

    MappedSubresource Map() { Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
        return mappedSubresource; }

    MappedSubresource Map() { subresource = resource.CalculateSubResourceIndex(mipSlice, arraySlice, out mipSize);
        Map(resource, subresource, mode, flags, out MappedSubresource mappedSubresource).CheckError();
        return mappedSubresource; }

    HRESULT Map() { uint subresource = resource.CalculateSubResourceIndex(mipSlice, arraySlice, out mipSize);
        return Map(resource, subresource, mode, flags, out mappedSubresource); }

    void Unmap() { uint subresource = resource.CalculateSubResourceIndex(mipSlice, arraySlice, out _);
        Unmap(resource, subresource); }

    void UpdateSubresource() { UpdateSubresource(resource, subresource, nullptr, source.DataPointer, source.RowPitch, source.DepthPitch); }

    void UpdateSubresource() { UpdateSubresource(resource, subresource, region, source.DataPointer, source.RowPitch, source.DepthPitch); }

    void UpdateSubresourceSafe() { UpdateSubresourceSafe(resource, subresource, nullptr, source.DataPointer, source.RowPitch, source.DepthPitch, srcBytesPerElement, isCompressedResource); }

    void UpdateSubresourceSafe() { UpdateSubresourceSafe(resource, subresource, region, source.DataPointer, source.RowPitch, source.DepthPitch, srcBytesPerElement, isCompressedResource); }


private:
    static const std::vector<uint32_t> s_NegativeOnes{new uint[UnorderedAccessViewRegisterCount]
    {
        KeepUnorderedAccessViews, KeepUnorderedAccessViews, KeepUnorderedAccessViews,
        KeepUnorderedAccessViews, KeepUnorderedAccessViews, KeepUnorderedAccessViews,
        KeepUnorderedAccessViews, KeepUnorderedAccessViews
    }};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICECONTEXT_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICECONTEXT_H
