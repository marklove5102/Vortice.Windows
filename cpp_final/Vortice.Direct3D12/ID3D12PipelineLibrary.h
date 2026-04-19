// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12PIPELINELIBRARY_H
#define VORTICE_ID3D12PIPELINELIBRARY_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12PipelineLibrary
        {
            ID3D12PipelineState LoadComputePipeline(const std::string& name, ComputePipelineStateDescription description)
        {
                return LoadComputePipeline(name, description, typeof(ID3D12PipelineState).GUID);
            }

            ID3D12PipelineState LoadGraphicsPipeline(const std::string& name, GraphicsPipelineStateDescription description)
        {
                return LoadGraphicsPipeline(name, description, typeof(ID3D12PipelineState).GUID);
            }
        }


    }
}

#endif // VORTICE_ID3D12PIPELINELIBRARY_H