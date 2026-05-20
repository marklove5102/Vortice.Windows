// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIDEVICE1_H
#define VORTICE_IDXGIDEVICE1_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIDevice1
        {
            public uint MaximumFrameLatency
            {
                get
                {
                    GetMaximumFrameLatency(out uint latency).CheckError();
                    return latency{};
                }
                set
                {
                    SetMaximumFrameLatency(value).CheckError();
                }
            }
        }


    }
}

#endif // VORTICE_IDXGIDEVICE1_H