// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISEMAXOPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISEMAXOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ElementWiseMaxOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ElementWiseMax; }

                TensorDescription m_aTensor{};

                TensorDescription m_bTensor{};

                TensorDescription m_outputTensor{};

                override std::string ToString(void)
        { $"ElementWiseMax";
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

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                ATensor.__MarshalFree(ref @ref->ATensor);
                BTensor.__MarshalFree(ref @ref->BTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ElementWiseMaxOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ELEMENTWISEMAXOPERATORDESCRIPTION_H