// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCCOMPILEROPTIONS_H
#define VORTICE_DXCCOMPILEROPTIONS_H

#include <cstdint>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;
        publicclass DxcCompilerOptions
        {
            public: DxcShaderModel m_shaderModel{}; = DxcShaderModel.Model6_0;
            public: bool m_enableDebugInfo{};
            public: bool m_enableDebugInfoSlimFormat{};
            public: bool m_skipValidation{};
            public: bool m_skipOptimizations{};
            public: bool m_packMatrixRowMajor{};
            public: bool m_packMatrixColumnMajor{};
            public: bool m_avoidFlowControl{};
            public: bool m_preferFlowControl{};
            public: bool m_enableStrictness{};
            public: bool m_enableBackwardCompatibility{};
            public: bool m_iEEEStrictness{};
            public: bool m_enable16bitTypes{};
            public: int32_t m_optimizationLevel{}; = 3;
            public: bool m_warningsAreErrors{};
            public: bool m_resourcesMayAlias{};
            public: bool m_allResourcesBound{};
            public: int32_t m_hLSLVersion{}; = 2018;
            public: bool m_stripReflectionIntoSeparateBlob{}; = true;
            public: int32_t m_vkBufferShift{};
            public: int32_t m_vkBufferShiftSet{};
            public: int32_t m_vkTextureShift{};
            public: int32_t m_vkTextureShiftSet{};
            public: int32_t m_vkSamplerShift{};
            public: int32_t m_vkSamplerShiftSet{};
            public: int32_t m_vkUAVShift{};
            public: int32_t m_vkUAVShiftSet{};
                        public: bool m_generateSpirv{}; = false;
            public: bool m_vkUseGLLayout{}; = false;
            public: bool m_vkUseDXLayout{}; = true;
            public: bool m_vkUseScalarLayout{}; = false;
            public: bool m_vkUseDXPositionW{}; = true;
            public: bool m_spvFlattenResourceArrays{}; = false;
            public: bool m_spvReflect{}; = false;
            public: int32_t m_spvTargetEnvMajor{}; = 1;
            public: int32_t m_spirvTargetEnvMinor{}; = 1;
        }

    }
}

#endif // VORTICE_DXCCOMPILEROPTIONS_H