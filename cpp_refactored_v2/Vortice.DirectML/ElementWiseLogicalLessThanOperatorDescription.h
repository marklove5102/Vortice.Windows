// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISELOGICALLESSTHANOPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISELOGICALLESSTHANOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ElementWiseLogicalLessThanOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ElementWiseLogicalLessThan; }
                public: TensorDescription m_aTensor{};
                public: TensorDescription m_bTensor{};
                public: TensorDescription m_outputTensor{};
                publicoverride std::string ToString(void) $"ElementWiseLogicalLessThan";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* ATensor{};
                public: void* BTensor{};
                public: void* OutputTensor{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->ATensor = ATensor.__MarshalAlloc();
                @ref->BTensor = BTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                ATensor.__MarshalFree(ref @ref->ATensor);
                BTensor.__MarshalFree(ref @ref->BTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(ElementWiseLogicalLessThanOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ELEMENTWISELOGICALLESSTHANOPERATORDESCRIPTION_H