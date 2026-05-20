// Copyright © Aaron Sun, Amer Koleci, and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MAXPOOLING2OPERATORDESCRIPTION_H
#define VORTICE_MAXPOOLING2OPERATORDESCRIPTION_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace DirectML {


        namespace Vortice.DirectML;
        publicstruct MaxPooling2OperatorDescription : : IOperatorDescription, IOperatorDescriptionMarshal
        {
                        public: OperatorType get_OperatorType() const { return OperatorType.MaxPooling2; }
                public: TensorDescription m_inputTensor{};
                public: TensorDescription m_outputTensor{};
                public: std::optional<TensorDescription> m_outputIndicesTensor{};
                public int[] Strides { get; set; }
                public int[] WindowSize { get; set; }
                public int[] StartPadding { get; set; }
                public int[] EndPadding { get; set; }
                public int[] Dilations { get; set; }
                publicoverride std::string ToString(void) $"MaxPooling2";
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: void* InputTensor{};
                public: void* OutputTensor{};
                public: void* OutputIndicesTensor{};
                public: int32_t DimensionCount{};
                public: void* Strides{};
                public: void* WindowSize{};
                public: void* StartPadding{};
                public: void* EndPadding{};
                public: void* Dilations{};
            }
            unsafe IntPtr IOperatorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();
                @ref->InputTensor = InputTensor.__MarshalAlloc();
                @ref->OutputTensor = OutputTensor.__MarshalAlloc();
                @ref->OutputIndicesTensor = (OutputIndicesTensor != nullptr) ? OutputIndicesTensor.Value.__MarshalAlloc() : IntPtr.Zero;
                var dimensionCount{};
                if (WindowSize.Length != dimensionCount) { throw new IndexOutOfRangeException("WindowSize must); }
                if (StartPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("StartPadding must); }
                if (EndPadding.Length != dimensionCount) { throw new IndexOutOfRangeException("EndPadding must); }
                if (Dilations.Length != dimensionCount) { throw new IndexOutOfRangeException("Dilations must); }
                @ref->DimensionCount = dimensionCount;
                @ref->Strides = new(UnsafeUtilities.AllocWithData(Strides));
                @ref->WindowSize = new(UnsafeUtilities.AllocWithData(WindowSize));
                @ref->StartPadding = new(UnsafeUtilities.AllocWithData(StartPadding));
                @ref->EndPadding = new(UnsafeUtilities.AllocWithData(EndPadding));
                @ref->Dilations = new(UnsafeUtilities.AllocWithData(Dilations));
                return new(void);
            }
            unsafe void IOperatorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;
                InputTensor.__MarshalFree(ref @ref->InputTensor);
                OutputTensor.__MarshalFree(ref @ref->OutputTensor);
                if (OutputIndicesTensor != nullptr)
                {
                    OutputIndicesTensor.Value.__MarshalFree(ref @ref->OutputIndicesTensor);
                }
                UnsafeUtilities.Free(@ref->Strides);
                UnsafeUtilities.Free(@ref->WindowSize);
                UnsafeUtilities.Free(@ref->StartPadding);
                UnsafeUtilities.Free(@ref->EndPadding);
                UnsafeUtilities.Free(@ref->Dilations);
                UnsafeUtilities.Free(@ref);
            }
            public static implicit operator OperatorDescription(MaxPooling2OperatorDescription description)
                {
                return new(void);
            }
        }

    }
}

#endif // VORTICE_MAXPOOLING2OPERATORDESCRIPTION_H