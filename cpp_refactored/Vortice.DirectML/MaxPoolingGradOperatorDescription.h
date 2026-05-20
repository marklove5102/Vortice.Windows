// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MAXPOOLINGGRADOPERATORDESCRIPTION_H
#define VORTICE_MAXPOOLINGGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct MaxPoolingGradOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.MaxPoolingGrad; }

                TensorDescription m_inputTensor{};

                TensorDescription m_inputGradientTensor{};

                TensorDescription m_outputGradientTensor{};

                public int[] Strides { get; set; }

                public int[] WindowSize { get; set; }

                public int[] StartPadding { get; set; }

                public int[] EndPadding { get; set; }

                public int[] Dilations { get; set; }

                override std::string ToString(void)
        { $"MaxPoolingGrad";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* InputGradientTensor{};
                public: void* OutputGradientTensor{};
                public: int32_t DimensionCount{};
                public: void* Strides{};
                public: void* WindowSize{};
                public: void* StartPadding{};
                public: void* EndPadding{};
                public: void* Dilations{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = OutputGradientTensor.__MarshalAlloc();

                var dimensionCount{};
                if (WindowSize.Length != dimensionCount) { throw new IndexOutOfRangeException("WindowSize must have the same length as Strides.") = 0; }
                if (StartPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("StartPadding must have the same length as Strides.") = 0; }
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must have the same length as Strides.") = 0; }
                if (Dilations.Length != dimensionCount) { throw new IndexOutOfRangeException("Dilations must have the same length as Strides.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                @ref->WindowSize = new(UnsafeUtilities.AllocWithData(WindowSize));
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                @ref->Dilations = new(UnsafeUtilities.AllocWithData(Dilations));

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                OutputGradientTensor.__MarshalFree(ref @ref->OutputGradientTensor);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->WindowSize);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);
                UnsafeUtilities.Free(@ref->Dilations);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(MaxPoolingGradOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_MAXPOOLINGGRADOPERATORDESCRIPTION_H