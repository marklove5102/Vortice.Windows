// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PADDING1OPERATORDESCRIPTION_H
#define VORTICE_PADDING1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct Padding1OperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Padding1; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                PaddingMode m_paddingMode{};

                TensorDataType m_paddingValueDataType{};

                ScalarUnion m_paddingValue{};

                public int[] StartPadding { get; set; }

                public int[] EndPadding { get; set; }

                override std::string ToString(void)
        { $"Padding1: PaddingMode={PaddingMode} PaddingValueDataType={PaddingValueDataType} PaddingValue={PaddingValue}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: PaddingMode PaddingMode{};
                public: TensorDataType PaddingValueDataType{};
                public: ScalarUnion PaddingValue{};
                public: int32_t DimensionCount{};
                public: void* StartPadding{};
                public: void* EndPadding{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->PaddingMode = PaddingMode;
                @ref->PaddingValueDataType = PaddingValueDataType;
                @ref->PaddingValue = PaddingValue;

                var dimensionCount{};
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must have the same length as StartPadding.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(Padding1OperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_PADDING1OPERATORDESCRIPTION_H