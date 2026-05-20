// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_TILEOPERATORDESCRIPTION_H
#define VORTICE_TILEOPERATORDESCRIPTION_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct TileOperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.Tile; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public int[] Repeats { get; set; }
                publicoverride std::string ToString(void) $"Tile";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: int32_t RepeatsCount{};
                public: void* Repeats{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->RepeatsCount = Repeats.Length;
                @ref->Repeats = new(UnsafeUtilities.AllocWithData(Repeats));
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                UnsafeUtilities.Free(@ref->Repeats);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(TileOperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_TILEOPERATORDESCRIPTION_H