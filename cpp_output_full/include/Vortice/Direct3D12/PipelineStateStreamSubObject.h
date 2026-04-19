// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_PIPELINESTATESTREAMSUBOBJECT_H
#define VORTICE_DIRECT3D12_PIPELINESTATESTREAMSUBOBJECT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IPIPELINESTATESTREAMSUBOBJECT_H
#define VORTICE_VORTICE_IPIPELINESTATESTREAMSUBOBJECT_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) IPipelineStateStreamSubObject
{
public:
    virtual ~IPipelineStateStreamSubObject() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IPIPELINESTATESTREAMSUBOBJECT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ALIGNEDSUBOBJECTTYPE_H
#define VORTICE_VORTICE_ALIGNEDSUBOBJECTTYPE_H

#include <cstdint>

namespace Vortice {

struct AlignedSubObjectType
{
public:

private:
    PipelineStateSubObjectType _type;
    T _inner;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ALIGNEDSUBOBJECTTYPE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEROOTSIGNATURE_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEROOTSIGNATURE_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeRootSignature : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeRootSignature(ID3D12RootSignature rootSignature)
    Type = PipelineStateSubObjectType.RootSignature;
        RootSignature = rootSignature.NativePointer;
    constexpr PipelineStateSubObjectTypeRootSignature(ID3D12RootSignature rootSignature)
    return new PipelineStateSubObjectTypeRootSignature(rootSignature);
    const PipelineStateSubObjectType Type;
    const void* RootSignature;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEROOTSIGNATURE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEVERTEXSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEVERTEXSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeVertexShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeVertexShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeVertexShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEVERTEXSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEPIXELSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEPIXELSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypePixelShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypePixelShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypePixelShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEPIXELSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEGEOMETRYSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEGEOMETRYSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeGeometryShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeGeometryShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeGeometryShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEGEOMETRYSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESTREAMOUTPUT_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESTREAMOUTPUT_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeStreamOutput : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeStreamOutput(const StreamOutputDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.StreamOutput;
        _type._inner = new StreamOutputDescription.__Native();
        description.__MarshalTo(ref _type._inner);
    constexpr PipelineStateSubObjectTypeStreamOutput(const StreamOutputDescription& description)
    return new PipelineStateSubObjectTypeStreamOutput(description);

private:
    const AlignedSubObjectType<StreamOutputDescription.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESTREAMOUTPUT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEHULLSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEHULLSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeHullShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeHullShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeHullShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEHULLSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDOMAINSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDOMAINSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeDomainShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeDomainShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeDomainShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDOMAINSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEAMPLIFICATIONSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEAMPLIFICATIONSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeAmplificationShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeAmplificationShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeAmplificationShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEAMPLIFICATIONSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEMESHSHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEMESHSHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeMeshShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeMeshShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeMeshShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEMESHSHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPECOMPUTESHADER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPECOMPUTESHADER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeComputeShader : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeComputeShader(std::span<const uint8_t> byteCode)
    return new PipelineStateSubObjectTypeComputeShader(byteCode);

private:
    const AlignedSubObjectType<ShaderBytecode.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPECOMPUTESHADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEINDEXBUFFERSTRIPCUTVALUE_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEINDEXBUFFERSTRIPCUTVALUE_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeIndexBufferStripCutValue : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeIndexBufferStripCutValue(IndexBufferStripCutValue value)
    _pad = default;
        _type._type = PipelineStateSubObjectType.IndexBufferStripCutValue;
        _type._inner = value;
    constexpr PipelineStateSubObjectTypeIndexBufferStripCutValue(IndexBufferStripCutValue value)
    return new PipelineStateSubObjectTypeIndexBufferStripCutValue(value);

private:
    const AlignedSubObjectType<IndexBufferStripCutValue> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEINDEXBUFFERSTRIPCUTVALUE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEPRIMITIVETOPOLOGY_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEPRIMITIVETOPOLOGY_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypePrimitiveTopology : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypePrimitiveTopology(PrimitiveTopologyType value)
    _pad = default;
        _type._type = PipelineStateSubObjectType.PrimitiveTopology;
        _type._inner = value;
    constexpr PipelineStateSubObjectTypePrimitiveTopology(PrimitiveTopologyType value)
    return new PipelineStateSubObjectTypePrimitiveTopology(value);

private:
    const AlignedSubObjectType<PrimitiveTopologyType> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEPRIMITIVETOPOLOGY_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEINPUTLAYOUT_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEINPUTLAYOUT_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeInputLayout : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeInputLayout(const InputLayoutDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.InputLayout;
        _type._inner = new InputLayoutDescription.__Native();
        description.__MarshalTo(ref _type._inner);
    constexpr PipelineStateSubObjectTypeInputLayout(const InputLayoutDescription& description)
    return new PipelineStateSubObjectTypeInputLayout(description);

private:
    const AlignedSubObjectType<InputLayoutDescription.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEINPUTLAYOUT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEBLEND_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEBLEND_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeBlend : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeBlend(const BlendDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.Blend;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeBlend(const BlendDescription& description)
    return new PipelineStateSubObjectTypeBlend(description);

private:
    const AlignedSubObjectType<BlendDescription> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEBLEND_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeDepthStencil : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeDepthStencil(const DepthStencilDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.DepthStencil;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeDepthStencil(const DepthStencilDescription& description)
    return new PipelineStateSubObjectTypeDepthStencil(description);

private:
    const AlignedSubObjectType<DepthStencilDescription> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL1_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL1_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeDepthStencil1 : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeDepthStencil1(const DepthStencilDescription1& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.DepthStencil1;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeDepthStencil1(const DepthStencilDescription1& description)
    return new PipelineStateSubObjectTypeDepthStencil1(description);

private:
    const AlignedSubObjectType<DepthStencilDescription1> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL1_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL2_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL2_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeDepthStencil2 : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeDepthStencil2(const DepthStencilDescription2& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.DepthStencil2;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeDepthStencil2(const DepthStencilDescription2& description)
    return new(description);

private:
    const AlignedSubObjectType<DepthStencilDescription2> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCIL2_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCILFORMAT_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCILFORMAT_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeDepthStencilFormat : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeDepthStencilFormat(Format format)
    _pad = default;
        _type._type = PipelineStateSubObjectType.DepthStencilFormat;
        _type._inner = format;
    constexpr PipelineStateSubObjectTypeDepthStencilFormat(Format format)
    return new PipelineStateSubObjectTypeDepthStencilFormat(format);

private:
    const AlignedSubObjectType<Format> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEDEPTHSTENCILFORMAT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeRasterizer : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeRasterizer(const RasterizerDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.Rasterizer;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeRasterizer(const RasterizerDescription& description)
    return new PipelineStateSubObjectTypeRasterizer(description);

private:
    const AlignedSubObjectType<RasterizerDescription> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER1_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER1_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeRasterizer1 : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeRasterizer1(const RasterizerDescription1& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.Rasterizer1;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeRasterizer1(const RasterizerDescription1& description)
    return new PipelineStateSubObjectTypeRasterizer1(description);

private:
    const AlignedSubObjectType<RasterizerDescription1> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER1_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER2_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER2_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeRasterizer2 : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeRasterizer2(const RasterizerDescription2& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.Rasterizer2;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeRasterizer2(const RasterizerDescription2& description)
    return new(description);

private:
    const AlignedSubObjectType<RasterizerDescription2> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERASTERIZER2_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERENDERTARGETFORMATS_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERENDERTARGETFORMATS_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeRenderTargetFormats : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeRenderTargetFormats(std::vector<Format> formats)
    _pad = default;
        _type._type = PipelineStateSubObjectType.RenderTargetFormats;

        RtFormatArray description = new RtFormatArray(formats);
        _type._inner = new RtFormatArray.__Native();
        description.__MarshalTo(ref _type._inner);
    constexpr PipelineStateSubObjectTypeRenderTargetFormats(std::vector<Format> formats)
    return new PipelineStateSubObjectTypeRenderTargetFormats(formats);

private:
    const AlignedSubObjectType<RtFormatArray.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPERENDERTARGETFORMATS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESAMPLEDESCRIPTION_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESAMPLEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeSampleDescription : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeSampleDescription(const SampleDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.SampleDescription;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeSampleDescription(const SampleDescription& description)
    return new PipelineStateSubObjectTypeSampleDescription(description);

private:
    const AlignedSubObjectType<SampleDescription> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESAMPLEDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESAMPLEMASK_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESAMPLEMASK_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeSampleMask : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeSampleMask(uint32_t value)
    _pad = default;
        _type._type = PipelineStateSubObjectType.SampleMask;
        _type._inner = value;
    constexpr PipelineStateSubObjectTypeSampleMask(uint32_t value)
    return new PipelineStateSubObjectTypeSampleMask(value);

private:
    const AlignedSubObjectType<uint32_t> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPESAMPLEMASK_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPENODEMASK_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPENODEMASK_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeNodeMask : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeNodeMask(uint32_t value)
    _pad = default;
        _type._type = PipelineStateSubObjectType.NodeMask;
        _type._inner = value;
    constexpr PipelineStateSubObjectTypeNodeMask(uint32_t value)
    return new PipelineStateSubObjectTypeNodeMask(value);

private:
    const AlignedSubObjectType<uint32_t> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPENODEMASK_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESTREAMFLAGS_H
#define VORTICE_VORTICE_PIPELINESTATESTREAMFLAGS_H

#include <cstdint>

namespace Vortice {

struct PipelineStateStreamFlags : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateStreamFlags(PipelineStateFlags flags)
    _pad = default;
        _type._type = PipelineStateSubObjectType.Flags;
        _type._inner = flags;

private:
    const AlignedSubObjectType<PipelineStateFlags> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESTREAMFLAGS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPECACHEDPIPELINESTATE_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPECACHEDPIPELINESTATE_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeCachedPipelineState : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeCachedPipelineState(const CachedPipelineState& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.CachedPipelineStateObject;
        _type._inner = description;
    constexpr PipelineStateSubObjectTypeCachedPipelineState(const CachedPipelineState& description)
    return new PipelineStateSubObjectTypeCachedPipelineState(description);

private:
    const AlignedSubObjectType<CachedPipelineState> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPECACHEDPIPELINESTATE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEVIEWINSTANCING_H
#define VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEVIEWINSTANCING_H

#include <cstdint>

namespace Vortice {

struct PipelineStateSubObjectTypeViewInstancing : public IPipelineStateStreamSubObject
{
public:
    constexpr PipelineStateSubObjectTypeViewInstancing(const ViewInstancingDescription& description)
    _pad = default;
        _type._type = PipelineStateSubObjectType.ViewInstancing;
        _type._inner = new ViewInstancingDescription.__Native();
        description.__MarshalTo(ref _type._inner);
    constexpr PipelineStateSubObjectTypeViewInstancing(const ViewInstancingDescription& description)
    return new PipelineStateSubObjectTypeViewInstancing(description);

private:
    const AlignedSubObjectType<ViewInstancingDescription.__Native> _type;
    const PointerSize _pad;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIPELINESTATESUBOBJECTTYPEVIEWINSTANCING_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_PIPELINESTATESTREAMSUBOBJECT_H
