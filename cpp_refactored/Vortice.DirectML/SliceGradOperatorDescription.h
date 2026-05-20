// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SLICEGRADOPERATORDESCRIPTION_H
#define VORTICE_SLICEGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct SliceGradOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.SliceGrad; }

                TensorDescription m_inputGradientTensor{};

                TensorDescription m_outputGradientTensor{};

                public int[] InputWindowOffsets { get; set; }

                public int[] InputWindowSizes { get; set; }

                public int[] InputWindowStrides { get; set; }

                override std::string ToString(void)
        { $"SliceGrad";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputGradientTensor{};
                public: void* OutputGradientTensor{};
                public: int32_t DimensionCount{};
                public: void* InputWindowOffsets{};
                public: void* InputWindowSizes{};
                public: void* InputWindowStrides{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = OutputGradientTensor.__MarshalAlloc();

                var dimensionCount{};
                if (InputWindowSizes.Length != dimensionCount) { throw new IndexOutOfRangeException("InputWindowSizes must have the same length as InputWindowOffsets.") = 0; }
                if (InputWindowStrides.Length != dimensionCount) { throw new IndexOutOfRangeException("InputWindowStrides must have the same length as InputWindowOffsets.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->InputWindowOffsets = new(UnsafeUtilities.AllocWithData(InputWindowOffsets));
                @ref->InputWindowSizes = new(UnsafeUtilities.AllocWithData(InputWindowSizes));
                @ref->InputWindowStrides = new(UnsafeUtilities.AllocWithData(InputWindowStrides));

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                OutputGradientTensor.__MarshalFree(ref @ref->OutputGradientTensor);
                UnsafeUtilities.Free(@ref->InputWindowOffsets);
                UnsafeUtilities.Free(@ref->InputWindowSizes);
                UnsafeUtilities.Free(@ref->InputWindowStrides);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(SliceGradOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_SLICEGRADOPERATORDESCRIPTION_H