// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCETRANSITIONBARRIER_H
#define VORTICE_RESOURCETRANSITIONBARRIER_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ResourceTransitionBarrier
        {
                                            public ResourceTransitionBarrier(ID3D12Resource resource, ResourceStates stateBefore, ResourceStates stateAfter, uint32_t subresource{};
                Subresource = subresource;
                StateBefore = stateBefore;
                StateAfter = stateAfter;
            }
        }


    }
}

#endif // VORTICE_RESOURCETRANSITIONBARRIER_H