// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H

#include <cstdint>
#include <vector>
#include <optional>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        publicclass ID3D12GraphicsCommandList4
        {
            publicvoid BeginRenderPass(const RenderPassRenderTargetDescription& renderTarget, const std::optional<RenderPassDepthStencilDescription>& depthStencil, RenderPassFlags flags)
                {
                RenderPassRenderTargetDescription.__Native renderTargetNative{};
                renderTarget.__MarshalTo(ref renderTargetNative);
                BeginRenderPass(1, &renderTargetNative, depthStencil, flags);
                renderTarget.__MarshalFree(ref renderTargetNative);
            }
                                            publicvoid BeginRenderPass(uint32_t renderTargetCount, const std::vector<RenderPassRenderTargetDescription>& renderTargets, const std::optional<RenderPassDepthStencilDescription>& depthStencil, RenderPassFlags flags)
                {
                Span renderTargetsNative{};
                for (int32_t i{}; i < renderTargetCount; ++i)
                {
                    renderTargets.__MarshalTo(ref renderTargetsNative);
                }
                fixed (RenderPassRenderTargetDescription.__Native* renderTargetsPtr = renderTargetsNative)
                {
                    BeginRenderPass(renderTargetCount, renderTargetsPtr, depthStencil, flags);
                }
                for (int32_t i{}; i < renderTargetCount; ++i)
                {
                    renderTargets.__MarshalFree(ref renderTargetsNative);
                }
            }
                                        publicvoid BeginRenderPass(const std::vector<RenderPassRenderTargetDescription>& renderTargets, const std::optional<RenderPassDepthStencilDescription>& depthStencil, RenderPassFlags flags)
                {
                BeginRenderPass((uint)renderTargets.Length, renderTargets, depthStencil, flags);
            }
                                            publicvoid BeginRenderPass(uint32_t renderTargetCount, const std::span<RenderPassRenderTargetDescription>& renderTargets, const std::optional<RenderPassDepthStencilDescription>& depthStencil, RenderPassFlags flags)
                {
                Span renderTargetsNative{};
                for (int32_t i{}; i < renderTargetCount; ++i)
                {
                    renderTargets.__MarshalTo(ref renderTargetsNative);
                }
                fixed (RenderPassRenderTargetDescription.__Native* renderTargetsPtr = renderTargetsNative)
                {
                    BeginRenderPass(renderTargetCount, renderTargetsPtr, depthStencil, flags);
                }
                for (int32_t i{}; i < renderTargetCount; ++i)
                {
                    renderTargets.__MarshalFree(ref renderTargetsNative);
                }
            }
                                        publicvoid BeginRenderPass(const std::span<RenderPassRenderTargetDescription>& renderTargets, const std::optional<RenderPassDepthStencilDescription>& depthStencil, RenderPassFlags flags)
                {
                BeginRenderPass((uint)renderTargets.Length, renderTargets, depthStencil, flags);
            }
                            publicvoid BuildRaytracingAccelerationStructure(BuildRaytracingAccelerationStructureDescription description)
                {
                BuildRaytracingAccelerationStructure(ref description, 0, nullptr);
            }
                                publicvoid BuildRaytracingAccelerationStructure(BuildRaytracingAccelerationStructureDescription description, const std::vector<RaytracingAccelerationStructurePostBuildInfoDescription>& postbuildInfoDescriptions)
                {
                BuildRaytracingAccelerationStructure(ref description, (uint)postbuildInfoDescriptions.Length, postbuildInfoDescriptions);
            }
            publicvoid InitializeMetaCommand(ID3D12MetaCommand metaCommand)
                {
                InitializeMetaCommand(metaCommand, nint.Zero, nuint.Zero);
            }
            publicvoid InitializeMetaCommand(ID3D12MetaCommand metaCommand, Blob initializationParametersData)
                {
                InitializeMetaCommand(metaCommand, initializationParametersData.BufferPointer, initializationParametersData.BufferSize);
            }
            publicvoid ExecuteMetaCommand(ID3D12MetaCommand metaCommand)
                {
                ExecuteMetaCommand(metaCommand, nint.Zero, nuint.Zero);
            }
            publicvoid ExecuteMetaCommand(ID3D12MetaCommand metaCommand, Blob executionParametersData)
                {
                ExecuteMetaCommand(metaCommand, executionParametersData.BufferPointer, executionParametersData.BufferSize);
            }
            publicvoid EmitRaytracingAccelerationStructurePostbuildInfo(RaytracingAccelerationStructurePostBuildInfoDescription description, const std::vector<uint64_t>& sourceAccelerationStructureData)
                {
                EmitRaytracingAccelerationStructurePostbuildInfo(description, (uint)sourceAccelerationStructureData.Length, sourceAccelerationStructureData);
            }
        }

    }
}

#endif // VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H