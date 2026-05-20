// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H
#define VORTICE_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct ElementWiseQuantizedLinearAddOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.ElementWiseQuantizedLinearAdd; }

                TensorDescription m_aTensor{};

                TensorDescription m_aScaleTensor{};

                std::optional<TensorDescription> m_aZeroPointTensor{};

                TensorDescription m_bTensor{};

                TensorDescription m_bScaleTensor{};

                std::optional<TensorDescription> m_bZeroPointTensor{};

                TensorDescription m_outputScaleTensor{};

                std::optional<TensorDescription> m_outputZeroPointTensor{};

                TensorDescription m_outputTensor{};

                override std::string ToString(void)
        { $"ElementWiseQuantizedLinearAdd";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* ATensor{};
                public: void* AScaleTensor{};
                public: void* AZeroPointTensor{};
                public: void* BTensor{};
                public: void* BScaleTensor{};
                public: void* BZeroPointTensor{};
                public: void* OutputScaleTensor{};
                public: void* OutputZeroPointTensor{};
                public: void* OutputTensor{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->ATensor = ATensor.__MarshalAlloc();
                @ref->AScaleTensor = AScaleTensor.__MarshalAlloc();
                @ref->AZeroPointTensor = (AZeroPointTensor != nullptr) ? AZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->BTensor = BTensor.__MarshalAlloc();
                @ref->BScaleTensor = BScaleTensor.__MarshalAlloc();
                @ref->BZeroPointTensor = (BZeroPointTensor != nullptr) ? BZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputScaleTensor = OutputScaleTensor.__MarshalAlloc();
                @ref->OutputZeroPointTensor = (OutputZeroPointTensor != nullptr) ? OutputZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                ATensor.__MarshalFree(ref @ref->ATensor);
                AScaleTensor.__MarshalFree(ref @ref->AScaleTensor);

                if (AZeroPointTensor != nullptr)
                {
                    AZeroPointTensor.Value.__MarshalFree(ref @ref->AZeroPointTensor);
                }

                BTensor.__MarshalFree(ref @ref->BTensor);
                BScaleTensor.__MarshalFree(ref @ref->BScaleTensor);

                if (BZeroPointTensor != nullptr)
                {
                    BZeroPointTensor.Value.__MarshalFree(ref @ref->BZeroPointTensor);
                }

                OutputScaleTensor.__MarshalFree(ref @ref->OutputScaleTensor);

                if (OutputZeroPointTensor != nullptr)
                {
                    OutputZeroPointTensor.Value.__MarshalFree(ref @ref->OutputZeroPointTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(ElementWiseQuantizedLinearAddOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_ELEMENTWISEQUANTIZEDLINEARADDOPERATORDESCRIPTION_H