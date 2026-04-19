// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIDEVICE1_H
#define VORTICE_DXGI_IDXGIDEVICE1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIDEVICE1_H
#define VORTICE_VORTICE_IDXGIDEVICE1_H

#include <cstdint>

namespace Vortice {

class IDXGIDevice1
{
public:
    ~IDXGIDevice1() = default;

    uint32_t get_MaximumFrameLatency() const { GetMaximumFrameLatency(out uint latency).CheckError();
            return latency; }
    void set_MaximumFrameLatency(uint32_t value) { SetMaximumFrameLatency(value).CheckError(); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIDEVICE1_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIDEVICE1_H
