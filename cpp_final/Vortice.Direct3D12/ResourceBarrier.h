// Copyright (c) Contributors.

#ifndef VORTICE_RESOURCEBARRIER_H
#define VORTICE_RESOURCEBARRIER_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct ResourceBarrier
        {
                        public: const ResourceBarrierType Type{};

                        public: const ResourceBarrierFlags Flags{};

            private: const Union _union{};

            ResourceTransitionBarrier get_Transition() const { return _union.Transition; }

            ResourceAliasingBarrier get_Aliasing() const { return _union.Aliasing; }

            ResourceUnorderedAccessViewBarrier get_UnorderedAccessView() const { return _union.UnorderedAccessView; }

                                public ResourceBarrier(ResourceTransitionBarrier transition, ResourceBarrierFlags flags{};
                Flags = flags;
                _union = new Union { Transition = transition };
            }

                            public ResourceBarrier(ResourceAliasingBarrier aliasing)
        {
                Type = ResourceBarrierType.Aliasing;
                Flags = ResourceBarrierFlags.None;
                _union = new Union { Aliasing = aliasing };
            }

                            public ResourceBarrier(ResourceUnorderedAccessViewBarrier unorderedAccessView)
        {
                Type = ResourceBarrierType.UnorderedAccessView;
                Flags = ResourceBarrierFlags.None;
                _union = new Union { UnorderedAccessView = unorderedAccessView };
            }

                                                static ResourceBarrier BarrierTransition(ID3D12Resource resource, ResourceStates stateBefore, ResourceStates stateAfter, uint32_t subresource{};
            }

                                    static ResourceBarrier BarrierAliasing(const std::optional<ID3D12Resource>& resourceBefore, const std::optional<ID3D12Resource>& resourceAfter)
        {
                return new ResourceBarrier(new ResourceAliasingBarrier(resourceBefore, resourceAfter));
            }

                                static ResourceBarrier BarrierUnorderedAccessView(const std::optional<ID3D12Resource>& resource)
        {
                return new ResourceBarrier(new ResourceUnorderedAccessViewBarrier(resource));
            }
            [StructLayout(LayoutKind.Explicit, Pack = 0)]
            struct Union
        {
                [FieldOffset(0)]
                public: ResourceTransitionBarrier Transition{};

                [FieldOffset(0)]
                public: ResourceAliasingBarrier Aliasing{};

                [FieldOffset(0)]
                public: ResourceUnorderedAccessViewBarrier UnorderedAccessView{};
            }
        }


    }
}

#endif // VORTICE_RESOURCEBARRIER_H