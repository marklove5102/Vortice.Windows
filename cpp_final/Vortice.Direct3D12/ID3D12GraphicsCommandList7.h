// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST7_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST7_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12GraphicsCommandList7
        {
            void Barrier(BarrierGroup barrierGroup)
        {
                BarrierGroup.__Native native{};
                barrierGroup.__MarshalTo(ref native);
                Barrier(1, &native);
                barrierGroup.__MarshalFree(ref native);
            }

            void ResourceBarrier(const std::vector<BarrierGroup>& barrierGroups)
        {
                ResourceBarrier((uint)barrierGroups.Length, barrierGroups);
            }

            void ResourceBarrier(uint32_t numBarrierGroups, const std::vector<BarrierGroup>& barrierGroups)
        {
                Span barrierGroupsNative{};

                for (int32_t i{}; i < numBarrierGroups; ++i)
                {
                    barrierGroups.__MarshalTo(ref barrierGroupsNative);
                }

                fixed (BarrierGroup.__Native* pBarrierGroups = barrierGroupsNative)
                {
                    Barrier(numBarrierGroups, pBarrierGroups);
                }

                for (int32_t i{}; i < numBarrierGroups; ++i)
                {
                    barrierGroups.__MarshalFree(ref barrierGroupsNative);
                }
            }

            void ResourceBarrier(const span<BarrierGroup>& barrierGroups)
        {
                ResourceBarrier((uint)barrierGroups.Length, barrierGroups);
            }

            void ResourceBarrier(uint32_t numBarrierGroups, const span<BarrierGroup>& barrierGroups)
        {
                Span barrierGroupsNative{};

                for (int32_t i{}; i < numBarrierGroups; ++i)
                {
                    barrierGroups.__MarshalTo(ref barrierGroupsNative);
                }

                fixed (BarrierGroup.__Native* pBarrierGroups = barrierGroupsNative)
                {
                    Barrier(numBarrierGroups, pBarrierGroups);
                }

                for (int32_t i{}; i < numBarrierGroups; ++i)
                {
                    barrierGroups.__MarshalFree(ref barrierGroupsNative);
                }
            }
        }


    }
}

#endif // VORTICE_ID3D12GRAPHICSCOMMANDLIST7_H