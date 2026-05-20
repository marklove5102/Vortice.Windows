// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISEADD1OPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISEADD1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ElementWiseAdd1OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ElementWiseAdd1; }
                public: TensorDescription m_aTensor{};
                public: TensorDescription m_bTensor{};
                public: TensorDescription m_outputTensor{};
                public: std::optional<OperatorDescription> m_fusedActivation{};
                publicoverride std::string ToString(void) $"ElementWiseAdd1";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* ATensor{};
                public: void* BTensor{};
                public: void* OutputTensor{};
                public: void* FusedActivation{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->ATensor = ATensor.__MarshalAlloc();
                @ref->BTensor = BTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                ATensor.__MarshalFree(ref @ref->ATensor);
                BTensor.__MarshalFree(ref @ref->BTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(ElementWiseAdd1OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ELEMENTWISEADD1OPERATORDESCRIPTION_H