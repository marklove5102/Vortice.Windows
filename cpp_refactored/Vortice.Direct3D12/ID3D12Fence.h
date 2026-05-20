// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12FENCE_H
#define VORTICE_ID3D12FENCE_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Fence
        {
            Result SetEventOnCompletion(uint64_t value)
        {
                return SetEventOnCompletion(value param, IntPtr::Zero param) = 0;
            }

            Result SetEventOnCompletion(uint64_t value, const std::optional<WaitHandle>& waitHandle)
        {
                if (waitHandle == nullptr)
                {
                    return SetEventOnCompletion(value param, IntPtr::Zero param) = 0;
                }
                else
                {
                    return SetEventOnCompletion(value, waitHandle!.SafeWaitHandle.DangerousGetHandle());
                }
            }
        }


    }
}

#endif // VORTICE_ID3D12FENCE_H