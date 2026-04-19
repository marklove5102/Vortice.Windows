// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H
#define VORTICE_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ConvolutionIntegerOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ConvolutionInteger; }

                TensorDescription m_inputTensor{};

                std::optional<TensorDescription> m_inputZeroPointTensor{};

                TensorDescription m_filterTensor{};

                std::optional<TensorDescription> m_filterZeroPointTensor{};

                TensorDescription m_outputTensor{};

                public int[] Strides { get; set; }

                public int[] Dilations { get; set; }

                public int[] StartPadding { get; set; }

                public int[] EndPadding { get; set; }

                int32_t m_groupCount{};

                override std::string ToString(void)
        { $"ConvolutionInteger: GroupCount={GroupCount}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* InputZeroPointTensor{};
                public: void* FilterTensor{};
                public: void* FilterZeroPointTensor{};
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
                @ref->InputZeroPointTensor = (InputZeroPointTensor != nullptr) ? InputZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->FilterTensor = FilterTensor.__MarshalAlloc();
                @ref->FilterZeroPointTensor = (FilterZeroPointTensor != nullptr) ? FilterZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
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

                if (InputZeroPointTensor != nullptr)
                {
                    InputZeroPointTensor.Value.__MarshalFree(ref @ref->InputZeroPointTensor);
                }

                FilterTensor.__MarshalFree(ref @ref->FilterTensor);

                if (FilterZeroPointTensor != nullptr)
                {
                    FilterZeroPointTensor.Value.__MarshalFree(ref @ref->FilterZeroPointTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->Dilations);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ConvolutionIntegerOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_CONVOLUTIONINTEGEROPERATORDESCRIPTION_H