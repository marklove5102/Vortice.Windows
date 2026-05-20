// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RANDOMGENERATOROPERATORDESCRIPTION_H
#define VORTICE_RANDOMGENERATOROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct RandomGeneratorOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.RandomGenerator; }

                TensorDescription m_inputStateTensor{};

                TensorDescription m_outputTensor{};

                std::optional<TensorDescription> m_outputStateTensor{};

                RandomGeneratorType m_type{};

                override std::string ToString(void)
        { $"RandomGenerator: Type={Type}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputStateTensor{};
                public: void* OutputTensor{};
                public: void* OutputStateTensor{};
                public: RandomGeneratorType Type{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputStateTensor = InputStateTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->OutputStateTensor = (OutputStateTensor != nullptr) ? OutputStateTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->Type = Type;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputStateTensor.__MarshalFree(ref @ref->InputStateTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                if (OutputStateTensor != nullptr)
                {
                    OutputStateTensor.Value.__MarshalFree(ref @ref->OutputStateTensor);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(RandomGeneratorOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_RANDOMGENERATOROPERATORDESCRIPTION_H