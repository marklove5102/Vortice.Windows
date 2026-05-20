// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ROIALIGN1OPERATORDESCRIPTION_H
#define VORTICE_ROIALIGN1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct RoiAlign1OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.RoiAlign1; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_roiTensor{};
                public: TensorDescription m_batchIndicesTensor{};
                public: TensorDescription m_outputTensor{};
                public: ReduceFunction m_reductionFunction{};
                public: InterpolationMode m_interpolationMode{};
                public: float m_spatialScaleX{};
                public: float m_spatialScaleY{};
                public: float m_inputPixelOffset{};
                public: float m_outputPixelOffset{};
                public: float m_outOfBoundsInputValue{};
                public: int32_t m_minimumSamplesPerOutput{};
                public: int32_t m_maximumSamplesPerOutput{};
                public: bool m_alignRegionsToCorners{};
                publicoverride std::string ToString(void) $"RoiAlign1: ReductionFunction={ReductionFunction} InterpolationMode={InterpolationMode} SpatialScaleX={SpatialScaleX} SpatialScaleY={SpatialScaleY} InputPixelOffset={InputPixelOffset} OutputPixelOffset={OutputPixelOffset} OutOfBoundsInputValue={OutOfBoundsInputValue} MinimumSamplesPerOutput={MinimumSamplesPerOutput} MaximumSamplesPerOutput={MaximumSamplesPerOutput} AlignRegionsToCorners={AlignRegionsToCorners}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* RoiTensor{};
                public: void* BatchIndicesTensor{};
                public: void* OutputTensor{};
                public: ReduceFunction ReductionFunction{};
                public: InterpolationMode InterpolationMode{};
                public: float SpatialScaleX{};
                public: float SpatialScaleY{};
                public: float InputPixelOffset{};
                public: float OutputPixelOffset{};
                public: float OutOfBoundsInputValue{};
                public: int32_t MinimumSamplesPerOutput{};
                public: int32_t MaximumSamplesPerOutput{};
                public: bool AlignRegionsToCorners{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->RoiTensor = RoiTensor.__MarshalAlloc();
                @ref->BatchIndicesTensor = BatchIndicesTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ReductionFunction = ReductionFunction;
                @ref->InterpolationMode = InterpolationMode;
                @ref->SpatialScaleX = SpatialScaleX;
                @ref->SpatialScaleY = SpatialScaleY;
                @ref->InputPixelOffset = InputPixelOffset;
                @ref->OutputPixelOffset = OutputPixelOffset;
                @ref->OutOfBoundsInputValue = OutOfBoundsInputValue;
                @ref->MinimumSamplesPerOutput = MinimumSamplesPerOutput;
                @ref->MaximumSamplesPerOutput = MaximumSamplesPerOutput;
                @ref->AlignRegionsToCorners = AlignRegionsToCorners;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                RoiTensor.__MarshalFree(ref @ref->RoiTensor);
                BatchIndicesTensor.__MarshalFree(ref @ref->BatchIndicesTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(RoiAlign1OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ROIALIGN1OPERATORDESCRIPTION_H