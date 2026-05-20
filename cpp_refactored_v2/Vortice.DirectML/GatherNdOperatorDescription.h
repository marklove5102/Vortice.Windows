// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GATHERNDOPERATORDESCRIPTION_H
#define VORTICE_GATHERNDOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct GatherNdOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.GatherNd; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_indicesTensor{};
                public: TensorDescription m_outputTensor{};
                public: int32_t m_inputDimensionCount{};
                public: int32_t m_indicesDimensionCount{};
                publicoverride std::string ToString(void) $"GatherNd: InputDimensionCount={InputDimensionCount} IndicesDimensionCount={IndicesDimensionCount}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* IndicesTensor{};
                public: void* OutputTensor{};
                public: int32_t InputDimensionCount{};
                public: int32_t IndicesDimensionCount{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->IndicesTensor = IndicesTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->InputDimensionCount = InputDimensionCount;
                @ref->IndicesDimensionCount = IndicesDimensionCount;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                IndicesTensor.__MarshalFree(ref @ref->IndicesTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(GatherNdOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_GATHERNDOPERATORDESCRIPTION_H