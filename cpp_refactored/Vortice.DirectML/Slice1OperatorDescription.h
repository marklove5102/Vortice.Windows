// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SLICE1OPERATORDESCRIPTION_H
#define VORTICE_SLICE1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct Slice1OperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Slice1; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                public int[] InputWindowOffsets { get; set; }

                public int[] InputWindowSizes { get; set; }

                public int[] InputWindowStrides { get; set; }

                override std::string ToString(void)
        { $"Slice1";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t DimensionCount{};
                public: void* InputWindowOffsets{};
                public: void* InputWindowSizes{};
                public: void* InputWindowStrides{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

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

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->InputWindowOffsets);
                UnsafeUtilities.Free(@ref->InputWindowSizes);
                UnsafeUtilities.Free(@ref->InputWindowStrides);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(Slice1OperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_SLICE1OPERATORDESCRIPTION_H