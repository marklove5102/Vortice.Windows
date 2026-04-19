// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIFACTORY7_H
#define VORTICE_DXGI_IDXGIFACTORY7_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIFACTORY7_H
#define VORTICE_VORTICE_IDXGIFACTORY7_H

#include <cstdint>

namespace Vortice {

class IDXGIFactory7
{
public:
    ~IDXGIFactory7() = default;

    int32_t RegisterAdaptersChangedEvent() { return RegisterAdaptersChangedEvent(waitHandle.SafeWaitHandle.DangerousGetHandle()); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIFACTORY7_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIFACTORY7_H
