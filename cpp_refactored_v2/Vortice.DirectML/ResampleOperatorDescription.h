// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RESAMPLEOPERATORDESCRIPTION_H
#define VORTICE_RESAMPLEOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct ResampleOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Resample; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: InterpolationMode m_interpolationMode{};
                public float[] Scales { get; set; }
                publicoverride std::string ToString(void) $"Resample: InterpolationMode={InterpolationMode}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: InterpolationMode InterpolationMode{};
                public: int32_t ScaleCount{};
                public: void* Scales{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->InterpolationMode = InterpolationMode;
                @ref->ScaleCount = Scales.Length;
                @ref->Scales = new(UnsafeUtilities.AllocWithData(Scales));
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Scales);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(ResampleOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_RESAMPLEOPERATORDESCRIPTION_H