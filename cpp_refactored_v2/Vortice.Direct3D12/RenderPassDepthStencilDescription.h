// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERPASSDEPTHSTENCILDESCRIPTION_H
#define VORTICE_RENDERPASSDEPTHSTENCILDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {


        namespace Vortice.Direct3D12;
        publicstruct RenderPassDepthStencilDescription
        {
                                    public RenderPassDepthStencilDescription(CpuDescriptorHandle cpuDescriptor, RenderPassBeginningAccess depthBeginningAccess, RenderPassEndingAccess depthEndingAccess)
                {
                CpuDescriptor = cpuDescriptor;
                DepthBeginningAccess = depthBeginningAccess;
                StencilBeginningAccess = new RenderPassBeginningAccess(void);
                DepthEndingAccess = depthEndingAccess;
                StencilEndingAccess = new RenderPassEndingAccess(void);
            }
                                            public RenderPassDepthStencilDescription(CpuDescriptorHandle cpuDescriptor, RenderPassBeginningAccess depthBeginningAccess, RenderPassBeginningAccess stencilBeginningAccess, RenderPassEndingAccess depthEndingAccess, RenderPassEndingAccess stencilEndingAccess)
                {
                CpuDescriptor = cpuDescriptor;
                DepthBeginningAccess = depthBeginningAccess;
                StencilBeginningAccess = stencilBeginningAccess;
                DepthEndingAccess = depthEndingAccess;
                StencilEndingAccess = stencilEndingAccess;
            }
        }

    }
}

#endif // VORTICE_RENDERPASSDEPTHSTENCILDESCRIPTION_H