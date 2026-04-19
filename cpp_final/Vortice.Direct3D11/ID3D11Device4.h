// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICE4_H
#define VORTICE_ID3D11DEVICE4_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        class ID3D11Device4
        {
            int32_t RegisterDeviceRemovedEvent(WaitHandle waitHandle)
        {
                return RegisterDeviceRemovedEvent(waitHandle.SafeWaitHandle.DangerousGetHandle());
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICE4_H