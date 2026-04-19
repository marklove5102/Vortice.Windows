// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H
#define VORTICE_DIRECT3D12_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H
#define VORTICE_VORTICE_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H

#include <cstdint>

namespace Vortice {

struct RenderPassEndingAccessResolveSubresourceParameters
{
public:
    constexpr RenderPassEndingAccessResolveSubresourceParameters(uint32_t srcSubresource, uint32_t dstSubresource, uint32_t dstX, uint32_t dstY, RawRect srcRect)
    SrcSubresource = srcSubresource;
        DstSubresource = dstSubresource;
        DstX = dstX;
        DstY = dstY;
        SrcRect = srcRect;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERPASSENDINGACCESSRESOLVESUBRESOURCEPARAMETERS_H
