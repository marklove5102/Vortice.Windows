// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H
#define VORTICE_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;

        struct GeneralMatrixMultiplyOperatorDescription : public : IOperatorDescription, public IOperatorDescriptionMarshal
        {
                        OperatorType get_OperatorType() const { return OperatorType.GeneralMatrixMultiply; }

                TensorDescription m_aTensor{};

                TensorDescription m_bTensor{};

                std::optional<TensorDescription> m_cTensor{};

                TensorDescription m_outputTensor{};

                MatrixTransform m_transformA{};

                MatrixTransform m_transformB{};

                float m_alpha{};

                float m_beta{};

                std::optional<OperatorDescription> m_fusedActivation{};

                override std::string ToString(void)
        { $"GeneralMatrixMultiply: TransformA={TransformA} TransformB={TransformB} Alpha={Alpha} Beta={Beta}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* ATensor{};
                public: void* BTensor{};
                public: void* CTensor{};
                public: void* OutputTensor{};
                public: MatrixTransform TransformA{};
                public: MatrixTransform TransformB{};
                public: float Alpha{};
                public: float Beta{};
                public: void* FusedActivation{};
            }

            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->ATensor = ATensor.__MarshalAlloc();
                @ref->BTensor = BTensor.__MarshalAlloc();
                @ref->CTensor = (CTensor != nullptr) ? CTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->TransformA = TransformA;
                @ref->TransformB = TransformB;
                @ref->Alpha = Alpha;
                @ref->Beta = Beta;
                @ref->FusedActivation = (FusedActivation != nullptr) ? FusedActivation.Value.__MarshalAlloc() : IntPtr.Zero;

                return new(@ref param) = 0;
            }

            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                ATensor.__MarshalFree(ref @ref->ATensor);
                BTensor.__MarshalFree(ref @ref->BTensor);

                if (CTensor != nullptr)
                {
                    CTensor.Value.__MarshalFree(ref @ref->CTensor);
                }

                OutputTensor.__MarshalFree(ref @ref->OutputTensor);

                if (FusedActivation != nullptr)
                {
                    FusedActivation.Value.__MarshalFree(ref @ref->FusedActivation);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator OperatorDescription(GeneralMatrixMultiplyOperatorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_GENERALMATRIXMULTIPLYOPERATORDESCRIPTION_H