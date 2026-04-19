// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ID3D12PIPELINELIBRARY_H
#define VORTICE_DIRECT3D12_ID3D12PIPELINELIBRARY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D12PIPELINELIBRARY_H
#define VORTICE_VORTICE_ID3D12PIPELINELIBRARY_H

#include <cstdint>

namespace Vortice {

class ID3D12PipelineLibrary
{
public:
    ~ID3D12PipelineLibrary() = default;

    ID3D12PipelineState LoadComputePipeline() { return LoadComputePipeline(name, description, typeid(ID3D12PipelineState).GUID); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D12PIPELINELIBRARY_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ID3D12PIPELINELIBRARY_H
