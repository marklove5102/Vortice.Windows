// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_POINTERINFO_H
#define VORTICE_DIRECTX_POINTERINFO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_POINTERINFO_H
#define VORTICE_VORTICE_POINTERINFO_H

#include <cstdint>

namespace Vortice {

struct PointerInfo
{
public:
    PointerInputType pointerType;
    uint32_t PointerId;
    uint32_t FrameId;
    PointerFlags PointerFlags;
    intptr_t SourceDevice;
    intptr_t HwndTarget;
    Int2 PixelLocation;
    Int2 HimetricLocation;
    Int2 PixelLocationRaw;
    Int2 HimetricLocationRaw;
    uint32_t Time;
    uint32_t HistoryCount;
    int32_t InputData;
    uint32_t KeyStates;
    uint64_t PerformanceCount;
    PointerButtonChangeType ButtonChangeType;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_POINTERINFO_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_POINTERINFO_H
