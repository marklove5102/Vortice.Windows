// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ROIALIGNOPERATORDESCRIPTION_H
#define VORTICE_ROIALIGNOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct RoiAlignOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.RoiAlign; }

                TensorDescription m_inputTensor{};

                TensorDescription m_roiTensor{};

                TensorDescription m_batchIndicesTensor{};

                TensorDescription m_outputTensor{};

                ReduceFunction m_reductionFunction{};

                InterpolationMode m_interpolationMode{};

                float m_spatialScaleX{};

                float m_spatialScaleY{};

                float m_outOfBoundsInputValue{};

                int32_t m_minimumSamplesPerOutput{};

                int32_t m_maximumSamplesPerOutput{};

                override std::string ToString(void)
        { $"RoiAlign: ReductionFunction={ReductionFunction} InterpolationMode={InterpolationMode} SpatialScaleX={SpatialScaleX} SpatialScaleY={SpatialScaleY} OutOfBoundsInputValue={OutOfBoundsInputValue} MinimumSamplesPerOutput={MinimumSamplesPerOutput} MaximumSamplesPerOutput={MaximumSamplesPerOutput}";
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
                public: float OutOfBoundsInputValue{};
                public: int32_t MinimumSamplesPerOutput{};
                public: int32_t MaximumSamplesPerOutput{};
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
                @ref->OutOfBoundsInputValue = OutOfBoundsInputValue;
                @ref->MinimumSamplesPerOutput = MinimumSamplesPerOutput;
                @ref->MaximumSamplesPerOutput = MaximumSamplesPerOutput;

                return new(@ref param) = 0;
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

            public static implicit operator OperatorDescription(RoiAlignOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ROIALIGNOPERATORDESCRIPTION_H