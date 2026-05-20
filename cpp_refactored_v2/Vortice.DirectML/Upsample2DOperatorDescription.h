// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UPSAMPLE2DOPERATORDESCRIPTION_H
#define VORTICE_UPSAMPLE2DOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct Upsample2DOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Upsample2D; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: Size2D m_scaleSize{};
                public: InterpolationMode m_interpolationMode{};
                publicoverride std::string ToString(void) $"Upsample2D: ScaleSize={ScaleSize} InterpolationMode={InterpolationMode}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: Size2D ScaleSize{};
                public: InterpolationMode InterpolationMode{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ScaleSize = ScaleSize;
                @ref->InterpolationMode = InterpolationMode;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(Upsample2DOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_UPSAMPLE2DOPERATORDESCRIPTION_H