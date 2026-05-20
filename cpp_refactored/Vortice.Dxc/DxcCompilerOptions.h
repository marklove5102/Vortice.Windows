// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCCOMPILEROPTIONS_H
#define VORTICE_DXCCOMPILEROPTIONS_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        class DxcCompilerOptions
        {
            DxcShaderModel m_shaderModel{}; = DxcShaderModel.Model6_0;
            bool m_enableDebugInfo{};
            bool m_enableDebugInfoSlimFormat{};
            bool m_skipValidation{};
            bool m_skipOptimizations{};
            bool m_packMatrixRowMajor{};
            bool m_packMatrixColumnMajor{};
            bool m_avoidFlowControl{};
            bool m_preferFlowControl{};
            bool m_enableStrictness{};
            bool m_enableBackwardCompatibility{};
            bool m_iEEEStrictness{};
            bool m_enable16bitTypes{};
            int32_t m_optimizationLevel{}; = 3;
            bool m_warningsAreErrors{};
            bool m_resourcesMayAlias{};
            bool m_allResourcesBound{};

            int32_t m_hLSLVersion{}; = 2018;

            bool m_stripReflectionIntoSeparateBlob{}; = true;

            int32_t m_vkBufferShift{};
            int32_t m_vkBufferShiftSet{};
            int32_t m_vkTextureShift{};
            int32_t m_vkTextureShiftSet{};
            int32_t m_vkSamplerShift{};
            int32_t m_vkSamplerShiftSet{};
            int32_t m_vkUAVShift{};
            int32_t m_vkUAVShiftSet{};

                        bool m_generateSpirv{}; = false;

            bool m_vkUseGLLayout{}; = false;
            bool m_vkUseDXLayout{}; = true;
            bool m_vkUseScalarLayout{}; = false;
            bool m_vkUseDXPositionW{}; = true;
            bool m_spvFlattenResourceArrays{}; = false;
            bool m_spvReflect{}; = false;
            int32_t m_spvTargetEnvMajor{}; = 1;
            int32_t m_spirvTargetEnvMinor{}; = 1;
        }


    }
}

#endif // VORTICE_DXCCOMPILEROPTIONS_H