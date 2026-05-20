// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H
#define VORTICE_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct QuantizedLinearConvolutionOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.QuantizedLinearConvolution; }

                TensorDescription m_inputTensor{};

                TensorDescription m_inputScaleTensor{};

                std::optional<TensorDescription> m_inputZeroPointTensor{};

                TensorDescription m_filterTensor{};

                TensorDescription m_filterScaleTensor{};

                std::optional<TensorDescription> m_filterZeroPointTensor{};

                std::optional<TensorDescription> m_biasTensor{};

                TensorDescription m_outputScaleTensor{};

                std::optional<TensorDescription> m_outputZeroPointTensor{};

                TensorDescription m_outputTensor{};

                public int[] Strides { get; set; }

                public int[] Dilations { get; set; }

                public int[] StartPadding { get; set; }

                public int[] EndPadding { get; set; }

                int32_t m_groupCount{};

                override std::string ToString(void)
        { $"QuantizedLinearConvolution: GroupCount={GroupCount}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* InputScaleTensor{};
                public: void* InputZeroPointTensor{};
                public: void* FilterTensor{};
                public: void* FilterScaleTensor{};
                public: void* FilterZeroPointTensor{};
                public: void* BiasTensor{};
                public: void* OutputScaleTensor{};
                public: void* OutputZeroPointTensor{};
                public: void* OutputTensor{};
                public: int32_t DimensionCount{};
                public: void* Strides{};
                public: void* Dilations{};
                public: void* StartPadding{};
                public: void* EndPadding{};
                public: int32_t GroupCount{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->InputScaleTensor = InputScaleTensor.__MarshalAlloc();
                @ref->InputZeroPointTensor = (InputZeroPointTensor != nullptr) ? InputZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->FilterTensor = FilterTensor.__MarshalAlloc();
                @ref->FilterScaleTensor = FilterScaleTensor.__MarshalAlloc();
                @ref->FilterZeroPointTensor = (FilterZeroPointTensor != nullptr) ? FilterZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->BiasTensor = (BiasTensor != nullptr) ? BiasTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputScaleTensor = OutputScaleTensor.__MarshalAlloc();
                @ref->OutputZeroPointTensor = (OutputZeroPointTensor != nullptr) ? OutputZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

                var dimensionCount{};
                if (Dilations.Length != dimensionCount) { throw new IndexOutOfRangeException("Dilations must have the same length as Strides.") = 0; }
                if (StartPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("StartPadding must have the same length as Strides.") = 0; }
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must have the same length as Strides.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                @ref->Dilations = new(UnsafeUtilities.AllocWithData(Dilations));
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                @ref->GroupCount = GroupCount;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                InputScaleTensor.__MarshalFree(ref @ref->InputScaleTensor);

                if (InputZeroPointTensor != nullptr)
                {
                    InputZeroPointTensor.Value.__MarshalFree(ref @ref->InputZeroPointTensor);
                }

                FilterTensor.__MarshalFree(ref @ref->FilterTensor);
                FilterScaleTensor.__MarshalFree(ref @ref->FilterScaleTensor);

                if (FilterZeroPointTensor != nullptr)
                {
                    FilterZeroPointTensor.Value.__MarshalFree(ref @ref->FilterZeroPointTensor);
                }

                if (BiasTensor != nullptr)
                {
                    BiasTensor.Value.__MarshalFree(ref @ref->BiasTensor);
                }

                OutputScaleTensor.__MarshalFree(ref @ref->OutputScaleTensor);

                if (OutputZeroPointTensor != nullptr)
                {
                    OutputZeroPointTensor.Value.__MarshalFree(ref @ref->OutputZeroPointTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->Dilations);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(QuantizedLinearConvolutionOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_QUANTIZEDLINEARCONVOLUTIONOPERATORDESCRIPTION_H