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
        publicstruct ActivationIdentityOperatorDescription : : IFusableActivationOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ActivationIdentity; }
                public: std::optional<TensorDescription> m_inputTensor{};
                public: std::optional<TensorDescription> m_outputTensor{};
                publicoverride std::string ToString(void) $"ActivationIdentity";
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
                return new(void);
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
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ACTIVATIONIDENTITYOPERATORDESCRIPTION_H