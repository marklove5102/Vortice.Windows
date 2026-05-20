// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_COMPUTEPIPELINESTATEDESCRIPTION_H
#define VORTICE_COMPUTEPIPELINESTATEDESCRIPTION_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        namespace Vortice.Direct3D12;

        class ComputePipelineStateDescription
        {
            std::optional<ID3D12RootSignature> m_rootSignature{};

            public ReadOnlyMemory<byte> ComputeShader { get; set; }

            uint32_t m_nodeMask{};
            CachedPipelineState m_cachedPSO{};
            PipelineStateFlags m_flags{}; = PipelineStateFlags.None;
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* RootSignature{};
                public ShaderBytecode.__Native CS{};
                public: uint32_t NodeMask{};
                public: CachedPipelineState CachedPSO{};
                public: PipelineStateFlags Flags{};
            }

            void __MarshalFree(__Native& @ref)
        {
                GC.KeepAlive(RootSignature);
                Free(@ref.CS.pShaderBytecode);
                @ref.CachedPSO = CachedPSO;
            }

            void __MarshalTo(__Native& @ref)
        {
                @ref.RootSignature = RootSignature?.NativePointer ?? IntPtr.Zero;
                @ref.CS.pShaderBytecode = AllocWithData(ComputeShader.Span);
                @ref.CS.BytecodeLength = (nuint)ComputeShader.Length;
                @ref.NodeMask = NodeMask;
                @ref.CachedPSO = CachedPSO;
                @ref.Flags = Flags;
            }
        }


    }
}

#endif // VORTICE_COMPUTEPIPELINESTATEDESCRIPTION_H