// Copyright (c) Contributors.

#ifndef VORTICE_GLOBALBARRIER_H
#define VORTICE_GLOBALBARRIER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct GlobalBarrier
        {
                                        public GlobalBarrier(BarrierSync syncBefore, BarrierSync syncAfter, BarrierAccess accessBefore, BarrierAccess accessAfter)
        {
                SyncBefore = syncBefore;
                SyncAfter = syncAfter;
                AccessBefore = accessBefore;
                AccessAfter = accessAfter;  
            }
        }


    }
}

#endif // VORTICE_GLOBALBARRIER_H