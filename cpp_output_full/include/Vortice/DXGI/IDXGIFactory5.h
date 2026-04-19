// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIFACTORY5_H
#define VORTICE_DXGI_IDXGIFACTORY5_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIFACTORY5_H
#define VORTICE_VORTICE_IDXGIFACTORY5_H

#include <cstdint>

namespace Vortice {

class IDXGIFactory5
{
public:
    ~IDXGIFactory5() = default;

    RawBool get_PresentAllowTearing() const { RawBool allowTearing;
            CheckFeatureSupport(Feature.PresentAllowTearing, &allowTearing, (uint)sizeof(RawBool));
            return allowTearing; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIFACTORY5_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIFACTORY5_H
