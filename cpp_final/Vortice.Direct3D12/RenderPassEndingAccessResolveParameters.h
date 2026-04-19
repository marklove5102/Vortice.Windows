// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H
#define VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        namespace Vortice.Direct3D12;

        class RenderPassEndingAccessResolveParameters
        {
            private: RenderPassEndingAccessResolveSubresourceParameters _subresourceParameters{};

            std::optional<ID3D12Resource> m_srcResource{};

            std::optional<ID3D12Resource> m_dstResource{};

            int32_t m_subresourceCount{};

            public RenderPassEndingAccessResolveSubresourceParameters SubresourceParameters
            {
                get => _subresourceParameters;
                set => _subresourceParameters = value;
            }

            Format m_format{};
            ResolveMode m_resolveMode{};
            bool m_preserveResolveSource{};
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

            void __MarshalFree(__Native& @ref)
        {
                GC.KeepAlive(SrcResource);
                GC.KeepAlive(DstResource);
            }

            void __MarshalFrom(__Native& @ref)
        {
                if (@ref.pSrcResource != IntPtr.Zero)
                {
                    SrcResource = new ID3D12Resource(@ref::pSrcResource param) = 0;
                }

                if (@ref.pDstResource != IntPtr.Zero)
                {
                    DstResource = new ID3D12Resource(@ref::pDstResource param) = 0;
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

            void __MarshalTo(__Native& @ref)
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