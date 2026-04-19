// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERPASSDEPTHSTENCILDESCRIPTION_H
#define VORTICE_DIRECT3D12_RENDERPASSDEPTHSTENCILDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERPASSDEPTHSTENCILDESCRIPTION_H
#define VORTICE_VORTICE_RENDERPASSDEPTHSTENCILDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RenderPassDepthStencilDescription
{
public:
    constexpr RenderPassDepthStencilDescription(CpuDescriptorHandle cpuDescriptor, RenderPassBeginningAccess depthBeginningAccess, RenderPassEndingAccess depthEndingAccess)
    CpuDescriptor = cpuDescriptor;
        DepthBeginningAccess = depthBeginningAccess;
        StencilBeginningAccess = new RenderPassBeginningAccess(RenderPassBeginningAccessType.NoAccess);
        DepthEndingAccess = depthEndingAccess;
        StencilEndingAccess = new RenderPassEndingAccess(RenderPassEndingAccessType.NoAccess);
    constexpr RenderPassDepthStencilDescription(CpuDescriptorHandle cpuDescriptor, RenderPassBeginningAccess depthBeginningAccess, RenderPassBeginningAccess stencilBeginningAccess, RenderPassEndingAccess depthEndingAccess, RenderPassEndingAccess stencilEndingAccess)
    CpuDescriptor = cpuDescriptor;
        DepthBeginningAccess = depthBeginningAccess;
        StencilBeginningAccess = stencilBeginningAccess;
        DepthEndingAccess = depthEndingAccess;
        StencilEndingAccess = stencilEndingAccess;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERPASSDEPTHSTENCILDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERPASSDEPTHSTENCILDESCRIPTION_H
