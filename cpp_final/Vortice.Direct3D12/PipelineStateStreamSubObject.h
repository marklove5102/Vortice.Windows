// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PIPELINESTATESTREAMSUBOBJECT_H
#define VORTICE_PIPELINESTATESTREAMSUBOBJECT_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        namespace Vortice.Direct3D12;

        class IPipelineStateStreamSubObject
        {
            PipelineStateSubObjectType Type { get; }
        }

        internal struct AlignedSubObjectType<T> where T : unmanaged
        {
            internal PipelineStateSubObjectType _type{};
            internal T _inner{};
        }

        [StructLayout(LayoutKind.Sequential)]
        public readonly struct PipelineStateSubObjectTypeRootSignature : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeRootSignature(rootSignature param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => Type;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeVertexShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeVertexShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeVertexShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeVertexShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.VertexShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypePixelShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypePixelShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypePixelShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypePixelShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.PixelShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeGeometryShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeGeometryShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeGeometryShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeGeometryShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.GeometryShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeStreamOutput : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeStreamOutput(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.StreamOutput;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeHullShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeHullShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeHullShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeHullShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.HullShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDomainShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeDomainShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeDomainShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeDomainShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DomainShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeAmplificationShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeAmplificationShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeAmplificationShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeAmplificationShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.AmplificationShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeMeshShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeMeshShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeMeshShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeMeshShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.MeshShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeComputeShader : public : IPipelineStateStreamSubObject
        {
            [FieldOffset(0)]
            internal const AlignedSubObjectType _type{};

            [FieldOffset(0)]
            internal const PointerSize _pad{};

            unsafe PipelineStateSubObjectTypeComputeShader(const span<const uint8_t>& byteCode)
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

            public static implicit operator PipelineStateSubObjectTypeComputeShader(const span<const uint8_t>& byteCode)
        {
                return new PipelineStateSubObjectTypeComputeShader(byteCode param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.ComputeShader;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeIndexBufferStripCutValue : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeIndexBufferStripCutValue(value param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.IndexBufferStripCutValue;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypePrimitiveTopology : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypePrimitiveTopology(value param) = 0;
            }
            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.PrimitiveTopology;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeInputLayout : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeInputLayout(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.InputLayout;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeBlend : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeBlend(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Blend;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencil : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeDepthStencil(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencil;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencil1 : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeDepthStencil1(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencil1;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencil2 : public : IPipelineStateStreamSubObject
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
                return new(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencil2;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeDepthStencilFormat : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeDepthStencilFormat(format param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.DepthStencilFormat;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRasterizer : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeRasterizer(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Rasterizer;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRasterizer1 : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeRasterizer1(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Rasterizer1;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRasterizer2 : public : IPipelineStateStreamSubObject
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
                return new(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.Rasterizer2;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeRenderTargetFormats : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeRenderTargetFormats(formats param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.RenderTargetFormats;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeSampleDescription : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeSampleDescription(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.SampleDescription;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeSampleMask : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeSampleMask(value param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.SampleMask;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeNodeMask : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeNodeMask(value param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.NodeMask;
        }

        [StructLayout(LayoutKind.Explicit)]
        struct PipelineStateStreamFlags : public : IPipelineStateStreamSubObject
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
        public readonly struct PipelineStateSubObjectTypeCachedPipelineState : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeCachedPipelineState(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.CachedPipelineStateObject;
        }

        [StructLayout(LayoutKind.Explicit)]
        public readonly struct PipelineStateSubObjectTypeViewInstancing : public : IPipelineStateStreamSubObject
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
                return new PipelineStateSubObjectTypeViewInstancing(description param) = 0;
            }

            PipelineStateSubObjectType IPipelineStateStreamSubObject.Type => PipelineStateSubObjectType.CachedPipelineStateObject;
        }


    }
}

#endif // VORTICE_PIPELINESTATESTREAMSUBOBJECT_H