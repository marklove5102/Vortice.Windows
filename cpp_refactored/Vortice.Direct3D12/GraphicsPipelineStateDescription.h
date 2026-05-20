// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GRAPHICSPIPELINESTATEDESCRIPTION_H
#define VORTICE_GRAPHICSPIPELINESTATEDESCRIPTION_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        namespace Vortice.Direct3D12;

        class GraphicsPipelineStateDescription
        {
            private Format[]? _RTVFormats;

            std::optional<ID3D12RootSignature> m_rootSignature{};

            public ReadOnlyMemory<byte> VertexShader { get; set; }

            public ReadOnlyMemory<byte> PixelShader { get; set; }

            public ReadOnlyMemory<byte> DomainShader { get; set; }

            public ReadOnlyMemory<byte> HullShader { get; set; }

            public ReadOnlyMemory<byte> GeometryShader { get; set; }

            std::optional<StreamOutputDescription> m_streamOutput{};

            BlendDescription m_blendState{};

            uint32_t m_sampleMask{}; = uint.MaxValue;

            RasterizerDescription m_rasterizerState{};

            DepthStencilDescription m_depthStencilState{}; = DepthStencilDescription.Default;

            std::optional<InputLayoutDescription> m_inputLayout{};

            IndexBufferStripCutValue m_indexBufferStripCutValue{};

            PrimitiveTopologyType m_primitiveTopologyType{};

            public Format[] RenderTargetFormats
            {
                get => _RTVFormats ??= new Format{};
                set => _RTVFormats = value;
            }

            Format m_depthStencilFormat{};

            SampleDescription m_sampleDescription{}; = SampleDescription.Default;

            int32_t m_nodeMask{};

            CachedPipelineState m_cachedPSO{};

            PipelineStateFlags m_flags{};
            internal struct __Native
        {
                public: void* RootSignature{};
                public ShaderBytecode.__Native VertexShader{};
                public ShaderBytecode.__Native PixelShader{};
                public ShaderBytecode.__Native DomainShader{};
                public ShaderBytecode.__Native HullShader{};
                public ShaderBytecode.__Native GeometryShader{};
                public StreamOutputDescription.__Native StreamOutput{};
                public: BlendDescription BlendState{};
                public: uint32_t SampleMask{};
                public: RasterizerDescription RasterizerState{};
                public: DepthStencilDescription DepthStencilState{};
                public InputLayoutDescription.__Native InputLayout{};
                public: IndexBufferStripCutValue IBStripCutValue{};
                public: PrimitiveTopologyType PrimitiveTopologyType{};
                public: int32_t NumRenderTargets{};
                public: Format RenderTargetFormats{};
                private: Format __RenderTargetFormats1{};
                private: Format __RenderTargetFormats2{};
                private: Format __RenderTargetFormats3{};
                private: Format __RenderTargetFormats4{};
                private: Format __RenderTargetFormats5{};
                private: Format __RenderTargetFormats6{};
                private: Format __RenderTargetFormats7{};
                public: Format DepthStencilFormat{};
                public: SampleDescription SampleDescription{};
                public: int32_t NodeMask{};
                public: CachedPipelineState CachedPSO{};
                public: PipelineStateFlags Flags{};
            }

            void __MarshalFree(__Native& @ref)
        {
                GC.KeepAlive(RootSignature);
                if (@ref.VertexShader.BytecodeLength > 0)
                    Free(@ref.VertexShader.pShaderBytecode);
                if (@ref.PixelShader.BytecodeLength > 0)
                    Free(@ref.PixelShader.pShaderBytecode);
                if (@ref.DomainShader.BytecodeLength > 0)
                    Free(@ref.DomainShader.pShaderBytecode);
                if (@ref.HullShader.BytecodeLength > 0)
                    Free(@ref.HullShader.pShaderBytecode);
                if (@ref.GeometryShader.BytecodeLength > 0)
                    Free(@ref.GeometryShader.pShaderBytecode);
                StreamOutput?.__MarshalFree(ref @ref.StreamOutput);
                BlendState = @ref.BlendState;
                InputLayout?.__MarshalFree(ref @ref.InputLayout);
                @ref.CachedPSO = CachedPSO;
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.RootSignature = MarshallingHelpers.ToCallbackPtr<ID3D12RootSignature>(RootSignature);
                if (VertexShader.Length > 0)
                {
                    @ref.VertexShader.pShaderBytecode = AllocWithData(VertexShader.Span);
                    @ref.VertexShader.BytecodeLength = (nuint)VertexShader.Length;
                }
                if (PixelShader.Length > 0)
                {
                    @ref.PixelShader.pShaderBytecode = AllocWithData(PixelShader.Span);
                    @ref.PixelShader.BytecodeLength = (nuint)PixelShader.Length;
                }
                if (DomainShader.Length > 0)
                {
                    @ref.DomainShader.pShaderBytecode = AllocWithData(DomainShader.Span);
                    @ref.DomainShader.BytecodeLength = (nuint)DomainShader.Length;
                }
                if (HullShader.Length > 0)
                {
                    @ref.HullShader.pShaderBytecode = AllocWithData(HullShader.Span);
                    @ref.HullShader.BytecodeLength = (nuint)HullShader.Length;
                }
                if (GeometryShader.Length > 0)
                {
                    @ref.GeometryShader.pShaderBytecode = AllocWithData(GeometryShader.Span);
                    @ref.GeometryShader.BytecodeLength = (nuint)GeometryShader.Length;
                }
                StreamOutput?.__MarshalTo(ref @ref.StreamOutput);
                @ref.BlendState = BlendState;
                @ref.SampleMask = SampleMask;
                @ref.RasterizerState = RasterizerState;
                @ref.DepthStencilState = DepthStencilState;
                InputLayout?.__MarshalTo(ref @ref.InputLayout);
                @ref.IBStripCutValue = IndexBufferStripCutValue;
                @ref.PrimitiveTopologyType = PrimitiveTopologyType;
                if (RenderTargetFormats.Length > 0)
                {
                    @ref.NumRenderTargets = Math.Min(RenderTargetFormats.Length, D3D12.SimultaneousRenderTargetCount);
                    fixed (void* renderTargetFormatsPtr = &RenderTargetFormats)
                    {
                        MemoryHelpers.CopyMemory(
                            (IntPtr)Unsafe.AsPointer(ref @ref.RenderTargetFormats),
                            (IntPtr)renderTargetFormatsPtr,
                            @ref.NumRenderTargets * sizeof(Format));
                    }
                }
                else
                {
                    @ref.NumRenderTargets = 0;
                }

                @ref.DepthStencilFormat = DepthStencilFormat;
                @ref.SampleDescription = SampleDescription;
                @ref.NodeMask = NodeMask;
                @ref.CachedPSO = CachedPSO;
                @ref.Flags = Flags;
            }
        }


    }
}

#endif // VORTICE_GRAPHICSPIPELINESTATEDESCRIPTION_H