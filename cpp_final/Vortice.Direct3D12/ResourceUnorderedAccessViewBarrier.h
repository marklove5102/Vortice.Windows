// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCEUNORDEREDACCESSVIEWBARRIER_H
#define VORTICE_RESOURCEUNORDEREDACCESSVIEWBARRIER_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ResourceUnorderedAccessViewBarrier
        {
                                public ResourceUnorderedAccessViewBarrier(const std::optional<ID3D12Resource>& resource)
        {
                ResourcePointer = resource != nullptr ? resource.NativePointer : IntPtr.Zero;
            }
        }


    }
}

#endif // VORTICE_RESOURCEUNORDEREDACCESSVIEWBARRIER_H