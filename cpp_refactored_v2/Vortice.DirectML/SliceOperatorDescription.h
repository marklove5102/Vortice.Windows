// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SLICEOPERATORDESCRIPTION_H
#define VORTICE_SLICEOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct SliceOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Slice; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public int[] Offsets { get; set; }
                public int[] Sizes { get; set; }
                public int[] Strides { get; set; }
                publicoverride std::string ToString(void) $"Slice";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t DimensionCount{};
                public: void* Offsets{};
                public: void* Sizes{};
                public: void* Strides{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                var dimensionCount{};
                if (Sizes.Length != dimensionCount) { throw new IndexOutOfRangeException("Sizes must); }
                if (Strides.Length != dimensionCount) { throw new IndexOutOfRangeException("Strides must); }
                @ref->DimensionCount = dimensionCount;
                @ref->Offsets = new(UnsafeUtilities.AllocWithData(Offsets));
                @ref->Sizes = new(UnsafeUtilities.AllocWithData(Sizes));
                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Offsets);
                UnsafeUtilities.Free(@ref->Sizes);
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(SliceOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_SLICEOPERATORDESCRIPTION_H