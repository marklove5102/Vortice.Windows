// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H
#define VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12GraphicsCommandList4
        {
            void BeginRenderPass(const RenderPassRenderTargetDescription& renderTarget, std::optional<RenderPassDepthStencilDescription> depthStencil{};
                renderTarget.__MarshalTo(ref renderTargetNative);
                BeginRenderPass(1, &renderTargetNative, depthStencil, flags);
                renderTarget.__MarshalFree(ref renderTargetNative);
            }

                                            void BeginRenderPass(uint32_t renderTargetCount, const std::vector<RenderPassRenderTargetDescription>& renderTargets, std::optional<RenderPassDepthStencilDescription> depthStencil{};
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

                                        void BeginRenderPass(const std::vector<RenderPassRenderTargetDescription>& renderTargets, std::optional<RenderPassDepthStencilDescription> depthStencil{};
            }

                                            void BeginRenderPass(uint32_t renderTargetCount, const span<RenderPassRenderTargetDescription>& renderTargets, std::optional<RenderPassDepthStencilDescription> depthStencil{};
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

                                        void BeginRenderPass(const span<RenderPassRenderTargetDescription>& renderTargets, std::optional<RenderPassDepthStencilDescription> depthStencil{};
            }

                            void BuildRaytracingAccelerationStructure(BuildRaytracingAccelerationStructureDescription description)
        {
                BuildRaytracingAccelerationStructure(ref description, 0, nullptr);
            }

                                void BuildRaytracingAccelerationStructure(BuildRaytracingAccelerationStructureDescription description, const std::vector<RaytracingAccelerationStructurePostBuildInfoDescription>& postbuildInfoDescriptions)
        {
                BuildRaytracingAccelerationStructure(ref description, (uint)postbuildInfoDescriptions.Length, postbuildInfoDescriptions);
            }

            void InitializeMetaCommand(ID3D12MetaCommand metaCommand)
        {
                InitializeMetaCommand(metaCommand, nint.Zero, nuint.Zero);
            }

            void InitializeMetaCommand(ID3D12MetaCommand metaCommand, Blob initializationParametersData)
        {
                InitializeMetaCommand(metaCommand, initializationParametersData.BufferPointer, initializationParametersData.BufferSize);
            }

            void ExecuteMetaCommand(ID3D12MetaCommand metaCommand)
        {
                ExecuteMetaCommand(metaCommand, nint.Zero, nuint.Zero);
            }

            void ExecuteMetaCommand(ID3D12MetaCommand metaCommand, Blob executionParametersData)
        {
                ExecuteMetaCommand(metaCommand, executionParametersData.BufferPointer, executionParametersData.BufferSize);
            }

            void EmitRaytracingAccelerationStructurePostbuildInfo(RaytracingAccelerationStructurePostBuildInfoDescription description, const std::vector<uint64_t>& sourceAccelerationStructureData)
        {
                EmitRaytracingAccelerationStructurePostbuildInfo(description, (uint)sourceAccelerationStructureData.Length, sourceAccelerationStructureData);
            }
        }


    }
}

#endif // VORTICE_ID3D12GRAPHICSCOMMANDLIST4_H