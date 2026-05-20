// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RESAMPLEGRADOPERATORDESCRIPTION_H
#define VORTICE_RESAMPLEGRADOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ResampleGradOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ResampleGrad; }

                TensorDescription m_inputGradientTensor{};

                TensorDescription m_outputGradientTensor{};

                InterpolationMode m_interpolationMode{};

                public float[] Scales { get; set; }

                public float[] InputPixelOffsets { get; set; }

                public float[] OutputPixelOffsets { get; set; }

                override std::string ToString(void)
        { $"ResampleGrad: InterpolationMode={InterpolationMode}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputGradientTensor{};
                public: void* OutputGradientTensor{};
                public: InterpolationMode InterpolationMode{};
                public: int32_t DimensionCount{};
                public: void* Scales{};
                public: void* InputPixelOffsets{};
                public: void* OutputPixelOffsets{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputGradientTensor = InputGradientTensor.__MarshalAlloc();
                @ref->OutputGradientTensor = OutputGradientTensor.__MarshalAlloc();
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

                InputGradientTensor.__MarshalFree(ref @ref->InputGradientTensor);
                OutputGradientTensor.__MarshalFree(ref @ref->OutputGradientTensor);
                UnsafeUtilities.Free(@ref->Scales);
                UnsafeUtilities.Free(@ref->InputPixelOffsets);
                UnsafeUtilities.Free(@ref->OutputPixelOffsets);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ResampleGradOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_RESAMPLEGRADOPERATORDESCRIPTION_H