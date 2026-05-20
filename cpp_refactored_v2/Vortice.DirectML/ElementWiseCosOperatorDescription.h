// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISECOSOPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISECOSOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ElementWiseCosOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ElementWiseCos; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: std::optional<ScaleBias> m_scaleBias{};
                publicoverride std::string ToString(void) $"ElementWiseCos";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: void* ScaleBias{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ScaleBias = (ScaleBias != nullptr) ? new(UnsafeUtilities.AllocWithData(ScaleBias.Value)) : IntPtr.Zero;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                if (@ref->ScaleBias != IntPtr.Zero)
                {
                    UnsafeUtilities.Free(@ref->ScaleBias);
                }
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(ElementWiseCosOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ELEMENTWISECOSOPERATORDESCRIPTION_H