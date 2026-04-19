// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12COMMANDQUEUE_H
#define VORTICE_DIRECT3D12_ID3D12COMMANDQUEUE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12COMMANDQUEUE_H
#define VORTICE_VORTICE_ID3D12COMMANDQUEUE_H

#include <cstdint>

namespace Vortice {

class ID3D12CommandQueue
{
public:
    ~ID3D12CommandQueue() = default;

    void ExecuteCommandList() { IntPtr ptr = commandList.NativePointer;
        ExecuteCommandLists(1, &ptr); }

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

#endif // VORTICE_VORTICE_ID3D12COMMANDQUEUE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12COMMANDQUEUE_H
