// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ACTIVATIONPARAMETRICSOFTPLUSOPERATORDESCRIPTION_H
#define VORTICE_ACTIVATIONPARAMETRICSOFTPLUSOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ActivationParametricSoftplusOperatorDescription : public : IFusableActivationOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ActivationParametricSoftplus; }

                std::optional<TensorDescription> m_inputTensor{};

                std::optional<TensorDescription> m_outputTensor{};

                float m_alpha{};

                float m_beta{};

                override std::string ToString(void)
        { $"ActivationParametricSoftplus: Alpha={Alpha} Beta={Beta}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: float Alpha{};
                public: float Beta{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = (InputTensor != nullptr) ? InputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = (OutputTensor != nullptr) ? OutputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->Alpha = Alpha;
                @ref->Beta = Beta;

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

            public static implicit operator OperatorDescription(ActivationParametricSoftplusOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ACTIVATIONPARAMETRICSOFTPLUSOPERATORDESCRIPTION_H