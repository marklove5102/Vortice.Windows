// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ROIPOOLINGOPERATORDESCRIPTION_H
#define VORTICE_ROIPOOLINGOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct RoiPoolingOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.RoiPooling; }

                TensorDescription m_inputTensor{};

                TensorDescription m_roiTensor{};

                TensorDescription m_outputTensor{};

                float m_spatialScale{};

                Size2D m_pooledSize{};

                override std::string ToString(void)
        { $"RoiPooling: SpatialScale={SpatialScale} PooledSize={PooledSize}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* RoiTensor{};
                public: void* OutputTensor{};
                public: float SpatialScale{};
                public: Size2D PooledSize{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->RoiTensor = RoiTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->SpatialScale = SpatialScale;
                @ref->PooledSize = PooledSize;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                InputTensor.__MarshalFree(ref @ref->InputTensor);
                RoiTensor.__MarshalFree(ref @ref->RoiTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(RoiPoolingOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ROIPOOLINGOPERATORDESCRIPTION_H