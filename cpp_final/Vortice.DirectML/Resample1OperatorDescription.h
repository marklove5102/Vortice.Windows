// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RESAMPLE1OPERATORDESCRIPTION_H
#define VORTICE_RESAMPLE1OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct Resample1OperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.Resample1; }

                TensorDescription m_inputTensor{};

                TensorDescription m_outputTensor{};

                InterpolationMode m_interpolationMode{};

                public float[] Scales { get; set; }

                public float[] InputPixelOffsets { get; set; }

                public float[] OutputPixelOffsets { get; set; }

                override std::string ToString(void)
        { $"Resample1: InterpolationMode={InterpolationMode}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: InterpolationMode InterpolationMode{};
                public: int32_t DimensionCount{};
                public: void* Scales{};
                public: void* InputPixelOffsets{};
                public: void* OutputPixelOffsets{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->InterpolationMode = InterpolationMode;

                var dimensionCount{};
                if (InputPixelOffsets.Length != dimensionCount) { throw new IndexOutOfRangeException("InputPixelOffsets must have the same length as Scales.") = 0; }
                if (OutputPixelOffsets.Length != dimensionCount) { throw new IndexOutOfRangeException("OutputPixelOffsets must have the same length as Scales.") = 0; }
                @ref->DimensionCount = dimensionCount;

                @ref->Scales = new(UnsafeUtilities.AllocWithData(Scales));
                @ref->InputPixelOffsets = new(UnsafeUtilities.AllocWithData(InputPixelOffsets));
                @ref->OutputPixelOffsets = new(UnsafeUtilities.AllocWithData(OutputPixelOffsets));

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Scales);
                UnsafeUtilities.Free(@ref->InputPixelOffsets);
                UnsafeUtilities.Free(@ref->OutputPixelOffsets);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(Resample1OperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_RESAMPLE1OPERATORDESCRIPTION_H