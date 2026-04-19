// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_DXCCOMPILEROPTIONS_H
#define VORTICE_DXC_DXCCOMPILEROPTIONS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXCCOMPILEROPTIONS_H
#define VORTICE_VORTICE_DXCCOMPILEROPTIONS_H

#include <cstdint>

namespace Vortice {

class DxcCompilerOptions
{
public:
    ~DxcCompilerOptions() = default;

    DxcShaderModel ShaderModel{};
    bool EnableDebugInfo{};
    bool EnableDebugInfoSlimFormat{};
    bool SkipValidation{};
    bool SkipOptimizations{};
    bool PackMatrixRowMajor{};
    bool PackMatrixColumnMajor{};
    bool AvoidFlowControl{};
    bool PreferFlowControl{};
    bool EnableStrictness{};
    bool EnableBackwardCompatibility{};
    bool IEEEStrictness{};
    bool Enable16bitTypes{};
    int32_t OptimizationLevel{};
    bool WarningsAreErrors{};
    bool ResourcesMayAlias{};
    bool AllResourcesBound{};
    int32_t HLSLVersion{};
    bool StripReflectionIntoSeparateBlob{};
    int32_t VkBufferShift{};
    int32_t VkBufferShiftSet{};
    int32_t VkTextureShift{};
    int32_t VkTextureShiftSet{};
    int32_t VkSamplerShift{};
    int32_t VkSamplerShiftSet{};
    int32_t VkUAVShift{};
    int32_t VkUAVShiftSet{};
    bool GenerateSpirv{};
    bool VkUseGLLayout{};
    bool VkUseDXLayout{};
    bool VkUseScalarLayout{};
    bool VkUseDXPositionW{};
    bool SpvFlattenResourceArrays{};
    bool SpvReflect{};
    int32_t SpvTargetEnvMajor{};
    int32_t SpirvTargetEnvMinor{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXCCOMPILEROPTIONS_H

} // namespace Vortice

#endif // VORTICE_DXC_DXCCOMPILEROPTIONS_H
