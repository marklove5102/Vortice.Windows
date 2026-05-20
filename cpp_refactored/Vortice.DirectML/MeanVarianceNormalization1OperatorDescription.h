// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H
#define VORTICE_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct MeanVarianceNormalization1OperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.MeanVarianceNormalization1; }

                TensorDescription m_inputTensor{};

                std::optional<TensorDescription> m_scaleTensor{};

                std::optional<TensorDescription> m_biasTensor{};

                TensorDescription m_outputTensor{};

                public int[] Axes { get; set; }

                bool m_normalizeVariance{};

                float m_epsilon{};

                std::optional<OperatorDescription> m_fusedActivation{};

                override std::string ToString(void)
        { $"MeanVarianceNormalization1: NormalizeVariance={NormalizeVariance} Epsilon={Epsilon}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* ScaleTensor{};
                public: void* BiasTensor{};
                public: void* OutputTensor{};
                public: int32_t AxisCount{};
                public: void* Axes{};
                public: bool NormalizeVariance{};
                public: float Epsilon{};
                public: void* FusedActivation{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->ScaleTensor = (ScaleTensor != nullptr) ? ScaleTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->BiasTensor = (BiasTensor != nullptr) ? BiasTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->AxisCount = Axes.Length;
                @ref->Axes = new(UnsafeUtilities.AllocWithData(Axes));
                @ref->NormalizeVariance = NormalizeVariance;
                @ref->Epsilon = Epsilon;
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);

                if (ScaleTensor != nullptr)
                {
                    ScaleTensor.Value.__MarshalFree(ref @ref->ScaleTensor);
                }

                if (BiasTensor != nullptr)
                {
                    BiasTensor.Value.__MarshalFree(ref @ref->BiasTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Axes);

                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(MeanVarianceNormalization1OperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_MEANVARIANCENORMALIZATION1OPERATORDESCRIPTION_H