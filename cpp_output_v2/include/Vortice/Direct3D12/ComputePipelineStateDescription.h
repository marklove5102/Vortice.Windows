// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_COMPUTEPIPELINESTATEDESCRIPTION_H
#define VORTICE_DIRECT3D12_COMPUTEPIPELINESTATEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COMPUTEPIPELINESTATEDESCRIPTION_H
#define VORTICE_VORTICE_COMPUTEPIPELINESTATEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class ComputePipelineStateDescription
{
public:
    ~ComputePipelineStateDescription() = default;

    void* RootSignature;
    uint32_t NodeMask;
    CachedPipelineState CachedPSO;
    PipelineStateFlags Flags;

    std::span<const uint8_t> ComputeShader{};
    uint32_t NodeMask{};
    CachedPipelineState CachedPSO{};
    PipelineStateFlags Flags{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_COMPUTEPIPELINESTATEDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* RootSignature;
    uint32_t NodeMask;
    CachedPipelineState CachedPSO;
    PipelineStateFlags Flags;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_COMPUTEPIPELINESTATEDESCRIPTION_H
