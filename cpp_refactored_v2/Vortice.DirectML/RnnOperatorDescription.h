// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RNNOPERATORDESCRIPTION_H
#define VORTICE_RNNOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct RnnOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Rnn; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_weightTensor{};
                public: TensorDescription m_recurrenceTensor{};
                public: std::optional<TensorDescription> m_biasTensor{};
                public: std::optional<TensorDescription> m_hiddenInitializerTensor{};
                public: std::optional<TensorDescription> m_sequenceLengthsTensor{};
                public: std::optional<TensorDescription> m_outputSequenceTensor{};
                public: std::optional<TensorDescription> m_outputSingleTensor{};
                public OperatorDescription[] Activations { get; set; }
                public: RecurrentNetworkDirection m_direction{};
                publicoverride std::string ToString(void) $"Rnn: Direction={Direction}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* WeightTensor{};
                public: void* RecurrenceTensor{};
                public: void* BiasTensor{};
                public: void* HiddenInitializerTensor{};
                public: void* SequenceLengthsTensor{};
                public: void* OutputSequenceTensor{};
                public: void* OutputSingleTensor{};
                public: int32_t ActivationDescCount{};
                public: void* Activations{};
                public: RecurrentNetworkDirection Direction{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->WeightTensor = WeightTensor.__MarshalAlloc();
                @ref->RecurrenceTensor = RecurrenceTensor.__MarshalAlloc();
                @ref->BiasTensor = (BiasTensor != nullptr) ? BiasTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->HiddenInitializerTensor = (HiddenInitializerTensor != nullptr) ? HiddenInitializerTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->SequenceLengthsTensor = (SequenceLengthsTensor != nullptr) ? SequenceLengthsTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputSequenceTensor = (OutputSequenceTensor != nullptr) ? OutputSequenceTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputSingleTensor = (OutputSingleTensor != nullptr) ? OutputSingleTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->ActivationDescCount = Activations.Length;
                @ref->Activations = IntPtr.Zero;
                if (Activations.Length != 0)
                {
                    var activationDescsPtr{};
                    for (int32_t i{}; i < Activations.Length; i++)
                    {
                        Activations.__MarshalTo(ref activationDescsPtr);
                    }
                    @ref->Activations = new(activationDescsPtr);
                }
                @ref->Direction = Direction;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                WeightTensor.__MarshalFree(ref @ref->WeightTensor);
                RecurrenceTensor.__MarshalFree(ref @ref->RecurrenceTensor);
                if (BiasTensor != nullptr)
                {
                    BiasTensor.Value.__MarshalFree(ref @ref->BiasTensor);
                }
                if (HiddenInitializerTensor != nullptr)
                {
                    HiddenInitializerTensor.Value.__MarshalFree(ref @ref->HiddenInitializerTensor);
                }
                if (SequenceLengthsTensor != nullptr)
                {
                    SequenceLengthsTensor.Value.__MarshalFree(ref @ref->SequenceLengthsTensor);
                }
                if (OutputSequenceTensor != nullptr)
                {
                    OutputSequenceTensor.Value.__MarshalFree(ref @ref->OutputSequenceTensor);
                }
                if (OutputSingleTensor != nullptr)
                {
                    OutputSingleTensor.Value.__MarshalFree(ref @ref->OutputSingleTensor);
                }
                if (@ref->Activations != IntPtr.Zero)
                {
                    var activationDescsPtr{};
                    for (int32_t i{}; i < Activations.Length; i++)
                    {
                        Activations.__MarshalFree(ref activationDescsPtr);
                    }
                    UnsafeUtilities.Free(@ref->Activations);
                }
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(RnnOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_RNNOPERATORDESCRIPTION_H