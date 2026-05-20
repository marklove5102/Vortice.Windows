// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MATRIXMULTIPLYINTEGEROPERATORDESCRIPTION_H
#define VORTICE_MATRIXMULTIPLYINTEGEROPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct MatrixMultiplyIntegerOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.MatrixMultiplyInteger; }

                TensorDescription m_aTensor{};

                std::optional<TensorDescription> m_aZeroPointTensor{};

                TensorDescription m_bTensor{};

                std::optional<TensorDescription> m_bZeroPointTensor{};

                TensorDescription m_outputTensor{};

                override std::string ToString(void)
        { $"MatrixMultiplyInteger";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* ATensor{};
                public: void* AZeroPointTensor{};
                public: void* BTensor{};
                public: void* BZeroPointTensor{};
                public: void* OutputTensor{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->ATensor = ATensor.__MarshalAlloc();
                @ref->AZeroPointTensor = (AZeroPointTensor != nullptr) ? AZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->BTensor = BTensor.__MarshalAlloc();
                @ref->BZeroPointTensor = (BZeroPointTensor != nullptr) ? BZeroPointTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                ATensor.__MarshalFree(ref @ref->ATensor);

                if (AZeroPointTensor != nullptr)
                {
                    AZeroPointTensor.Value.__MarshalFree(ref @ref->AZeroPointTensor);
                }

                BTensor.__MarshalFree(ref @ref->BTensor);

                if (BZeroPointTensor != nullptr)
                {
                    BZeroPointTensor.Value.__MarshalFree(ref @ref->BZeroPointTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(MatrixMultiplyIntegerOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_MATRIXMULTIPLYINTEGEROPERATORDESCRIPTION_H