// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_FILLVALUECONSTANTOPERATORDESCRIPTION_H
#define VORTICE_FILLVALUECONSTANTOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct FillValueConstantOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.FillValueConstant; }

                TensorDescription m_outputTensor{};

                TensorDataType m_valueDataType{};

                ScalarUnion m_value{};

                override std::string ToString(void)
        { $"FillValueConstant: ValueDataType={ValueDataType} Value={Value}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* OutputTensor{};
                public: TensorDataType ValueDataType{};
                public: ScalarUnion Value{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ValueDataType = ValueDataType;
                @ref->Value = Value;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(FillValueConstantOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_FILLVALUECONSTANTOPERATORDESCRIPTION_H