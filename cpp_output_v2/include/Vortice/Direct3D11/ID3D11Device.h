// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICE_H
#define VORTICE_DIRECT3D11_ID3D11DEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICE_H
#define VORTICE_VORTICE_ID3D11DEVICE_H

#include <cstdint>

namespace Vortice {

class ID3D11Device
{
public:
    ~ID3D11Device() = default;

    FeatureDataThreading CheckFeatureThreading() { return CheckFeatureSupport<FeatureDataThreading>(Feature.Threading); }

    FeatureDataDoubles CheckFeatureDoubles() { return CheckFeatureSupport<FeatureDataDoubles>(Feature.Doubles); }

    FeatureDataD3D11Options CheckFeatureOptions() { return CheckFeatureSupport<FeatureDataD3D11Options>(Feature.D3D11Options); }

    FeatureDataArchitectureInfo CheckFeatureArchitectureInfo() { return CheckFeatureSupport<FeatureDataArchitectureInfo>(Feature.ArchitectureInfo); }

    FeatureDataShaderMinPrecisionSupport CheckFeatureShaderMinPrecisionSupport() { return CheckFeatureSupport<FeatureDataShaderMinPrecisionSupport>(Feature.ShaderMinPrecisionSupport); }

    FeatureDataD3D11Options1 CheckFeatureOptions1() { return CheckFeatureSupport<FeatureDataD3D11Options1>(Feature.D3D11Options1); }

    FeatureDataD3D11Options2 CheckFeatureOptions2() { return CheckFeatureSupport<FeatureDataD3D11Options2>(Feature.D3D11Options2); }

    FeatureDataD3D11Options3 CheckFeatureOptions3() { return CheckFeatureSupport<FeatureDataD3D11Options3>(Feature.D3D11Options3); }

    FeatureDataD3D11Options4 CheckFeatureOptions4() { return CheckFeatureSupport<FeatureDataD3D11Options4>(Feature.D3D11Options4); }

    FeatureDataD3D11Options5 CheckFeatureOptions5() { return CheckFeatureSupport<FeatureDataD3D11Options5>(Feature.D3D11Options5); }

    FeatureDataGpuVirtualAddressSupport CheckFeatureGpuVirtualAddressSupport() { return CheckFeatureSupport<FeatureDataGpuVirtualAddressSupport>(Feature.GpuVirtualAddressSupport); }

    FeatureDataShaderCache CheckFeatureShaderCache() { return CheckFeatureSupport<FeatureDataShaderCache>(Feature.ShaderCache); }

    ID3D11DeviceContext CreateDeferredContext() { return CreateDeferredContext(0); }

    ID3D11Buffer CreateBuffer() { CreateBuffer(description, initialData, out ID3D11Buffer buffer).CheckError();
        return buffer; }

    ID3D11Buffer CreateBuffer() { CreateBuffer(description,
            dataPointer != IntPtr.Zero ? new SubresourceData(dataPointer) : (SubresourceData?)default,
            out ID3D11Buffer buffer).CheckError();
        return buffer; }

    ID3D11Buffer CreateBuffer() { return CreateBuffer(description, new SubresourceData(data.PositionPointer, 0, 0)); }

    ID3D11VertexShader CreateVertexShader() { return CreateVertexShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage); }

    ID3D11PixelShader CreatePixelShader() { return CreatePixelShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage); }

    ID3D11GeometryShader CreateGeometryShader() { return CreateGeometryShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage); }

    ID3D11HullShader CreateHullShader() { return CreateHullShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage); }

    ID3D11DomainShader CreateDomainShader() { return CreateDomainShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage); }

    ID3D11ComputeShader CreateComputeShader() { return CreateComputeShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage); }

    ID3D11InputLayout CreateInputLayout() { return CreateInputLayout(inputElements, (uint)inputElements.Length, blob.BufferPointer.ToPointer(), blob.BufferSize); }

    ID3D11Query CreateQuery() { return CreateQuery(new QueryDescription(queryType, miscFlags)); }

    ID3D11Texture1D CreateTexture1D() { return CreateTexture1D(description, (void*)nullptr); }

    ID3D11Texture1D CreateTexture1D() { return CreateTexture1D(description, &initialData); }

    ID3D11Texture1D CreateTexture1D() { Texture1DDescription description = new(format, width, arraySize, mipLevels, bindFlags, usage, cpuAccessFlags, miscFlags);
        return CreateTexture1D(in description, initialData); }

    ID3D11Texture2D CreateTexture2D() { return CreateTexture2D(description, (void*)nullptr); }

    ID3D11Texture2D CreateTexture2D() { return CreateTexture2D(description, &initialData); }

    ID3D11Texture2D CreateTexture2D() { return CreateTexture2D(new Texture2DDescription(format, width, height, arraySize, mipLevels, bindFlags, usage, cpuAccessFlags, 1, 0, miscFlags), initialData); }

    ID3D11Texture2D CreateTextureCube() { Texture2DDescription description = new(format, size, size, 6u, mipLevels, bindFlags, usage, cpuAccessFlags, 1, 0, miscFlags | ResourceOptionFlags.TextureCube);
        return CreateTexture2D(description, initialData); }

    ID3D11Texture3D CreateTexture3D() { return CreateTexture3D(description, (void*)nullptr); }

    ID3D11Texture3D CreateTexture3D() { return CreateTexture3D(description, &initialData); }

    ID3D11Texture3D CreateTexture3D() { return CreateTexture3D(new Texture3DDescription(format, width, height, depth, mipLevels, bindFlags,
            usage: usage,
            cpuAccessFlags: cpuAccessFlags,
            miscFlags: miscFlags),
            initialData); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICE_H
