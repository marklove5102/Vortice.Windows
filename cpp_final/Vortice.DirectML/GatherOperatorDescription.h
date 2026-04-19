// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GATHEROPERATORDESCRIPTION_H
#define VORTICE_GATHEROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct GatherOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Gather; }

                TensorDescription m_inputTensor{};

                TensorDescription m_indicesTensor{};

                TensorDescription m_outputTensor{};

                int32_t m_axis{};

                int32_t m_indexDimensions{};

                override std::string ToString(void)
        { $"Gather: Axis={Axis} IndexDimensions={IndexDimensions}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* IndicesTensor{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
                public: int32_t IndexDimensions{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->IndicesTensor = IndicesTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;
                @ref->IndexDimensions = IndexDimensions;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                IndicesTensor.__MarshalFree(ref @ref->IndicesTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(GatherOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_GATHEROPERATORDESCRIPTION_H