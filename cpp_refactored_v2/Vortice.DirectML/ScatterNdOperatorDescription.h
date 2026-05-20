// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SCATTERNDOPERATORDESCRIPTION_H
#define VORTICE_SCATTERNDOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ScatterNdOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.ScatterNd; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_indicesTensor{};
                public: TensorDescription m_updatesTensor{};
                public: TensorDescription m_outputTensor{};
                public: int32_t m_inputDimensionCount{};
                public: int32_t m_indicesDimensionCount{};
                publicoverride std::string ToString(void) $"ScatterNd: InputDimensionCount={InputDimensionCount} IndicesDimensionCount={IndicesDimensionCount}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* IndicesTensor{};
                public: void* UpdatesTensor{};
                public: void* OutputTensor{};
                public: int32_t InputDimensionCount{};
                public: int32_t IndicesDimensionCount{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->IndicesTensor = IndicesTensor.__MarshalAlloc();
                @ref->UpdatesTensor = UpdatesTensor.__MarshalAlloc();
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
                UpdatesTensor.__MarshalFree(ref @ref->UpdatesTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(ScatterNdOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_SCATTERNDOPERATORDESCRIPTION_H