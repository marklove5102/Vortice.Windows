// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RESOURCEBARRIER_H
#define VORTICE_DIRECT3D12_RESOURCEBARRIER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RESOURCEBARRIER_H
#define VORTICE_VORTICE_RESOURCEBARRIER_H

#include <cstdint>

namespace Vortice {

struct ResourceBarrier
{
public:
    constexpr ResourceBarrier(ResourceTransitionBarrier transition, ResourceBarrierFlags ResourceBarrierFlags.None)
    Type = ResourceBarrierType.Transition;
        Flags = flags;
        _union = new Union { Transition = transition };
    constexpr ResourceBarrier(ResourceAliasingBarrier aliasing)
    Type = ResourceBarrierType.Aliasing;
        Flags = ResourceBarrierFlags.None;
        _union = new Union { Aliasing = aliasing };
    constexpr ResourceBarrier(ResourceUnorderedAccessViewBarrier unorderedAccessView)
    Type = ResourceBarrierType.UnorderedAccessView;
        Flags = ResourceBarrierFlags.None;
        _union = new Union { UnorderedAccessView = unorderedAccessView };
    const ResourceBarrierType Type;
    const ResourceBarrierFlags Flags;
    ResourceTransitionBarrier Transition{> _union.Transition};
    ResourceAliasingBarrier Aliasing{> _union.Aliasing};
    ResourceUnorderedAccessViewBarrier UnorderedAccessView{> _union.UnorderedAccessView};
    ResourceTransitionBarrier Transition;
    ResourceAliasingBarrier Aliasing;
    ResourceUnorderedAccessViewBarrier UnorderedAccessView;

    static ResourceBarrier BarrierTransition() { return new ResourceBarrier(new ResourceTransitionBarrier(resource, stateBefore, stateAfter, subresource), flags); }

    static ResourceBarrier BarrierAliasing() { return new ResourceBarrier(new ResourceAliasingBarrier(resourceBefore, resourceAfter)); }

    static ResourceBarrier BarrierUnorderedAccessView() { return new ResourceBarrier(new ResourceUnorderedAccessViewBarrier(resource)); }


private:
    const Union _union;
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RESOURCEBARRIER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
    ResourceTransitionBarrier Transition;
    ResourceAliasingBarrier Aliasing;
    ResourceUnorderedAccessViewBarrier UnorderedAccessView;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RESOURCEBARRIER_H
