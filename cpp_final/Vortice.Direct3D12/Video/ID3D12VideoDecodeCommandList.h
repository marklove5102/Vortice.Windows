// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12VIDEODECODECOMMANDLIST_H
#define VORTICE_ID3D12VIDEODECODECOMMANDLIST_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {
namespace Video {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Video;

            class ID3D12VideoDecodeCommandList
            {
                void ResourceBarrierTransition(ID3D12Resource resource, ResourceStates stateBefore, ResourceStates stateAfter, uint32_t subresource{};
                    ResourceBarrier(1, &barrier);
                }

                void ResourceBarrierAliasing(ID3D12Resource resourceBefore, ID3D12Resource resourceAfter)
            {
                    var barrier{};
                    ResourceBarrier(1, &barrier);
                }

                void ResourceBarrierUnorderedAccessView(ID3D12Resource resource)
            {
                    var barrier{};
                    ResourceBarrier(1, &barrier);
                }

                void ResourceBarrier(ResourceBarrier barrier)
            {
                    ResourceBarrier(1, &barrier);
                }

                void ResourceBarrier(const std::vector<ResourceBarrier>& barriers)
            {
                    fixed (ResourceBarrier* pBarriers = barriers)
                    {
                        ResourceBarrier((uint)barriers.Length, pBarriers);
                    }
                }

                void ResourceBarrier(uint32_t barriersCount, const std::vector<ResourceBarrier>& barriers)
            {
                    fixed (ResourceBarrier* pBarriers = barriers)
                    {
                        ResourceBarrier(barriersCount, pBarriers);
                    }
                }

                void ResourceBarrier(const span<ResourceBarrier>& barriers)
            {
                    fixed (ResourceBarrier* barriersPtr = barriers)
                    {
                        ResourceBarrier((uint)barriers.Length, barriersPtr);
                    }
                }

                void BeginEvent(const std::string& name)
            {
                    int32_t bufferSize{};
                    void* buffer = stackalloc byte{};
                    PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_BeginEvent_NoArgs, 0, name);
                    BeginEvent(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize);
                }

                void SetMarker(const std::string& name)
            {
                    int32_t bufferSize{};
                    void* buffer = stackalloc byte{};
                    PixHelpers.FormatNoArgsEventToBuffer(buffer, PixHelpers.PixEventType.PIXEvent_SetMarker_NoArgs, 0, name);
                    SetMarker(PixHelpers.WinPIXEventPIX3BlobVersion, new IntPtr(buffer), (uint)bufferSize);
                }

                                        void DiscardResource(ID3D12Resource resource, uint32_t firstSubresource, uint32_t numSubresources)
            {
                    DiscardResource(resource, new DiscardRegion
                    {
                        NumRects = 0,
                        Rects = IntPtr.Zero,
                        FirstSubresource = firstSubresource,
                        NumSubresources = numSubresources
                    });
                }

                                                void DiscardResource(ID3D12Resource resource, uint32_t rectCount, const std::vector<RawRect>& rects, uint32_t firstSubresource, uint32_t numSubresources)
            {
                    fixed (RawRect* rectsPtr = rects)
                    {
                        DiscardResource(resource, new DiscardRegion
                        {
                            NumRects = rectCount,
                            Rects = (IntPtr)rectsPtr,
                            FirstSubresource = firstSubresource,
                            NumSubresources = numSubresources
                        });
                    }
                }
            }


        }
    }
}

#endif // VORTICE_ID3D12VIDEODECODECOMMANDLIST_H