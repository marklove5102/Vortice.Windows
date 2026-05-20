// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PADDINGOPERATORDESCRIPTION_H
#define VORTICE_PADDINGOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct PaddingOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Padding; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: PaddingMode m_paddingMode{};
                public: float m_paddingValue{};
                public int[] StartPadding { get; set; }
                public int[] EndPadding { get; set; }
                publicoverride std::string ToString(void) $"Padding: PaddingMode={PaddingMode} PaddingValue={PaddingValue}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: PaddingMode PaddingMode{};
                public: float PaddingValue{};
                public: int32_t DimensionCount{};
                public: void* StartPadding{};
                public: void* EndPadding{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->PaddingMode = PaddingMode;
                @ref->PaddingValue = PaddingValue;
                var dimensionCount{};
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must); }
                @ref->DimensionCount = dimensionCount;
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(PaddingOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_PADDINGOPERATORDESCRIPTION_H