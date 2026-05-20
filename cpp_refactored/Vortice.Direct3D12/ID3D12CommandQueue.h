// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12COMMANDQUEUE_H
#define VORTICE_ID3D12COMMANDQUEUE_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12CommandQueue
        {
            void ExecuteCommandList(ID3D12CommandList commandList)
        {
                void* ptr{};
                ExecuteCommandLists(1, &ptr);
            }

            void ExecuteCommandLists(const std::vector<ID3D12CommandList>& commandLists)
        {
                int32_t count{};
                IntPtr* commandListsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < count; i++)
                {
                    commandListsPtr= (commandLists== nullptr) ? IntPtr.Zero : commandLists.NativePointer;
                }

                ExecuteCommandLists((uint)count, commandListsPtr);
            }

            void ExecuteCommandLists(int32_t count, const std::vector<ID3D12CommandList>& commandLists)
        {
                IntPtr* commandListsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < count; i++)
                {
                    commandListsPtr= (commandLists== nullptr) ? IntPtr.Zero : commandLists.NativePointer;
                }

                ExecuteCommandLists((uint)count, commandListsPtr);
            }

            void ExecuteCommandLists(const span<const ID3D12CommandList>& commandLists)
        {
                IntPtr* commandListsPtr = stackalloc IntPtr{};
                for (int32_t i{}; i < commandLists.Length; i++)
                {
                    commandListsPtr= (commandLists== nullptr) ? IntPtr.Zero : commandLists.NativePointer;
                }

                ExecuteCommandLists((uint)commandLists.Length, commandListsPtr);
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

            void UpdateTileMappings(ID3D12Resource resource, const std::vector<TiledResourceCoordinate>& resourceRegionStartCoordinates, const std::vector<TileRegionSize>& resourceRegionSizes, ID3D12Heap heap, const std::vector<TileRangeFlags>& rangeFlags, const std::vector<int32_t>& heapRangeStartOffsets, const std::vector<int32_t>& rangeTileCounts, TileMappingFlags flags{};
            }

            void UpdateTileMappings(ID3D12Resource resource, const span<const TiledResourceCoordinate>& resourceRegionStartCoordinates, const span<const TileRegionSize>& resourceRegionSizes, ID3D12Heap heap, const span<const TileRangeFlags>& rangeFlags, const span<const int32_t>& heapRangeStartOffsets, const span<const int32_t>& rangeTileCounts, TileMappingFlags flags{};
            }
        }


    }
}

#endif // VORTICE_ID3D12COMMANDQUEUE_H