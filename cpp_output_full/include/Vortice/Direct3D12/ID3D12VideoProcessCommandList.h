// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12VIDEOPROCESSCOMMANDLIST_H
#define VORTICE_DIRECT3D12_ID3D12VIDEOPROCESSCOMMANDLIST_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12VIDEOPROCESSCOMMANDLIST_H
#define VORTICE_VORTICE_ID3D12VIDEOPROCESSCOMMANDLIST_H

#include <cstdint>

namespace Vortice {

class ID3D12VideoProcessCommandList
{
public:
    ~ID3D12VideoProcessCommandList() = default;

    void ResourceBarrierTransition() { auto barrier = new ResourceBarrier(
            new ResourceTransitionBarrier(resource, stateBefore, stateAfter, subresource),
            flags);
        ResourceBarrier(1, &barrier); }

    void ResourceBarrierAliasing() { auto barrier = new ResourceBarrier(new ResourceAliasingBarrier(resourceBefore, resourceAfter));
        ResourceBarrier(1, &barrier); }

    void ResourceBarrierUnorderedAccessView() { auto barrier = new ResourceBarrier(new ResourceUnorderedAccessViewBarrier(resource));
        ResourceBarrier(1, &barrier); }

    void ResourceBarrier() { ResourceBarrier(1, &barrier); }

    void BeginEvent() { int bufferSize = PixHelpers.CalculateNoArgsEventSize(name);
        void* buffer = stackalloc byte[bufferSize];
        PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_BeginEvent_NoArgs, 0, name);
        BeginEvent(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize); }

    void SetMarker() { int bufferSize = PixHelpers.CalculateNoArgsEventSize(name);
        void* buffer = stackalloc byte[bufferSize];
        PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_SetMarker_NoArgs, 0, name);
        SetMarker(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12VIDEOPROCESSCOMMANDLIST_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12VIDEOPROCESSCOMMANDLIST_H
