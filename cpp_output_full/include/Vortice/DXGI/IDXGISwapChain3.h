// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGISWAPCHAIN3_H
#define VORTICE_DXGI_IDXGISWAPCHAIN3_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGISWAPCHAIN3_H
#define VORTICE_VORTICE_IDXGISWAPCHAIN3_H

#include <cstdint>

namespace Vortice {

class IDXGISwapChain3
{
public:
    ~IDXGISwapChain3() = default;

    HRESULT ResizeBuffers1() { return ResizeBuffers1(bufferCount, width, height, format, swapChainFlags, nullptr, nullptr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGISWAPCHAIN3_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGISWAPCHAIN3_H
