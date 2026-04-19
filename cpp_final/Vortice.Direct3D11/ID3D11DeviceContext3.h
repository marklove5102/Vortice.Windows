// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICECONTEXT3_H
#define VORTICE_ID3D11DEVICECONTEXT3_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        class ID3D11DeviceContext3
        {
            void Flush1(ContextType contextType, WaitHandle waitHandle)
        {
                Flush1(contextType, waitHandle.SafeWaitHandle.DangerousGetHandle());
            }
        }


    }
}

#endif // VORTICE_ID3D11DEVICECONTEXT3_H