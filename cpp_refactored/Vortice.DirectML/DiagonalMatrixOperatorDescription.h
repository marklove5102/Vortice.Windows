// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIAGONALMATRIXOPERATORDESCRIPTION_H
#define VORTICE_DIAGONALMATRIXOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct DiagonalMatrixOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.DiagonalMatrix; }

                TensorDescription m_outputTensor{};

                int32_t m_offset{};

                float m_value{};

                override std::string ToString(void)
        { $"DiagonalMatrix: Offset={Offset} Value={Value}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* OutputTensor{};
                public: int32_t Offset{};
                public: float Value{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Offset = Offset;
                @ref->Value = Value;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(DiagonalMatrixOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_DIAGONALMATRIXOPERATORDESCRIPTION_H