// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORY2_H
#define VORTICE_IDXGIFACTORY2_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIFactory2
        {
            int32_t RegisterOcclusionStatusEvent(WaitHandle waitHandle)
        {
                return RegisterOcclusionStatusEvent(waitHandle.SafeWaitHandle.DangerousGetHandle());
            }

            int32_t RegisterStereoStatusEvent(WaitHandle waitHandle)
        {
                return RegisterStereoStatusEvent(waitHandle.SafeWaitHandle.DangerousGetHandle());
            }
        }


    }
}

#endif // VORTICE_IDXGIFACTORY2_H