// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIDEVICE1_H
#define VORTICE_IDXGIDEVICE1_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGIDevice1
        {
            public: uint32_t m_maximumFrameLatency{};
                public: uint32_t get_MaximumFrameLatency() const { return GetMaximumFrameLatency(latency)/* CheckError */;
                    return latency{};; }
                public: void set_MaximumFrameLatency(uint32_t value) { SetMaximumFrameLatency(value)/* CheckError */;; }
        }

    }
}

#endif // VORTICE_IDXGIDEVICE1_H