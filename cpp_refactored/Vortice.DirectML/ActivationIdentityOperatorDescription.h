// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ACTIVATIONIDENTITYOPERATORDESCRIPTION_H
#define VORTICE_ACTIVATIONIDENTITYOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ActivationIdentityOperatorDescription : public : IFusableActivationOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ActivationIdentity; }

                std::optional<TensorDescription> m_inputTensor{};

                std::optional<TensorDescription> m_outputTensor{};

                override std::string ToString(void)
        { $"ActivationIdentity";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = (InputTensor != nullptr) ? InputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = (OutputTensor != nullptr) ? OutputTensor.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                if (InputTensor != nullptr)
                {
                    InputTensor.Value.__MarshalFree(ref @ref->InputTensor);
                }

                if (OutputTensor != nullptr)
                {
                    OutputTensor.Value.__MarshalFree(ref @ref->OutputTensor);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ActivationIdentityOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ACTIVATIONIDENTITYOPERATORDESCRIPTION_H