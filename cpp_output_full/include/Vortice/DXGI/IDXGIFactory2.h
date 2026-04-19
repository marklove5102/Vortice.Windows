// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIFACTORY2_H
#define VORTICE_DXGI_IDXGIFACTORY2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIFACTORY2_H
#define VORTICE_VORTICE_IDXGIFACTORY2_H

#include <cstdint>

namespace Vortice {

class IDXGIFactory2
{
public:
    ~IDXGIFactory2() = default;

    int32_t RegisterOcclusionStatusEvent() { return RegisterOcclusionStatusEvent(waitHandle.SafeWaitHandle.DangerousGetHandle()); }

    int32_t RegisterStereoStatusEvent() { return RegisterStereoStatusEvent(waitHandle.SafeWaitHandle.DangerousGetHandle()); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIFACTORY2_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIFACTORY2_H
