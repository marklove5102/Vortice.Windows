// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VIEWINSTANCELOCATION_H
#define VORTICE_DIRECT3D12_VIEWINSTANCELOCATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIEWINSTANCELOCATION_H
#define VORTICE_VORTICE_VIEWINSTANCELOCATION_H

#include <cstdint>

namespace Vortice {

struct ViewInstanceLocation
{
public:
    constexpr ViewInstanceLocation(uint32_t viewportArrayIndex, uint32_t renderTargetArrayIndex)
    ViewportArrayIndex = viewportArrayIndex;
        RenderTargetArrayIndex = renderTargetArrayIndex;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIEWINSTANCELOCATION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VIEWINSTANCELOCATION_H
