// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCEUNORDEREDACCESSVIEWBARRIER_H
#define VORTICE_DIRECT3D12_RESOURCEUNORDEREDACCESSVIEWBARRIER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCEUNORDEREDACCESSVIEWBARRIER_H
#define VORTICE_VORTICE_RESOURCEUNORDEREDACCESSVIEWBARRIER_H

#include <cstdint>

namespace Vortice {

struct ResourceUnorderedAccessViewBarrier
{
public:
    constexpr ResourceUnorderedAccessViewBarrier(ID3D12Resource resource)
    ResourcePointer = resource != nullptr ? resource.NativePointer : IntPtr.Zero;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCEUNORDEREDACCESSVIEWBARRIER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCEUNORDEREDACCESSVIEWBARRIER_H
