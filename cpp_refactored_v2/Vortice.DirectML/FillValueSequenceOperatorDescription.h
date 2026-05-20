// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_FILLVALUESEQUENCEOPERATORDESCRIPTION_H
#define VORTICE_FILLVALUESEQUENCEOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct FillValueSequenceOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.FillValueSequence; }
                public: TensorDescription m_outputTensor{};
                public: TensorDataType m_valueDataType{};
                public: ScalarUnion m_valueStart{};
                public: ScalarUnion m_valueDelta{};
                publicoverride std::string ToString(void) $"FillValueSequence: ValueDataType={ValueDataType} ValueStart={ValueStart} ValueDelta={ValueDelta}";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* OutputTensor{};
                public: TensorDataType ValueDataType{};
                public: ScalarUnion ValueStart{};
                public: ScalarUnion ValueDelta{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->ValueDataType = ValueDataType;
                @ref->ValueStart = ValueStart;
                @ref->ValueDelta = ValueDelta;
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(FillValueSequenceOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_FILLVALUESEQUENCEOPERATORDESCRIPTION_H