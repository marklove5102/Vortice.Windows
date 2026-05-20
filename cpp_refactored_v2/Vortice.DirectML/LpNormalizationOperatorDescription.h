// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LPNORMALIZATIONOPERATORDESCRIPTION_H
#define VORTICE_LPNORMALIZATIONOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct LpNormalizationOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.LpNormalization; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: int32_t m_axis{};
                public: float m_epsilon{};
                public: int32_t m_p{};
                publicoverride std::string ToString(void) $"LpNormalization: Axis={Axis} Epsilon={Epsilon} P={P}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
                public: float Epsilon{};
                public: int32_t P{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;
                @ref->Epsilon = Epsilon;
                @ref->P = P;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(LpNormalizationOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_LPNORMALIZATIONOPERATORDESCRIPTION_H