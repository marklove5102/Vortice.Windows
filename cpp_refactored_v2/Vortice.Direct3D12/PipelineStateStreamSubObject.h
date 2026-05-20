// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PIPELINESTATESTREAMSUBOBJECT_H
#define VORTICE_PIPELINESTATESTREAMSUBOBJECT_H

#include <cstdint>
#include <vector>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        namespace Vortice.Direct3D12;
        publicclass IPipelineStateStreamSubObject
        {
            PipelineStateSubObjectType Type { get; }
        }
        internal struct AlignedSubObjectType<T> where T : unmanaged
        {
            internal PipelineStateSubObjectType _type{};
            internal T _inner{};
        }
        [StructLayout(LayoutKind.Sequential)]
        public readonly struct PipelineStateSubObjectTypeRootSignature : : IPipelineStateStreamSubObject
        {
            public: const PipelineStateSubObjectType Type{};
            public: const void* RootSignature{};
            public PipelineStateSubObjectTypeRootSignature(ID3D12RootSignature rootSignature)
                {
                Type = PipelineStateSubObjectType.RootSignature;
                RootSignature = rootSignature.NativePointer;
            }
            public static implicit operator PipelineStateSubObjectTypeRootSignature(ID3D12RootSignature rootSignature)
                {
                return new PipelineStateSubObjectTypeRootSignature(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => Type;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeVertexShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeVertexShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.VertexShader;
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeVertexShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeVertexShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.VertexShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypePixelShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypePixelShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.PixelShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypePixelShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypePixelShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.PixelShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeGeometryShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeGeometryShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.GeometryShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeGeometryShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeGeometryShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.GeometryShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeStreamOutput : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeStreamOutput(const StreamOutputDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.StreamOutput;
                _type._inner = new StreamOutputDescription.__Native();
                description.__MarshalTo(ref _type._inner);
            }
            public static implicit operator PipelineStateSubObjectTypeStreamOutput(const StreamOutputDescription& description)
                {
                return new PipelineStateSubObjectTypeStreamOutput(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.StreamOutput;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeHullShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeHullShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.HullShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeHullShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeHullShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.HullShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDomainShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeDomainShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.DomainShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeDomainShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeDomainShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DomainShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeAmplificationShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeAmplificationShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.AmplificationShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeAmplificationShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeAmplificationShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.AmplificationShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeMeshShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeMeshShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.MeshShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeMeshShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeMeshShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.MeshShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeComputeShader : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            publicunsafe PipelineStateSubObjectTypeComputeShader(const std::span<const uint8_t>& byteCode)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.ComputeShader;
                _type._inner = new ShaderBytecode.__Native();
                fixed (byte* sourcePtr = byteCode)
                {
                    _type._inner = new ShaderBytecode.__Native
                    {
                        pShaderBytecode = sourcePtr,
                        BytecodeLength = (nuint)byteCode.Length
                    };
                }
            }
            public static implicit operator PipelineStateSubObjectTypeComputeShader(const std::span<const uint8_t>& byteCode)
                {
                return new PipelineStateSubObjectTypeComputeShader(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.ComputeShader;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeIndexBufferStripCutValue : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeIndexBufferStripCutValue(IndexBufferStripCutValue value)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.IndexBufferStripCutValue;
                _type._inner = value;
            }
            public static implicit operator PipelineStateSubObjectTypeIndexBufferStripCutValue(IndexBufferStripCutValue value)
                {
                return new PipelineStateSubObjectTypeIndexBufferStripCutValue(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.IndexBufferStripCutValue;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypePrimitiveTopology : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypePrimitiveTopology(PrimitiveTopologyType value)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.PrimitiveTopology;
                _type._inner = value;
            }
            public static implicit operator PipelineStateSubObjectTypePrimitiveTopology(PrimitiveTopologyType value)
                {
                return new PipelineStateSubObjectTypePrimitiveTopology(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.PrimitiveTopology;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeInputLayout : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeInputLayout(const InputLayoutDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.InputLayout;
                _type._inner = new InputLayoutDescription.__Native();
                description.__MarshalTo(ref _type._inner);
            }
            public static implicit operator PipelineStateSubObjectTypeInputLayout(const InputLayoutDescription& description)
                {
                return new PipelineStateSubObjectTypeInputLayout(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.InputLayout;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeBlend : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeBlend(const BlendDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.Blend;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeBlend(const BlendDescription& description)
                {
                return new PipelineStateSubObjectTypeBlend(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Blend;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencil : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeDepthStencil(const DepthStencilDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.DepthStencil;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeDepthStencil(const DepthStencilDescription& description)
                {
                return new PipelineStateSubObjectTypeDepthStencil(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencil;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencil1 : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeDepthStencil1(const DepthStencilDescription1& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.DepthStencil1;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeDepthStencil1(const DepthStencilDescription1& description)
                {
                return new PipelineStateSubObjectTypeDepthStencil1(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencil1;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencil2 : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeDepthStencil2(const DepthStencilDescription2& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.DepthStencil2;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeDepthStencil2(const DepthStencilDescription2& description)
                {
                return new(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencil2;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencilFormat : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeDepthStencilFormat(Format format)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.DepthStencilFormat;
                _type._inner = format;
            }
            public static implicit operator PipelineStateSubObjectTypeDepthStencilFormat(Format format)
                {
                return new PipelineStateSubObjectTypeDepthStencilFormat(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencilFormat;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRasterizer : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeRasterizer(const RasterizerDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.Rasterizer;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeRasterizer(const RasterizerDescription& description)
                {
                return new PipelineStateSubObjectTypeRasterizer(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Rasterizer;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRasterizer1 : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeRasterizer1(const RasterizerDescription1& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.Rasterizer1;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeRasterizer1(const RasterizerDescription1& description)
                {
                return new PipelineStateSubObjectTypeRasterizer1(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Rasterizer1;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRasterizer2 : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeRasterizer2(const RasterizerDescription2& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.Rasterizer2;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeRasterizer2(const RasterizerDescription2& description)
                {
                return new(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Rasterizer2;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRenderTargetFormats : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeRenderTargetFormats(const std::vector<Format>& formats)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.RenderTargetFormats;
                RtFormatArray description{};
                _type._inner = new RtFormatArray.__Native();
                description.__MarshalTo(ref _type._inner);
            }
            public static implicit operator PipelineStateSubObjectTypeRenderTargetFormats(const std::vector<Format>& formats)
                {
                return new PipelineStateSubObjectTypeRenderTargetFormats(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.RenderTargetFormats;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeSampleDescription : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeSampleDescription(const SampleDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.SampleDescription;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeSampleDescription(const SampleDescription& description)
                {
                return new PipelineStateSubObjectTypeSampleDescription(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.SampleDescription;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeSampleMask : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeSampleMask(uint32_t value)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.SampleMask;
                _type._inner = value;
            }
            public static implicit operator PipelineStateSubObjectTypeSampleMask(uint32_t value)
                {
                return new PipelineStateSubObjectTypeSampleMask(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.SampleMask;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeNodeMask : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeNodeMask(uint32_t value)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.NodeMask;
                _type._inner = value;
            }
            public static implicit operator PipelineStateSubObjectTypeNodeMask(uint32_t value)
                {
                return new PipelineStateSubObjectTypeNodeMask(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.NodeMask;
        }
        [StructLayout(LayoutKind.Explicit)]
        publicstruct PipelineStateStreamFlags : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateStreamFlags(PipelineStateFlags flags) : this()
            {
                _pad = default;
                _type._type = PipelineStateSubObjectType.Flags;
                _type._inner = flags;
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Flags;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeCachedPipelineState : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeCachedPipelineState(const CachedPipelineState& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.CachedPipelineStateObject;
                _type._inner = description;
            }
            public static implicit operator PipelineStateSubObjectTypeCachedPipelineState(const CachedPipelineState& description)
                {
                return new PipelineStateSubObjectTypeCachedPipelineState(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.CachedPipelineStateObject;
        }
        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeViewInstancing : : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};
            [FieldOffset(0)]
            internal const PointerSize _pad{};
            public PipelineStateSubObjectTypeViewInstancing(const ViewInstancingDescription& description)
                {
                _pad = default;
                _type._type = PipelineStateSubObjectType.ViewInstancing;
                _type._inner = new ViewInstancingDescription.__Native();
                description.__MarshalTo(ref _type._inner);
            }
            public static implicit operator PipelineStateSubObjectTypeViewInstancing(const ViewInstancingDescription& description)
                {
                return new PipelineStateSubObjectTypeViewInstancing(void);
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.CachedPipelineStateObject;
        }

    }
}

#endif // VORTICE_PIPELINESTATESTREAMSUBOBJECT_H