// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_GRAPHICSPIPELINESTATEDESCRIPTION_H
#define VORTICE_DIRECT3D12_GRAPHICSPIPELINESTATEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GRAPHICSPIPELINESTATEDESCRIPTION_H
#define VORTICE_VORTICE_GRAPHICSPIPELINESTATEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class GraphicsPipelineStateDescription
{
public:
    ~GraphicsPipelineStateDescription() = default;

    void* RootSignature;
    BlendDescription BlendState;
    uint32_t SampleMask;
    RasterizerDescription RasterizerState;
    DepthStencilDescription DepthStencilState;
    IndexBufferStripCutValue IBStripCutValue;
    PrimitiveTopologyType PrimitiveTopologyType;
    int32_t NumRenderTargets;
    Format RenderTargetFormats;
    Format DepthStencilFormat;
    SampleDescription SampleDescription;
    int32_t NodeMask;
    CachedPipelineState CachedPSO;
    PipelineStateFlags Flags;

    std::span<const uint8_t> VertexShader{};
    std::span<const uint8_t> PixelShader{};
    std::span<const uint8_t> DomainShader{};
    std::span<const uint8_t> HullShader{};
    std::span<const uint8_t> GeometryShader{};
    BlendDescription BlendState{};
    uint32_t SampleMask{};
    RasterizerDescription RasterizerState{};
    DepthStencilDescription DepthStencilState{};
    IndexBufferStripCutValue IndexBufferStripCutValue{};
    PrimitiveTopologyType PrimitiveTopologyType{};
    Format DepthStencilFormat{};
    SampleDescription SampleDescription{};
    int32_t NodeMask{};
    CachedPipelineState CachedPSO{};
    PipelineStateFlags Flags{};


private:
    Format __RenderTargetFormats1;
    Format __RenderTargetFormats2;
    Format __RenderTargetFormats3;
    Format __RenderTargetFormats4;
    Format __RenderTargetFormats5;
    Format __RenderTargetFormats6;
    Format __RenderTargetFormats7;
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GRAPHICSPIPELINESTATEDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* RootSignature;
    BlendDescription BlendState;
    uint32_t SampleMask;
    RasterizerDescription RasterizerState;
    DepthStencilDescription DepthStencilState;
    IndexBufferStripCutValue IBStripCutValue;
    PrimitiveTopologyType PrimitiveTopologyType;
    int32_t NumRenderTargets;
    Format RenderTargetFormats;
    Format DepthStencilFormat;
    SampleDescription SampleDescription;
    int32_t NodeMask;
    CachedPipelineState CachedPSO;
    PipelineStateFlags Flags;


private:
    Format __RenderTargetFormats1;
    Format __RenderTargetFormats2;
    Format __RenderTargetFormats3;
    Format __RenderTargetFormats4;
    Format __RenderTargetFormats5;
    Format __RenderTargetFormats6;
    Format __RenderTargetFormats7;
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_GRAPHICSPIPELINESTATEDESCRIPTION_H
