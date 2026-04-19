// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12PIPELINELIBRARY1_H
#define VORTICE_ID3D12PIPELINELIBRARY1_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12PipelineLibrary1
        {
            ID3D12PipelineState LoadPipeline(const std::string& name, PipelineStateStreamDescription description)
        {
                return LoadPipeline(name, description, typeof(ID3D12PipelineState).GUID);
            }

            ID3D12PipelineState LoadPipeline(const std::string& name, PipelineStateStreamDescription& description)
        {
                return LoadPipeline(name, description, typeof(ID3D12PipelineState).GUID);
            }
        }


    }
}

#endif // VORTICE_ID3D12PIPELINELIBRARY1_H