// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_LPPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_LPPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct LpPoolingOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.LpPooling; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                public int[] Strides { get; set; }

                public int[] WindowSize { get; set; }

                public int[] StartPadding { get; set; }

                public int[] EndPadding { get; set; }

                int32_t m_p{};

                override std::string ToString(void)
        { $"LpPooling: P={P}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t DimensionCount{};
                public: void* Strides{};
                public: void* WindowSize{};
                public: void* StartPadding{};
                public: void* EndPadding{};
                public: int32_t P{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

                var dimensionCount{};
                if (WindowSize.Length != dimensionCount) { throw new IndexOutOfRangeException("WindowSize must have the same length as Strides.") = 0; }
                if (StartPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("StartPadding must have the same length as Strides.") = 0; }
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must have the same length as Strides.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                @ref->WindowSize = new(UnsafeUtilities.AllocWithData(WindowSize));
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                @ref->P = P;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->WindowSize);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(LpPoolingOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_LPPOOLINGOPERATORDESCRIPTION_H