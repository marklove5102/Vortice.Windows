// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CONVOLUTIONOPERATORDESCRIPTION_H
#define VORTICE_CONVOLUTIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ConvolutionOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Convolution; }

                TensorDescription m_inputTensor{};

                TensorDescription m_filterTensor{};

                std::optional<TensorDescription> m_biasTensor{};

                TensorDescription m_outputTensor{};

                ConvolutionMode m_mode{};

                ConvolutionDirection m_direction{};

                public int[] Strides { get; set; }

                public int[] Dilations { get; set; }

                public int[] StartPadding { get; set; }

                public int[] EndPadding { get; set; }

                public int[] OutputPadding { get; set; }

                int32_t m_groupCount{};

                std::optional<OperatorDescription> m_fusedActivation{};

                override std::string ToString(void)
        { $"Convolution: Mode={Mode} Direction={Direction} GroupCount={GroupCount}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* FilterTensor{};
                public: void* BiasTensor{};
                public: void* OutputTensor{};
                public: ConvolutionMode Mode{};
                public: ConvolutionDirection Direction{};
                public: int32_t DimensionCount{};
                public: void* Strides{};
                public: void* Dilations{};
                public: void* StartPadding{};
                public: void* EndPadding{};
                public: void* OutputPadding{};
                public: int32_t GroupCount{};
                public: void* FusedActivation{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->FilterTensor = FilterTensor.__MarshalAlloc();
                @ref->BiasTensor = (BiasTensor != nullptr) ? BiasTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Mode = Mode;
                @ref->Direction = Direction;

                var dimensionCount{};
                if (Dilations.Length != dimensionCount) { throw new IndexOutOfRangeException("Dilations must have the same length as Strides.") = 0; }
                if (StartPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("StartPadding must have the same length as Strides.") = 0; }
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must have the same length as Strides.") = 0; }
                if (OutputPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("OutputPadding must have the same length as Strides.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                @ref->Dilations = new(UnsafeUtilities.AllocWithData(Dilations));
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                @ref->OutputPadding = new(UnsafeUtilities.AllocWithData(OutputPadding));
                @ref->GroupCount = GroupCount;
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                FilterTensor.__MarshalFree(ref @ref->FilterTensor);

                if (BiasTensor != nullptr)
                {
                    BiasTensor.Value.__MarshalFree(ref @ref->BiasTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->Dilations);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);
                UnsafeUtilities.Free(@ref->OutputPadding);

                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ConvolutionOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_CONVOLUTIONOPERATORDESCRIPTION_H