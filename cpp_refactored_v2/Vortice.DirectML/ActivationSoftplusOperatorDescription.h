// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ACTIVATIONSOFTPLUSOPERATORDESCRIPTION_H
#define VORTICE_ACTIVATIONSOFTPLUSOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ActivationSoftplusOperatorDescription : : IFusableActivationOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ActivationSoftplus; }
                public: std::optional<TensorDescription> m_inputTensor{};
                public: std::optional<TensorDescription> m_outputTensor{};
                public: float m_steepness{};
                publicoverride std::string ToString(void) $"ActivationSoftplus: Steepness={Steepness}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: float Steepness{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = (InputTensor != nullptr) ? InputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = (OutputTensor != nullptr) ? OutputTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->Steepness = Steepness;
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
            public static implicit operator OperatorDescription(ActivationSoftplusOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_ACTIVATIONSOFTPLUSOPERATORDESCRIPTION_H