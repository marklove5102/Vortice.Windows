// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_NONZEROCOORDINATESOPERATORDESCRIPTION_H
#define VORTICE_NONZEROCOORDINATESOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct NonzeroCoordinatesOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.NonzeroCoordinates; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputCountTensor{};

                TensorDescription m_outputCoordinatesTensor{};

                override std::string ToString(void)
        { $"NonzeroCoordinates";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputCountTensor{};
                public: void* OutputCoordinatesTensor{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputCountTensor = OutputCountTensor.__MarshalAlloc();
                @ref->OutputCoordinatesTensor = OutputCoordinatesTensor.__MarshalAlloc();

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputCountTensor.__MarshalFree(ref @ref->OutputCountTensor);
                OutputCoordinatesTensor.__MarshalFree(ref @ref->OutputCoordinatesTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(NonzeroCoordinatesOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_NONZEROCOORDINATESOPERATORDESCRIPTION_H