// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ROIALIGNGRADOPERATORDESCRIPTION_H
#define VORTICE_ROIALIGNGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct RoiAlignGradOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.RoiAlignGrad; }

                std::optional<TensorDescription> m_inputTensor{};

                TensorDescription m_inputGradientTensor{};

                TensorDescription m_roiTensor{};

                TensorDescription m_batchIndicesTensor{};

                std::optional<TensorDescription> m_outputGradientTensor{};

                std::optional<TensorDescription> m_outputROIGradientTensor{};

                ReduceFunction m_reductionFunction{};

                InterpolationMode m_interpolationMode{};

                float m_spatialScaleX{};

                float m_spatialScaleY{};

                float m_inputPixelOffset{};

                float m_outputPixelOffset{};

                int32_t m_minimumSamplesPerOutput{};

                int32_t m_maximumSamplesPerOutput{};

                bool m_alignRegionsToCorners{};

                override std::string ToString(void)
        { $"RoiAlignGrad: ReductionFunction={ReductionFunction} InterpolationMode={InterpolationMode} SpatialScaleX={SpatialScaleX} SpatialScaleY={SpatialScaleY} InputPixelOffset={InputPixelOffset} OutputPixelOffset={OutputPixelOffset} MinimumSamplesPerOutput={MinimumSamplesPerOutput} MaximumSamplesPerOutput={MaximumSamplesPerOutput} AlignRegionsToCorners={AlignRegionsToCorners}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* InputGradientTensor{};
                public: void* RoiTensor{};
                public: void* BatchIndicesTensor{};
                public: void* OutputGradientTensor{};
                public: void* OutputROIGradientTensor{};
                public: ReduceFunction ReductionFunction{};
                public: InterpolationMode InterpolationMode{};
                public: float SpatialScaleX{};
                public: float SpatialScaleY{};
                public: float InputPixelOffset{};
                public: float OutputPixelOffset{};
                public: int32_t MinimumSamplesPerOutput{};
                public: int32_t MaximumSamplesPerOutput{};
                public: bool AlignRegionsToCorners{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = (InputTensor != nullptr) ? InputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->RoiTensor = RoiTensor.__MarshalAlloc();
                @ref->BatchIndicesTensor = BatchIndicesTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = (OutputGradientTensor != nullptr) ? OutputGradientTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputROIGradientTensor = (OutputROIGradientTensor != nullptr) ? OutputROIGradientTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->ReductionFunction = ReductionFunction;
                @ref->InterpolationMode = InterpolationMode;
                @ref->SpatialScaleX = SpatialScaleX;
                @ref->SpatialScaleY = SpatialScaleY;
                @ref->InputPixelOffset = InputPixelOffset;
                @ref->OutputPixelOffset = OutputPixelOffset;
                @ref->MinimumSamplesPerOutput = MinimumSamplesPerOutput;
                @ref->MaximumSamplesPerOutput = MaximumSamplesPerOutput;
                @ref->AlignRegionsToCorners = AlignRegionsToCorners;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                if (InputTensor != nullptr)
                {
                    InputTensor.Value.__MarshalFree(ref @ref->InputTensor);
                }

                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                RoiTensor.__MarshalFree(ref @ref->RoiTensor);
                BatchIndicesTensor.__MarshalFree(ref @ref->BatchIndicesTensor);

                if (OutputGradientTensor != nullptr)
                {
                    OutputGradientTensor.Value.__MarshalFree(ref @ref->OutputGradientTensor);
                }

                if (OutputROIGradientTensor != nullptr)
                {
                    OutputROIGradientTensor.Value.__MarshalFree(ref @ref->OutputROIGradientTensor);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(RoiAlignGradOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ROIALIGNGRADOPERATORDESCRIPTION_H