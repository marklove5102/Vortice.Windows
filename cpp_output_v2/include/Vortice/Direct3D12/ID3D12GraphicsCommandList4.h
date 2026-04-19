// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST4_H
#define VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST4_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H
#define VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H

#include <cstdint>

namespace Vortice {

class ID3D12GraphicsCommandList4
{
public:
    ~ID3D12GraphicsCommandList4() = default;

    void BeginRenderPass() { RenderPassRenderTargetDescription.__Native renderTargetNative = default;
        renderTarget.__MarshalTo(ref renderTargetNative);
        BeginRenderPass(1, &renderTargetNative, depthStencil, flags);
        renderTarget.__MarshalFree(ref renderTargetNative); }

    void BeginRenderPass() { BeginRenderPass((uint)renderTargets.Length, renderTargets, depthStencil, flags); }

    void BeginRenderPass() { BeginRenderPass((uint)renderTargets.Length, renderTargets, depthStencil, flags); }

    void BuildRaytracingAccelerationStructure() { BuildRaytracingAccelerationStructure(ref description, 0, nullptr); }

    void BuildRaytracingAccelerationStructure() { BuildRaytracingAccelerationStructure(ref description, (uint)postbuildInfoDescriptions.Length, postbuildInfoDescriptions); }

    void InitializeMetaCommand() { InitializeMetaCommand(metaCommand, nint.Zero, nuint.Zero); }

    void InitializeMetaCommand() { InitializeMetaCommand(metaCommand, initializationParametersData.BufferPointer, initializationParametersData.BufferSize); }

    void ExecuteMetaCommand() { ExecuteMetaCommand(metaCommand, nint.Zero, nuint.Zero); }

    void ExecuteMetaCommand() { ExecuteMetaCommand(metaCommand, executionParametersData.BufferPointer, executionParametersData.BufferSize); }

    void EmitRaytracingAccelerationStructurePostbuildInfo() { EmitRaytracingAccelerationStructurePostbuildInfo(description, (uint)sourceAccelerationStructureData.Length, sourceAccelerationStructureData); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12GRAPHICSCOMMANDLIST4_H
