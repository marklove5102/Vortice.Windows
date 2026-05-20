// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GATHERND1OPERATORDESCRIPTION_H
#define VORTICE_GATHERND1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct GatherNd1OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.GatherNd1; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_indicesTensor{};
                public: TensorDescription m_outputTensor{};
                public: int32_t m_inputDimensionCount{};
                public: int32_t m_indicesDimensionCount{};
                public: int32_t m_batchDimensionCount{};
                publicoverride std::string ToString(void) $"GatherNd1: InputDimensionCount={InputDimensionCount} IndicesDimensionCount={IndicesDimensionCount} BatchDimensionCount={BatchDimensionCount}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* IndicesTensor{};
                public: void* OutputTensor{};
                public: int32_t InputDimensionCount{};
                public: int32_t IndicesDimensionCount{};
                public: int32_t BatchDimensionCount{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->IndicesTensor = IndicesTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->InputDimensionCount = InputDimensionCount;
                @ref->IndicesDimensionCount = IndicesDimensionCount;
                @ref->BatchDimensionCount = BatchDimensionCount;
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
            public static implicit operator OperatorDescription(GatherNd1OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_GATHERND1OPERATORDESCRIPTION_H