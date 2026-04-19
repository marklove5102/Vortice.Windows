// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGISWAPCHAIN2_H
#define VORTICE_DXGI_IDXGISWAPCHAIN2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGISWAPCHAIN2_H
#define VORTICE_VORTICE_IDXGISWAPCHAIN2_H

#include <cstdint>

namespace Vortice {

class IDXGISwapChain2
{
public:
    ~IDXGISwapChain2() = default;

    SizeI get_SourceSize() const { GetSourceSize(out uint width, out uint height);
            return new((int)width, (int)height); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGISWAPCHAIN2_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGISWAPCHAIN2_H
