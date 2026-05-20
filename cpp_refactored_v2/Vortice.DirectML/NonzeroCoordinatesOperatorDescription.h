// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_NONZEROCOORDINATESOPERATORDESCRIPTION_H
#define VORTICE_NONZEROCOORDINATESOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct NonzeroCoordinatesOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.NonzeroCoordinates; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputCountTensor{};
                public: TensorDescription m_outputCoordinatesTensor{};
                publicoverride std::string ToString(void) $"NonzeroCoordinates";
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
                return new(void);
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
                return new(void);
            }
        }

    }
}

#endif // VORTICE_NONZEROCOORDINATESOPERATORDESCRIPTION_H