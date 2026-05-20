// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEPTHTOSPACE1OPERATORDESCRIPTION_H
#define VORTICE_DEPTHTOSPACE1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct DepthToSpace1OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.DepthToSpace1; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: int32_t m_blockSize{};
                public: DepthSpaceOrder m_order{};
                publicoverride std::string ToString(void) $"DepthToSpace1: BlockSize={BlockSize} Order={Order}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t BlockSize{};
                public: DepthSpaceOrder Order{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->BlockSize = BlockSize;
                @ref->Order = Order;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(DepthToSpace1OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_DEPTHTOSPACE1OPERATORDESCRIPTION_H