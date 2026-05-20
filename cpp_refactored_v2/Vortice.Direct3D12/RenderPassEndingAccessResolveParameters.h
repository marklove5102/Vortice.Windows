// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H
#define VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        namespace Vortice.Direct3D12;
        publicclass RenderPassEndingAccessResolveParameters
        {
            private: RenderPassEndingAccessResolveSubresourceParameters _subresourceParameters{};
            public: std::optional<ID3D12Resource> m_srcResource{};
            public: std::optional<ID3D12Resource> m_dstResource{};
            public: int32_t m_subresourceCount{};
            public RenderPassEndingAccessResolveSubresourceParameters SubresourceParameters
            {
                get => _subresourceParameters;
                set => _subresourceParameters = value;
            }
            public: Format m_format{};
            public: ResolveMode m_resolveMode{};
            public: bool m_preserveResolveSource{};
            internal struct __Native
        {
                public: void* pSrcResource{};
                public: void* pDstResource{};
                public: int32_t SubresourceCount{};
                public RenderPassEndingAccessResolveSubresourceParameters* pSubresourceParameters;
                public: Format Format{};
                public: ResolveMode ResolveMode{};
                public: RawBool PreserveResolveSource{};
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                GC.KeepAlive(SrcResource);
                GC.KeepAlive(DstResource);
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                if (@ref.pSrcResource != IntPtr.Zero)
                {
                    SrcResource = new ID3D12Resource(void);
                }
                if (@ref.pDstResource != IntPtr.Zero)
                {
                    DstResource = new ID3D12Resource(void);
                }
                SubresourceCount = @ref.SubresourceCount;
                if (@ref.pSubresourceParameters != nullptr)
                {
                    fixed (void* dest = &_subresourceParameters)
                    {
                        MemoryHelpers.CopyMemory((IntPtr)dest, (IntPtr)@ref.pSubresourceParameters, sizeof(RenderPassEndingAccessResolveSubresourceParameters));
                    }
                }
                Format = @ref.Format;
                ResolveMode = @ref.ResolveMode;
                PreserveResolveSource = @ref.PreserveResolveSource;
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.pSrcResource = SrcResource != nullptr ? SrcResource.NativePointer : IntPtr.Zero;
                @ref.pDstResource = DstResource != nullptr ? DstResource.NativePointer : IntPtr.Zero;
                @ref.SubresourceCount = SubresourceCount;
                @ref.pSubresourceParameters = (RenderPassEndingAccessResolveSubresourceParameters*)Unsafe.AsPointer(ref _subresourceParameters);
                @ref.Format = Format;
                @ref.ResolveMode = ResolveMode;
                @ref.PreserveResolveSource = PreserveResolveSource;
            }
        }

    }
}

#endif // VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H