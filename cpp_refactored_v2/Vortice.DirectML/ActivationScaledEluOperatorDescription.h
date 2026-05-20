// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H
#define VORTICE_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ActivationScaledEluOperatorDescription : : IFusableActivationOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ActivationScaledElu; }
                public: std::optional<TensorDescription> m_inputTensor{};
                public: std::optional<TensorDescription> m_outputTensor{};
                public: float m_alpha{};
                public: float m_gamma{};
                publicoverride std::string ToString(void) $"ActivationScaledElu: Alpha={Alpha} Gamma={Gamma}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: float Alpha{};
                public: float Gamma{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = (InputTensor != nullptr) ? InputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = (OutputTensor != nullptr) ? OutputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->Alpha = Alpha;
                @ref->Gamma = Gamma;
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
            public static implicit operator OperatorDescription(ActivationScaledEluOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ACTIVATIONSCALEDELUOPERATORDESCRIPTION_H