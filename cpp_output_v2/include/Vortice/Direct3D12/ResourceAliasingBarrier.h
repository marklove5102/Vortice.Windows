// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCEALIASINGBARRIER_H
#define VORTICE_DIRECT3D12_RESOURCEALIASINGBARRIER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCEALIASINGBARRIER_H
#define VORTICE_VORTICE_RESOURCEALIASINGBARRIER_H

#include <cstdint>

namespace Vortice {

struct ResourceAliasingBarrier
{
public:
    constexpr ResourceAliasingBarrier(ID3D12Resource resourceBefore, ID3D12Resource resourceAfter)
    ResourceBeforePointer = resourceBefore != nullptr ? resourceBefore.NativePointer : IntPtr.Zero;
        ResourceAfterPointer = resourceAfter != nullptr ? resourceAfter.NativePointer : IntPtr.Zero;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCEALIASINGBARRIER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCEALIASINGBARRIER_H
