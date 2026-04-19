// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT3D12_PIPELINESTATESTREAMSUBOBJECT_H
#define VORTICE_VORTICE_DIRECT3D12_PIPELINESTATESTREAMSUBOBJECT_H

#include <cstdint>
#include <vector>

namespace Vortice::Direct3D12 {

struct PipelineStateSubObjectTypeRootSignature
{
    PipelineStateSubObjectType Type;
    void* RootSignature;

    // Constructors
    constexpr PipelineStateSubObjectTypeRootSignature(ID3D12RootSignature rootSignature)
        : rootSignature(rootSignature) {}

};

struct PipelineStateSubObjectTypeVertexShader
{
};

struct PipelineStateSubObjectTypePixelShader
{
};

struct PipelineStateSubObjectTypeGeometryShader
{
};

struct PipelineStateSubObjectTypeStreamOutput
{
    // Constructors
    constexpr PipelineStateSubObjectTypeStreamOutput(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeHullShader
{
};

struct PipelineStateSubObjectTypeDomainShader
{
};

struct PipelineStateSubObjectTypeAmplificationShader
{
};

struct PipelineStateSubObjectTypeMeshShader
{
};

struct PipelineStateSubObjectTypeComputeShader
{
};

struct PipelineStateSubObjectTypeIndexBufferStripCutValue
{
    // Constructors
    constexpr PipelineStateSubObjectTypeIndexBufferStripCutValue(IndexBufferStripCutValue value)
        : value(value) {}

};

struct PipelineStateSubObjectTypePrimitiveTopology
{
    // Constructors
    constexpr PipelineStateSubObjectTypePrimitiveTopology(PrimitiveTopologyType value)
        : value(value) {}

};

struct PipelineStateSubObjectTypeInputLayout
{
    // Constructors
    constexpr PipelineStateSubObjectTypeInputLayout(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeBlend
{
    // Constructors
    constexpr PipelineStateSubObjectTypeBlend(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeDepthStencil
{
    // Constructors
    constexpr PipelineStateSubObjectTypeDepthStencil(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeDepthStencil1
{
    // Constructors
    constexpr PipelineStateSubObjectTypeDepthStencil1(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeDepthStencil2
{
    // Constructors
    constexpr PipelineStateSubObjectTypeDepthStencil2(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeDepthStencilFormat
{
    // Constructors
    constexpr PipelineStateSubObjectTypeDepthStencilFormat(Format format)
        : format(format) {}

};

struct PipelineStateSubObjectTypeRasterizer
{
    // Constructors
    constexpr PipelineStateSubObjectTypeRasterizer(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeRasterizer1
{
    // Constructors
    constexpr PipelineStateSubObjectTypeRasterizer1(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeRasterizer2
{
    // Constructors
    constexpr PipelineStateSubObjectTypeRasterizer2(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeRenderTargetFormats
{
    // Constructors
    constexpr PipelineStateSubObjectTypeRenderTargetFormats(std::vector<Format> formats)
        : formats(formats) {}

};

struct PipelineStateSubObjectTypeSampleDescription
{
    // Constructors
    constexpr PipelineStateSubObjectTypeSampleDescription(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeSampleMask
{
    // Constructors
    constexpr PipelineStateSubObjectTypeSampleMask(uint32_t value)
        : value(value) {}

};

struct PipelineStateSubObjectTypeNodeMask
{
    // Constructors
    constexpr PipelineStateSubObjectTypeNodeMask(uint32_t value)
        : value(value) {}

};

struct PipelineStateStreamFlags
{
    // Constructors
    constexpr PipelineStateStreamFlags(PipelineStateFlags flags)
        : flags(flags) {}

};

struct PipelineStateSubObjectTypeCachedPipelineState
{
    // Constructors
    constexpr PipelineStateSubObjectTypeCachedPipelineState(in description)
        : description(description) {}

};

struct PipelineStateSubObjectTypeViewInstancing
{
    // Constructors
    constexpr PipelineStateSubObjectTypeViewInstancing(in description)
        : description(description) {}

};


} // namespace Vortice::Direct3D12

#endif // VORTICE_VORTICE_DIRECT3D12_PIPELINESTATESTREAMSUBOBJECT_H
