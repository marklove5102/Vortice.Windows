// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST1_H
#define VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST1_H
#define VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST1_H

#include <cstdint>

namespace Vortice {

class ID3D12GraphicsCommandList1
{
public:
    ~ID3D12GraphicsCommandList1() = default;

    void ResolveSubresourceRegion() { ResolveSubresourceRegion_(
            dstResource, dstSubresource, dstX, dstY,
            srcResource, srcSubresource, nullptr,
            format, resolveMode); }

    void ResolveSubresourceRegion() { ResolveSubresourceRegion_(
            dstResource, dstSubresource, dstX, dstY,
            srcResource, srcSubresource, srcRect,
            format, resolveMode); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST1_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST1_H
