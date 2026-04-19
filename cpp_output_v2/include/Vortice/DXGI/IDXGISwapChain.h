// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGISWAPCHAIN_H
#define VORTICE_DXGI_IDXGISWAPCHAIN_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGISWAPCHAIN_H
#define VORTICE_VORTICE_IDXGISWAPCHAIN_H

#include <cstdint>

namespace Vortice {

class IDXGISwapChain
{
public:
    ~IDXGISwapChain() = default;

    bool get_IsFullscreen() const { GetFullscreenState(out RawBool fullscreen, out _).CheckError();
            return fullscreen; }

    IDXGIOutput GetContainingOutput() { GetContainingOutput(out IDXGIOutput output).CheckError();
        return output; }

    HRESULT ResizeBuffers() { return ResizeBuffers(bufferCount, width, height, newFormat, SwapChainFlags.None); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGISWAPCHAIN_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGISWAPCHAIN_H
