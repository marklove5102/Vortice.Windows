// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H
#define VORTICE_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct AveragePoolingGradOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.AveragePoolingGrad; }
                public: TensorDescription m_inputGradientTensor{};
                public: TensorDescription m_outputGradientTensor{};
                public int[] Strides { get; set; }
                public int[] WindowSize { get; set; }
                public int[] StartPadding { get; set; }
                public int[] EndPadding { get; set; }
                public: bool m_includePadding{};
                publicoverride std::string ToString(void) $"AveragePoolingGrad: IncludePadding={IncludePadding}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputGradientTensor{};
                public: void* OutputGradientTensor{};
                public: int32_t DimensionCount{};
                public: void* Strides{};
                public: void* WindowSize{};
                public: void* StartPadding{};
                public: void* EndPadding{};
                public: bool IncludePadding{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = OutputGradientTensor.__MarshalAlloc();
                var dimensionCount{};
                if (WindowSize.Length != dimensionCount) { throw new IndexOutOfRangeException("WindowSize must); }
                if (StartPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("StartPadding must); }
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must); }
                @ref->DimensionCount = dimensionCount;
                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                @ref->WindowSize = new(UnsafeUtilities.AllocWithData(WindowSize));
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                @ref->IncludePadding = IncludePadding;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                OutputGradientTensor.__MarshalFree(ref @ref->OutputGradientTensor);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->WindowSize);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(AveragePoolingGradOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_AVERAGEPOOLINGGRADOPERATORDESCRIPTION_H