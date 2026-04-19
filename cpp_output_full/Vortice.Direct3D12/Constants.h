#ifndef VORTICE_CONSTANTS_H
#define VORTICE_CONSTANTS_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        public static class D3D12
        {
            // https://docs.microsoft.com/en-us/windows/win32/direct3d12/constants
            public: const uint8_t IndexStripCutValue8Bit{};
            public: const uint16_t IndexStripCutValue16Bit{};
            public: const uint32_t IndexStripCutValue32Bit{};
            public: const uint32_t AppendAlignedElement{};
            public: const int32_t ArrayAxisAddressRangeBitCount{};
            public: const int32_t ClipOrCullDistanceCount{};
            public: const int32_t ClipOrCullDistanceElementCount{};

            public: const int32_t CommonShaderConstantBufferApiSlotCount{};
            public: const int32_t CommonShaderConstantBufferComponents{};
            public: const int32_t CommonShaderConstantBufferComponentBitCount{};
            public: const int32_t CommonShaderConstantBufferHWSlotCount{};
            public: const int32_t CommonShaderConstantBufferPartialUpdateExtentsByteAlignment{};
            public: const int32_t CommonShaderConstantBufferRegisterComponents{};
            public: const int32_t CommonShaderConstantBufferRegisterCount{};
            public: const int32_t CommonShaderConstantBufferRegisterReadsPerInstance{};
            public: const int32_t CommonShaderConstant_BufferRegisterReadPorts{};
            public: const int32_t CommonShaderFlowControlNestingLimit{};
            public: const int32_t CommonShaderImmediateConstantBufferRegisterComponents{};
            public: const int32_t CommonShaderImmediateConstantBufferRegisterCount{};
            public: const int32_t CommonShaderImmediateConstantBufferRegisterReadsPerInstance{};
            public: const int32_t CommonShaderImmediateConstantBufferRegisterReadPorts{};
            public: const int32_t CommonShaderImmediateValueComponentBitCount{};
            public: const int32_t CommonShaderInputResourceRegisterComponents{};
            public: const int32_t CommonShaderInputResourceRegisterCount{};
            public: const int32_t CommonShaderInputResourceRegisterReadsPerInstance{};
            public: const int32_t CommonShaderInputResourceRegisterReadPorts{};
            public: const int32_t CommonShaderInputResourceSlotCount{};
            public: const int32_t CommonShaderSamplerRegisterComponents{};
            public: const int32_t CommonShaderSamplerRegisterCount{};
            public: const int32_t CommonShaderSamplerRegisterReadsPerInstance{};
            public: const int32_t CommonShaderSamplerRegisterReadPorts{};
            public: const int32_t CommonShaderSamplerSlotCount{};

            public: const int32_t CommonShaderSubroutineNestingLimit{};

            public: const int32_t CommonShaderTempRegisterComponents{};
            public: const int32_t CommonShaderTempRegisterComponentBitCount{};
            public: const int32_t CommonShaderTempRegisterCount{};
            public: const int32_t CommonShaderTempRegisterReadsPerInstance{};
            public: const int32_t CommonShaderTempRegisterReadPorts{};

            public: const int32_t CommonShaderTexcoordRangeReductionMax{};
            public: const int32_t CommonShaderTexcoordRangeReductionMin{};

            public: const int32_t CommonShaderTexelOffsetMaxNegative{};
            public: const int32_t CommonShaderTexelOffsetMaxPositive{};

            public: const int32_t ConstantBufferDataPlacementAlignment{};

            public: const int32_t ComputeShader4xBucket00MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket00MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket01MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket01MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket02MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket02MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket03MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket03MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket04MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket04MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket05MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket05MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket06MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket06MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket07MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket07MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket08MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket08MaxNumThreadsPerGroupP{};
            public: const int32_t ComputeShader4xBucket09MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket09MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket10MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket10MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket11MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket11MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket12MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket12MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket13MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket13MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket14MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket14MaxNumThreadsPerGroup{};
            public: const int32_t ComputeShader4xBucket15MaxBytesTGSMWriteablePerThread{};
            public: const int32_t ComputeShader4xBucket15MaxNumThreadsPerGroup{};

            public: const int32_t ComputeShader4xDispatchMaxThreadGroupsInZDimension{};
            public: const int32_t ComputeShader4xRawUnorderedAccessViewByteAlignment{};
            public: const int32_t ComputeShader4xThreadGroupMaxThreadsPerGroup{};
            public: const int32_t ComputeShader4xThreadGroupMaxX{};
            public: const int32_t ComputeShader4xThreadGroupMaxY{};
            public: const int32_t ComputeShader4xUnorderedAccessViewRegisterCount{};

            public: const int32_t ComputeShaderDispatchMaxThreadGroupsPerDimension{};

            public: const int32_t ComputeShaderTGSMRegisterCount{};
            public: const int32_t ComputeShaderTGSMRegisterReadsPerInstance{};
            public: const int32_t ComputeShaderTGSMResourceRegisterComponents{};
            public: const int32_t ComputeShaderTGSMResourceRegisterReadPorts{};

            public: const int32_t ComputeShaderThreadGroupIdRegisterComponents{};

            public: const int32_t ComputeShaderThreadGroupIdRegisterCount{};

            public: const int32_t ComputeShaderThreadIdInGroupFlattenedRegisterComponents{};

            public: const int32_t ComputeShaderThreadIdInGroupFlattenedRegisterCount{};

            public: const int32_t ComputeShaderThreadIdInGroupRegisterComponents{};

            public: const int32_t ComputeShaderThreadIdInGroupRegisterCount{};

            public: const int32_t ComputeShaderThreadIdRegisterComponents{};
            public: const int32_t ComputeShaderThreadIdRegisterCount{};

            public: const int32_t ComputeShaderThreadGroupMaxThreadsPerGroup{};
            public: const int32_t ComputeShaderThreadGroupMaxX{};
            public: const int32_t ComputeShaderThreadGroupMaxY{};
            public: const int32_t ComputeShaderThreadGroupMaxZ{};
            public: const int32_t ComputeShaderThreadGroupMinX{};
            public: const int32_t ComputeShaderThreadGroupMinY{};
            public: const int32_t ComputeShaderThreadGroupMinZ{};

            public: const int32_t ComputeShaderThreadLocalTempRegisterPool{};

            public: const float DefaultBlendFactorAlpha{};
            public: const float DefaultBlendFactorBlue{};
            public: const float DefaultBlendFactorGreen{};
            public: const float DefaultBlendFactorRed{};
            public: const float DefaultBorderColorComponent{};
            public: const int32_t DefaultDepthBias{};
            public: const float DefaultDepthBiasClamp{};
            public: const int32_t DefaultMaxAnisotropy{};

            public: const float DefaultMipLodBias{};
            public: const uint32_t DefaultMsaaResourcePlacementAlignment{};

            public: const int32_t DefaultRenderTargetArrayIndex{};

            public: const int32_t DefaultResourcePlacementAlignment{};

            public: const uint32_t DefaultSampleMask{};

            public: const int32_t DefaultScissorEndX{};
            public: const int32_t DefaultScissorEndY{};

            public: const int32_t DefaultScissorStartX{};
            public: const int32_t DefaultScissorStartY{};

            public: const float DefaultSlopeScaledDepthBias{};
            public: const uint8_t DefaultStencilReadMask{};
            public: const uint8_t DefaultStencilWriteMask{};
            public: const int32_t DefaultStencilReference{};

            public: const int32_t DefaultViewportAndScissorRectIndex{};
            public: const int32_t DefaultViewportHeight{};
            public: const float DefaultViewportMaxDepth{};
            public: const float DefaultViewportMinDepth{};
            public: const int32_t DefaultViewportTopLeftX{};
            public: const int32_t DefaultViewportTopLeftY{};
            public: const int32_t DefaultViewportWidth{};

            /// <unmanaged>D3D12_DESCRIPTOR_RANGE_OFFSET_APPEND</unmanaged>
            public: const uint32_t DescriptorRangeOffsetAppend{};

            public: const uint32_t DriverReservedRegisterSpaceValuesEnd{};
            public: const uint32_t DriverReservedRegisterSpaceValuesStart{};

            public: const int32_t DomainShaderInputControlPointsMaxTotalScalars{};
            public: const int32_t DomainShaderInputControlPointRegisterComponents{};
            public: const int32_t DomainShaderInputControlPointRegisterComponentBitCount{};
            public: const int32_t DomainShaderInputControlPointRegisterCount{};
            public: const int32_t DomainShaderInputControlPointRegisterReadsPerInstance{};
            public: const int32_t DomainShaderInputControlPointRegisterReadPorts{};
            public: const int32_t DomainShaderInputDomainPointRegisterComponents{};
            public: const int32_t DomainShaderInputDomainPointRegisterComponentBitCount{};
            public: const int32_t DomainShaderInputDomainPointRegisterCount{};
            public: const int32_t DomainShaderInputDomainPointRegisterReadsPerInstance{};
            public: const int32_t DomainShaderInputDomainPointRegisterReadPorts{};
            public: const int32_t DomainShaderInputPatchConstantRegisterComponents{};
            public: const int32_t DomainShaderInputPatchConstantRegisterComponentBitCount{};
            public: const int32_t DomainShaderInputPatchConstantRegisterCount{};
            public: const int32_t DomainShaderInputPatchConstant_RegisterReadsPerInstances{};
            public: const int32_t DomainShaderInputPatchConstant_RegisterReadPorts{};
            public: const int32_t DomainShaderInputPrimitiveIdRegisterComponents{};
            public: const int32_t DomainShaderInputPrimitiveIdRegisterComponentBitCount{};
            public: const int32_t DomainShaderInputPrimitiveIdRegisterCount{};
            public: const int32_t DomainShaderInputPrimitiveIdRegisterReadsPerInstances{};
            public: const int32_t DomainShaderInputPrimitiveIdRegisterReadPorts{};
            public: const int32_t DomainShaderOutputRegisterComponents{};
            public: const int32_t DomainShaderOutputRegisterComponentBitCount{};
            public: const int32_t DomainShaderOutputRegisterCount{};

            public: const double Float16FusedToleranceInUlp{};
            public: const float Float32Max{};
            public: const float Float32ToIntegerToleranceInUlp{};
            public: const float FloatToSrgbExponent_Denominator{};
            public: const float FloatToSrgbExponent_Numerator{};
            public: const float FloatToSrgbOffset{};
            public: const float FloatToSrgbScale1{};
            public: const float FloatToSrgbScale2{};
            public: const float FloatToSrgbThreshold{};
            public: const float FtoiInstructionMaxInput{};
            public: const float FtoiInstructionMinInput{};
            public: const float FtouInstructionMaxInput{};
            public: const float FtouInstructionMinInput{};

            public: const int32_t GeometryShaderInputInstanceIdReadsPerInstance{};
            public: const int32_t GeometryShaderInputInstanceIdReadPorts{};
            public: const int32_t GeometryShaderInputInstanceIdRegisterComponents{};
            public: const int32_t GeometryShaderInputInstanceIdRegisterComponentBitCount{};
            public: const int32_t GeometryShaderInputInstanceIdRegisterCount{};
            public: const int32_t GeometryShaderInputPrimConstRegisterComponents{};
            public: const int32_t GeometryShaderInputPrimConstRegisterComponent_Bit_Count{};
            public: const int32_t GeometryShaderInputPrimConstRegisterCount{};
            public: const int32_t GeometryShaderInputPrimConstRegisterReadsPerInstance{};
            public: const int32_t GeometryShaderInputPrimConstRegisterReadPorts{};
            public: const int32_t GeometryShaderInputRegisterComponents{};
            public: const int32_t GeometryShaderInputRegisterComponentBitCount{};
            public: const int32_t GeometryShaderInputRegisterCount{};
            public: const int32_t GeometryShaderInputRegisterReadsPerInstance{};
            public: const int32_t GeometryShaderInputRegisterReadPorts{};
            public: const int32_t GeometryShaderInputRegisterVertices{};
            public: const int32_t GeometryShaderMaxInstanceCount{};
            public: const int32_t GeometryShaderMaxOutputVertexCountAcrossInstances{};
            public: const int32_t GeometryShaderOutputElements{};
            public: const int32_t GeometryShaderOutputRegisterComponents{};
            public: const int32_t GeometryShaderOutputRegisterComponentBitCount{};
            public: const int32_t GeometryShaderOutputRegisterCount{};

            public: const int32_t HullShaderControlPointPhaseInputRegister_Count{};
            public: const int32_t HullShaderControlPointPhaseOutputRegister_Count{};
            public: const int32_t HullShaderControlPointRegisterComponents{};
            public: const int32_t HullShaderControlPointRegisterComponentBitCount{};
            public: const int32_t HullShaderControlPointRegisterReadsPerInstance{};
            public: const int32_t HullShaderControlPointRegisterReadPorts{};

            public: const uint32_t HullShaderForkPhaseInstanceCountUpperBound{};
            public: const int32_t HullShaderInputForkInstanceIdRegisterComponents{};
            public: const int32_t HullShaderInputForkInstanceIdRegisterComponentBitCount{};
            public: const int32_t HullShaderInputForkInstanceIdRegisterCount{};
            public: const int32_t HullShaderInputForkInstanceIdRegisterReadsPerInstance{};
            public: const int32_t HullShaderInputForkInstanceIdRegisterReadPorts{};
            public: const int32_t HullShaderInputJoinInstanceIdRegisterComponents{};
            public: const int32_t HullShaderInputJoinInstanceIdRegisterComponentBitCount{};
            public: const int32_t HullShaderInputJoinInstanceIdRegisterCount{};
            public: const int32_t HullShaderInputJoinInstanceIdRegisterReadsPerInstance{};
            public: const int32_t HullShaderInputJoinInstanceIdRegisterReadPorts{};
            public: const int32_t HullShaderInputPrimitiveIdRegisterComponents{};
            public: const int32_t HullShaderInputPrimitiveIdRegisterComponent_Bit_Count{};
            public: const int32_t HullShaderInputPrimitiveIdRegisterCount{};
            public: const int32_t HullShaderInputPrimitiveIdRegisterReadsPerInstance{};
            public: const int32_t HullShaderInputPrimitiveIdRegisterReadPorts{};
            public: const uint32_t HullShaderJoinPhaseInstanceCountUpperBound{};
            public: const float HullShaderMaxTessFactorLowerBound{};
            public: const float HullShaderMaxTessFactorUpperBound{};
            public: const int32_t HullShaderOutputControlPointsMaxTotalScalars{};
            public: const int32_t HullShaderOutputControlPointIdRegisterComponents{};
            public: const int32_t HullShaderOutputControlPointIdRegisterComponentBitCount{};
            public: const int32_t HullShaderOutputControlPointIdRegisterCount{};
            public: const int32_t HullShaderOutputControlPointIdRegisterReadsPerInstance{};
            public: const int32_t HullShaderOutputControlPointIdRegisterReadPorts{};
            public: const int32_t HullShaderOutputPatchConstantRegisterComponents{};
            public: const int32_t HullShaderOutputPatchConstantRegisterComponentBitCount{};
            public: const int32_t HullShaderOutputPatchConstantRegisterCount{};
            public: const int32_t HullShaderOutputPatchConstantRegisterReadsPerInstance{};
            public: const int32_t HullShaderOutputPatchConstantRegisterReadPorts{};
            public: const int32_t HullShaderOutputPatchConstantRegisterScalarComponents{};

            public: const int32_t InputAssemblerDefaultIndexBufferOffsetInBytes{};
            public: const int32_t InputAssemblerDefaultPrimitiveTopology{};
            public: const int32_t InputAssemblerDefaultVertexBufferOffsetInBytes{};
            public: const int32_t InputAssemblerIndexInputResourceSlot_Count{};
            public: const int32_t InputAssemblerInstanceIdBitCount{};
            public: const int32_t InputAssemblerIntegerArithmeticBitCount{};
            public: const int32_t InputAssemblerPatchMaxControlPointCount{};
            public: const int32_t InputAssemblerPrimitiveIdBitCount{};
            public: const int32_t InputAssemblerVertexIdBitCount{};
            public: const int32_t InputAssemblerVertexInputResourceSlotCount{};
            public: const int32_t InputAssemblerVertexInputStructureElementsComponents{};
            public: const int32_t InputAssemblerVertexInputStructureElementCount{};

            public: const uint32_t IntegerDivideByZeroQuotient{};
            public: const uint32_t IntegerDivideByZeroRemained{};

            public: const uint32_t KeepRenderTargetsAndDepthStencil{};
            public: const uint32_t KeepUnorderedAccessViews{};

            public: const float LinearGamma{};
            public: const int32_t MajorVersion{};

            public: const float MaxBorderColorComponent{};
            public: const float MaxDepth{};
            public: const int32_t MaxLiveStaticSamplers{};

            public: const int32_t MaxMaxAnisotropy{};

            public: const int32_t MaxMultisampleSampleCount{};

            public: const float MaxPositionValue{};
            public: const int32_t MaxRootCost{};

            public: const int32_t MaxShaderVisibleDescriptorHeapSizeTier1{};
            public: const int32_t MaxShaderVisibleDescriptorHeapSizeTier2{};
            public: const int32_t MaxShaderVisibleSamplerHeapSize{};

            public: const int32_t MaxTextureDimension2ToExp{};

            public: const int32_t MaxViewInstanceCount{};

            public: const int32_t MinorVersion{};

            public: const float MinBorderColorComponent{};
            public: const float MinDepth{};
            public: const int32_t MinMaxAnisotropy{};

            public: const float MipLodBiasMax{};
            public: const float MipLodBiasMin{};
            public: const int32_t MipLodFractionalBitCount{};

            public: const int32_t MipLodRangeBitCount{};

            public: const float MultisampleAntialiasLineWidth{};
            public: const int32_t NonSampleFetchOutOfRangeAccessResult{};

            public: const uint32_t PackedTile{};

            public: const int32_t PixelAddressRangeBit_Count{};

            public: const int32_t PreScissorPixelAddressRangeBitCount{};

            public: const int32_t PixelShaderComputeShaderUnorderedAccessViewRegisterComponents{};
            public: const int32_t PixelShaderComputeShaderUnorderedAccessViewRegisterCount{};
            public: const int32_t PixelShaderComputeShaderUnorderedAccessViewRegisterReadsPerInstance{};
            public: const int32_t PixelShaderComputeShaderUnorderedAccessViewRegisterReadPorts{};

            public: const uint32_t PixelShaderFrontFacingDefaultValue{};
            public: const uint32_t PixelShaderFrontFacingFalseValue{};
            public: const uint32_t PixelShaderFrontFacingTrueValue{};

            public: const int32_t PixelShaderInputRegisterComponents{};
            public: const int32_t PixelShaderInputRegisterComponentBitCount{};
            public: const int32_t PixelShaderInputRegisterCount{};
            public: const int32_t PixelShaderInputRegisterReadsPerInstance{};
            public: const int32_t PixelShaderInputRegisterReadPorts{};

            public: const float PixelShaderLegacyPixelCenterFractionalComponent{};
            public: const int32_t PixelShaderOutputDepthRegisterComponents{};
            public: const int32_t PixelShaderOutputDepthRegisterComponentBitCount{};
            public: const int32_t PixelShaderOutputDepthRegisterCount{};
            public: const int32_t PixelShaderOutputMaskRegisterComponents{};
            public: const int32_t PixelShaderOutputMaskRegisterComponentBitCount{};
            public: const int32_t PixelShaderOutputMaskRegisterCount{};
            public: const int32_t PixelShaderOutputRegisterComponents{};
            public: const int32_t PixelShaderOutputRegisterComponentBitCount{};
            public: const int32_t PixelShaderOutputRegisterCount{};

            public: const float PixelShaderPixelCenterFractionalComponent{};
            public: const int32_t RawUnorderedAccessViewShaderResourceViewByteAlignment{};

            public: const int32_t RaytracingAABBByteAlignment{};
            public: const int32_t RaytracingAccelerationStructureByteAlignment{};
            public: const int32_t RaytracingInstanceDescByteAlignment{};
            public: const int32_t RaytracingMaxAttributeSizeInBytes{};
            public: const int32_t RaytracingMaxDeclarableTraceRecursionDepth{};
            public: const int32_t RaytracingMaxGeometriesPerBottomLevelAccelerationStructure{};
            public: const int32_t RaytracingMaxInstancesPerTopLevelAccelerationStructure{};
            public: const int32_t RaytracingMaxPrimitivesPerBottomLevelAccelerationStructure{};
            public: const int32_t RaytracingMaxrRayGenerationShaderThreads{};
            public: const int32_t RaytracingMaxShaderRecordStride{};
            public: const int32_t RaytracingShaderRecordByteAlignment{};
            public: const int32_t RaytracingShaderTableByteAlignment{};
            public: const int32_t RaytracingTransform3x4ByteAlignment{};

            public: const int32_t RequestBlendObjectCountPerDevice{};
            public: const int32_t RequestBufferResourceTexelCount2ToExp{};
            public: const int32_t RequestConstantBufferElementCount{};
            public: const int32_t RequestDepthStencilObjectCountPerDevice{};
            public: const int32_t RequestDrawIndexedIndexCount2ToExp{};
            public: const int32_t RequestDrawVertexCount2ToExp{};
            public: const int32_t RequestFilteringHardwareAddressableResourceDimension{};
            public: const int32_t RequestGeometryShaderInvocation32BitOutputComponentLimit{};
            public: const int32_t RequestImmediateConstantBufferElementCount{};
            public: const int32_t RequestMaxAnisotropy{};
            public: const int32_t RequestMipLevels{};
            public: const int32_t RequestMultiElementStructureSizeInBytes{};
            public: const int32_t RequestRasterizerObjectCountPerDevice{};
            public: const int32_t RequestRenderToBufferWindowWidth{};
            public: const int32_t RequestResourceSizeInMegaBytesExpressionATerm{};
            public: const float RequestResourceSizeInMegaBytesExpressionBTerm{};
            public: const int32_t RequestResourceSizeInMegaBytesExpressionCTerm{};
            public: const int32_t RequestResourceViewCountPerDevice2ToExp{};
            public: const int32_t RequestSamplerObjectCountPerDevice{};
            public: const int32_t RequestSubResources{};
            public: const int32_t RequestTexture1DArrayAxisDimension{};
            public: const int32_t RequestTexture1DUDimension{};
            public: const int32_t RequestTexture2DArrayAxisDimension{};
            public: const int32_t RequestTexture2DUOrVDimension{};
            public: const int32_t RequestTexture3DUVOrWDimension{};
            public: const int32_t RequestTextureCubeDimension{};

            public: const int32_t ResInfoInstructionMissingComponentReturnValue{};

            /// <unmanaged>D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES</unmanaged>
            public: const uint32_t ResourceBarrierAllSubResources{};

            public: const int32_t RSSetShadingRateCombinerCount{};

            public: const uint32_t ShaderIdentifierSizeInBytes{};
            public: const int32_t ShaderMajorVersion{};
            public: const int32_t ShaderMaxInstances{};
            public: const int32_t ShaderMaxInterfaces{};
            public: const int32_t ShaderMaxInterfaceCallSites{};
            public: const int32_t ShaderMaxTypes{};
            public: const int32_t ShaderMinorVersion{};

            public: const int32_t ShiftInstructionPadValue{};
            public: const int32_t ShiftInstructionShiftValueBitCount{};

            public: const int32_t SimultaneousRenderTargetCount{};

            public: const uint32_t SmallMsaaResourcePlacementAlignment{};
            public: const uint32_t SmallResourcePlacementAlignment{};

            public: const int32_t StreamOutputBufferMaxStrideInBytes{};
            public: const int32_t StreamOutputBufferMaxWriteWindowInBytes{};
            public: const int32_t StreamOutputBufferSlotCount{};
            public: const uint32_t StreamOutputDdiRegisterIndexDenotingGap{};
            public: const uint32_t StreamOutputNoRasterizedStream{};
            public: const int32_t StreamOutputOutputComponentCount{};
            public: const int32_t StreamOutputStreamCount{};

            public: const int32_t SpecDateDay{};
            public: const int32_t SpecDateMonth{};
            public: const int32_t SpecDateYes{};
            public: const float SpecVersion{};

            public: const float SrgbGamma{};
            public: const float SrgbToFloatDenominator1{};
            public: const float SrgbToFloatDenominator2{};
            public: const float SrgbToFloatExponent{};
            public: const float SrgbToFloatOffset{};
            public: const float SrgbToFloatThreshold{};
            public: const float SrgbToFloatToleranceInUlp{};

            public: const int32_t StandardComponentBitCount{};
            public: const int32_t StandardComponentBitCountDoubled{};
            public: const int32_t StandardMaximumElementAlignmentByteMultiple{};
            public: const int32_t StandardPixelComponentCount{};
            public: const int32_t StandardPixelElementCount{};
            public: const int32_t StandardVectorSize{};
            public: const int32_t StandardVertexElementCount{};
            public: const int32_t StandardVertexTotalComponentCount{};

            public: const int32_t SubpixelFractionalBitCount{};
            public: const int32_t SubtexelFractionalBitCount{};

            public: const uint32_t SystemReservedRegisterSpaceValuesEnd{};
            public: const uint32_t SystemReservedRegisterSpaceValuesStart{};

            public: const int32_t TessellatorMaxEvenTessellationFactor{};
            public: const int32_t TessellatorMaxIsolineDensityTessellationFactor{};
            public: const int32_t TessellatorMaxOddTessellationFactor{};
            public: const int32_t TessellatorMaxTessellationFactor{};
            public: const int32_t TessellatorMinEvenTessellationFactor{};
            public: const int32_t TessellatorMinIsolineDensityTessellationFactor{};
            public: const int32_t TessellatorMinOddTessellationFactor{};

            public: const int32_t TexelAddressRangeBitCount{};

            public: const int32_t TextureDataPitchAlignment{};
            public: const int32_t TextureDataPlacementAlignment{};

            public: const int32_t TiledResourceTileSizeBytes{};

            public: const int32_t TrackedWorkloadMaxInstances{};

            public: const int32_t UnorderedAccessViewCounterPlacementAlignment{};

            public: const int32_t UnorderedAccessViewSlotCount{};

            public: const int32_t UnboundMemoryAccessResult{};

            public: const int32_t VideoDecodeMaxArguments{};
            public: const int32_t VideoDecodeMaxHistogramComponents{};
            public: const int32_t VideoDecodeMinBitStreamOffsetAlignment{};
            public: const int32_t VideoDecodeMinHistogramOffsetAlignment{};
            public: const uint32_t VideoDecodeStatusMacroblocksAffectedUnknown{};
            public: const int32_t VideoProcessMaxFilter{};
            public: const int32_t VideoProcessStereoViews{};

            public: const int32_t ViewportAndScissorRectMaxIndex{};
            public: const int32_t ViewportAndScissorRectObjectCountPerPipeline{};
            public: const int32_t ViewportBoundsMax{};
            public: const int32_t ViewportBoundsMin{};

            public: const int32_t VertexShaderInputRegisterComponents{};
            public: const int32_t VertexShaderInputRegisterComponentBitCount{};
            public: const int32_t VertexShaderInputRegisterCount{};
            public: const int32_t VertexShaderInputRegisterReadsPerInstances{};
            public: const int32_t VertexShaderInputRegisterReadPorts{};
            public: const int32_t VertexShaderOutputRegisterComponent{};
            public: const int32_t VertexShaderOutputRegisterComponentBitCount{};
            public: const int32_t VertexShaderOutputRegisterCount{};

            public: const int32_t WhqlContextCountForResourceLimit{};
            public: const int32_t WhqlDrawIndexedIndexCount2ToExp{};
            public: const int32_t WhqlDrawVertexCount2ToExp{};
        }


    }
}

#endif // VORTICE_CONSTANTS_H