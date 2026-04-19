// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGISWAPCHAIN4_H
#define VORTICE_DXGI_IDXGISWAPCHAIN4_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGISWAPCHAIN4_H
#define VORTICE_VORTICE_IDXGISWAPCHAIN4_H

#include <cstdint>

namespace Vortice {

class IDXGISwapChain4
{
public:
    ~IDXGISwapChain4() = default;

    void SetHDRMetaData() { auto native = new HdrMetadataHdr10.__Native();
        data.__MarshalTo(ref native);
        SetHDRMetaData(type, (uint)sizeof(HdrMetadataHdr10.__Native), new IntPtr(&native));
        data.__MarshalFree(ref native); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGISWAPCHAIN4_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGISWAPCHAIN4_H
