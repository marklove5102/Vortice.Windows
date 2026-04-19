// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORY7_H
#define VORTICE_IDXGIFACTORY7_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIFactory7
        {
            int32_t RegisterAdaptersChangedEvent(WaitHandle waitHandle)
        {
                return RegisterAdaptersChangedEvent(waitHandle.SafeWaitHandle.DangerousGetHandle());
            }
        }


    }
}

#endif // VORTICE_IDXGIFACTORY7_H