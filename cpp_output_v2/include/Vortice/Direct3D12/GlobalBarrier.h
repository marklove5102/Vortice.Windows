// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_GLOBALBARRIER_H
#define VORTICE_DIRECT3D12_GLOBALBARRIER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GLOBALBARRIER_H
#define VORTICE_VORTICE_GLOBALBARRIER_H

#include <cstdint>

namespace Vortice {

struct GlobalBarrier
{
public:
    constexpr GlobalBarrier(BarrierSync syncBefore, BarrierSync syncAfter, BarrierAccess accessBefore, BarrierAccess accessAfter)
    SyncBefore = syncBefore;
        SyncAfter = syncAfter;
        AccessBefore = accessBefore;
        AccessAfter = accessAfter;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GLOBALBARRIER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_GLOBALBARRIER_H
