// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCCOMPILEROPTIONS_H
#define VORTICE_DXCCOMPILEROPTIONS_H

#include <cstdint>

namespace Vortice {
    namespace Dxc; {

        namespace Vortice.Dxc;

        public sealed class DxcCompilerOptions
        {
            DxcShaderModel m_shaderModel{};
        void set_ShaderModel(DxcShaderModel value)
        { m_shaderModel = value; }
         = DxcShaderModel.Model6_0;
            bool m_enableDebugInfo{};
        void set_EnableDebugInfo(bool value)
        { m_enableDebugInfo = value; }

            bool m_enableDebugInfoSlimFormat{};
        void set_EnableDebugInfoSlimFormat(bool value)
        { m_enableDebugInfoSlimFormat = value; }

            bool m_skipValidation{};
        void set_SkipValidation(bool value)
        { m_skipValidation = value; }

            bool m_skipOptimizations{};
        void set_SkipOptimizations(bool value)
        { m_skipOptimizations = value; }

            bool m_packMatrixRowMajor{};
        void set_PackMatrixRowMajor(bool value)
        { m_packMatrixRowMajor = value; }

            bool m_packMatrixColumnMajor{};
        void set_PackMatrixColumnMajor(bool value)
        { m_packMatrixColumnMajor = value; }

            bool m_avoidFlowControl{};
        void set_AvoidFlowControl(bool value)
        { m_avoidFlowControl = value; }

            bool m_preferFlowControl{};
        void set_PreferFlowControl(bool value)
        { m_preferFlowControl = value; }

            bool m_enableStrictness{};
        void set_EnableStrictness(bool value)
        { m_enableStrictness = value; }

            bool m_enableBackwardCompatibility{};
        void set_EnableBackwardCompatibility(bool value)
        { m_enableBackwardCompatibility = value; }

            bool m_iEEEStrictness{};
        void set_IEEEStrictness(bool value)
        { m_iEEEStrictness = value; }

            bool m_enable16bitTypes{};
        void set_Enable16bitTypes(bool value)
        { m_enable16bitTypes = value; }

            int32_t m_optimizationLevel{};
        void set_OptimizationLevel(int32_t value)
        { m_optimizationLevel = value; }
         = 3;
            bool m_warningsAreErrors{};
        void set_WarningsAreErrors(bool value)
        { m_warningsAreErrors = value; }

            bool m_resourcesMayAlias{};
        void set_ResourcesMayAlias(bool value)
        { m_resourcesMayAlias = value; }

            bool m_allResourcesBound{};
        void set_AllResourcesBound(bool value)
        { m_allResourcesBound = value; }

            int32_t m_hLSLVersion{};
        void set_HLSLVersion(int32_t value)
        { m_hLSLVersion = value; }
         = 2018;

            bool m_stripReflectionIntoSeparateBlob{};
        void set_StripReflectionIntoSeparateBlob(bool value)
        { m_stripReflectionIntoSeparateBlob = value; }
         = true;

            int32_t m_vkBufferShift{};
        void set_VkBufferShift(int32_t value)
        { m_vkBufferShift = value; }

            int32_t m_vkBufferShiftSet{};
        void set_VkBufferShiftSet(int32_t value)
        { m_vkBufferShiftSet = value; }

            int32_t m_vkTextureShift{};
        void set_VkTextureShift(int32_t value)
        { m_vkTextureShift = value; }

            int32_t m_vkTextureShiftSet{};
        void set_VkTextureShiftSet(int32_t value)
        { m_vkTextureShiftSet = value; }

            int32_t m_vkSamplerShift{};
        void set_VkSamplerShift(int32_t value)
        { m_vkSamplerShift = value; }

            int32_t m_vkSamplerShiftSet{};
        void set_VkSamplerShiftSet(int32_t value)
        { m_vkSamplerShiftSet = value; }

            int32_t m_vkUAVShift{};
        void set_VkUAVShift(int32_t value)
        { m_vkUAVShift = value; }

            int32_t m_vkUAVShiftSet{};
        void set_VkUAVShiftSet(int32_t value)
        { m_vkUAVShiftSet = value; }

            /// <summary>
            /// Generate SPIR-V code
            /// </summary>
            bool m_generateSpirv{};
        void set_GenerateSpirv(bool value)
        { m_generateSpirv = value; }
         = false;

            bool m_vkUseGLLayout{};
        void set_VkUseGLLayout(bool value)
        { m_vkUseGLLayout = value; }
         = false;
            bool m_vkUseDXLayout{};
        void set_VkUseDXLayout(bool value)
        { m_vkUseDXLayout = value; }
         = true;
            bool m_vkUseScalarLayout{};
        void set_VkUseScalarLayout(bool value)
        { m_vkUseScalarLayout = value; }
         = false;
            bool m_vkUseDXPositionW{};
        void set_VkUseDXPositionW(bool value)
        { m_vkUseDXPositionW = value; }
         = true;
            bool m_spvFlattenResourceArrays{};
        void set_SpvFlattenResourceArrays(bool value)
        { m_spvFlattenResourceArrays = value; }
         = false;
            bool m_spvReflect{};
        void set_SpvReflect(bool value)
        { m_spvReflect = value; }
         = false;
            int32_t m_spvTargetEnvMajor{};
        void set_SpvTargetEnvMajor(int32_t value)
        { m_spvTargetEnvMajor = value; }
         = 1;
            int32_t m_spirvTargetEnvMinor{};
        void set_SpirvTargetEnvMinor(int32_t value)
        { m_spirvTargetEnvMinor = value; }
         = 1;
        }


    }
}

#endif // VORTICE_DXCCOMPILEROPTIONS_H