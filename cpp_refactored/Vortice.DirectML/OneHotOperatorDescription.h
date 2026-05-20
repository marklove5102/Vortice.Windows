// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ONEHOTOPERATORDESCRIPTION_H
#define VORTICE_ONEHOTOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct OneHotOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.OneHot; }

                TensorDescription m_indicesTensor{};

                TensorDescription m_valuesTensor{};

                TensorDescription m_outputTensor{};

                int32_t m_axis{};

                override std::string ToString(void)
        { $"OneHot: Axis={Axis}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* IndicesTensor{};
                public: void* ValuesTensor{};
                public: void* OutputTensor{};
                public: int32_t Axis{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->IndicesTensor = IndicesTensor.__MarshalAlloc();
                @ref->ValuesTensor = ValuesTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->Axis = Axis;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                IndicesTensor.__MarshalFree(ref @ref->IndicesTensor);
                ValuesTensor.__MarshalFree(ref @ref->ValuesTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(OneHotOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ONEHOTOPERATORDESCRIPTION_H