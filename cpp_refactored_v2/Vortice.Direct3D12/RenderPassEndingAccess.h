// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERPASSENDINGACCESS_H
#define VORTICE_RENDERPASSENDINGACCESS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {


        namespace Vortice.Direct3D12;
        publicstruct RenderPassEndingAccess
        {
                            public RenderPassEndingAccess(RenderPassEndingAccessType type)
                {
                Type = type;
                Resolve = default;
            }
                            public RenderPassEndingAccess(RenderPassEndingAccessResolveParameters resolve)
                {
                Type = RenderPassEndingAccessType.Resolve;
                Resolve = resolve;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = CharSet.Unicode)]
            internal struct __Native
        {
                public: RenderPassEndingAccessType Type{};
                public RenderPassEndingAccessResolveParameters.__Native Resolve{};
            }
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Type = Type;
                Resolve?.__MarshalTo(ref @ref.Resolve);
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                Type = @ref.Type;
                Resolve = new RenderPassEndingAccessResolveParameters(void);
                Resolve.__MarshalFrom(ref @ref.Resolve);
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                Resolve?.__MarshalFree(ref @ref.Resolve);
            }
        }

    }
}

#endif // VORTICE_RENDERPASSENDINGACCESS_H