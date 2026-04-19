// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCEALIASINGBARRIER_H
#define VORTICE_RESOURCEALIASINGBARRIER_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ResourceAliasingBarrier
        {
                                    public ResourceAliasingBarrier(const std::optional<ID3D12Resource>& resourceBefore, const std::optional<ID3D12Resource>& resourceAfter)
        {
                ResourceBeforePointer = resourceBefore != nullptr ? resourceBefore.NativePointer : IntPtr.Zero;
                ResourceAfterPointer = resourceAfter != nullptr ? resourceAfter.NativePointer : IntPtr.Zero;
            }
        }


    }
}

#endif // VORTICE_RESOURCEALIASINGBARRIER_H