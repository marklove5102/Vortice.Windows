// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISEPOWOPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISEPOWOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ElementWisePowOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ElementWisePow; }

                TensorDescription m_inputTensor{};

                TensorDescription m_exponentTensor{};

                TensorDescription m_outputTensor{};

                std::optional<ScaleBias> m_scaleBias{};

                override std::string ToString(void)
        { $"ElementWisePow";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* ExponentTensor{};
                public: void* OutputTensor{};
                public: void* ScaleBias{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->ExponentTensor = ExponentTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ScaleBias = (ScaleBias != nullptr) ? new(UnsafeUtilities.AllocWithData(ScaleBias.Value)) : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                ExponentTensor.__MarshalFree(ref @ref->ExponentTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                if (@ref->ScaleBias != IntPtr.Zero)
                {
                    UnsafeUtilities.Free(@ref->ScaleBias);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ElementWisePowOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ELEMENTWISEPOWOPERATORDESCRIPTION_H