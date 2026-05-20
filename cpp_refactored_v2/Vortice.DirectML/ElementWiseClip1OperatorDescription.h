// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISECLIP1OPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISECLIP1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ElementWiseClip1OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ElementWiseClip1; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: std::optional<ScaleBias> m_scaleBias{};
                public: TensorDataType m_minMaxDataType{};
                public: ScalarUnion m_minimum{};
                public: ScalarUnion m_maximum{};
                publicoverride std::string ToString(void) $"ElementWiseClip1: MinMaxDataType={MinMaxDataType} Minimum={Minimum} Maximum={Maximum}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: void* ScaleBias{};
                public: TensorDataType MinMaxDataType{};
                public: ScalarUnion Minimum{};
                public: ScalarUnion Maximum{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ScaleBias = (ScaleBias != nullptr) ? new(UnsafeUtilities.AllocWithData(ScaleBias.Value)) : IntPtr.Zero;
                @ref->MinMaxDataType = MinMaxDataType;
                @ref->Minimum = Minimum;
                @ref->Maximum = Maximum;
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
            public static implicit operator OperatorDescription(ElementWiseClip1OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ELEMENTWISECLIP1OPERATORDESCRIPTION_H