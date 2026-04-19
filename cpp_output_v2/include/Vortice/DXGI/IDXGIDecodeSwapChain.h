// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIDECODESWAPCHAIN_H
#define VORTICE_DXGI_IDXGIDECODESWAPCHAIN_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIDECODESWAPCHAIN_H
#define VORTICE_VORTICE_IDXGIDECODESWAPCHAIN_H

#include <cstdint>

namespace Vortice {

class IDXGIDecodeSwapChain
{
public:
    ~IDXGIDecodeSwapChain() = default;

    SizeI get_DestSize() const { GetDestSize(out uint width, out uint height);
            return new((int)width, (int)height); }
    void set_DestSize(SizeI value) { SetDestSize((uint)value.Width, (uint)value.Height); }

    HRESULT PresentBuffer() { return PresentBuffer(bufferToPresent, syncInterval, PresentFlags.None); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIDECODESWAPCHAIN_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIDECODESWAPCHAIN_H
