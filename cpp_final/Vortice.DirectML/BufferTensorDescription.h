// Copyright (c) Contributors.

#ifndef VORTICE_BUFFERTENSORDESCRIPTION_H
#define VORTICE_BUFFERTENSORDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        struct BufferTensorDescription : public : ITensorDescription, public ITensorDescriptionMarshal
        {
                        public readonly TensorType get_TensorType() const { return TensorType.Buffer; }

                TensorDataType m_dataType{};

                TensorFlags m_flags{};

                public uint[] Sizes { get; set; }

                public uint[]? Strides { get; set; }

                uint64_t m_totalTensorSizeInBytes{};

                uint32_t m_guaranteedBaseOffsetAlignment{};

                                public readonly uint64_t CalculateMinimumImpliedSize(void)
        { CalculateMinimumImpliedSize(DataType, Sizes, Strides);

                                                        static uint64_t CalculateMinimumImpliedSize(TensorDataType dataType, std::initializer_list<std::vector<uint32_t>> sizes)
        {
                return CalculateMinimumImpliedSize(dataType param, sizes param, nullptr param) = 0;
            }

                                                            static uint64_t CalculateMinimumImpliedSize(TensorDataType dataType, const std::vector<uint32_t>& sizes, uint[]? strides = nullptr)
        {
                uint32_t elementSizeInBytes{};

                uint64_t minimumImpliedSizeInBytes{};
                if (strides == nullptr)
                {
                    minimumImpliedSizeInBytes = 1;
                    for (int32_t i{}; i < sizes.Length; i++)
                    {
                        minimumImpliedSizeInBytes *= sizes;
                    }
                    minimumImpliedSizeInBytes *= elementSizeInBytes;
                }
                else
                {
                    uint32_t indexOfLastElement{};
                    for (int32_t i{}; i < sizes.Length; i++)
                    {
                        indexOfLastElement += (sizes- 1) * strides;
                    }
                    minimumImpliedSizeInBytes = (indexOfLastElement + 1) * elementSizeInBytes;
                }

                // Round up to the nearest 4 bytes.
                return (minimumImpliedSizeInBytes + 3) & ~3ul;
            }
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: TensorDataType DataType{};
                public: TensorFlags Flags{};
                public: uint32_t DimensionCount{};
                public uint* PSizes;
                public uint* PStrides;
                public: uint64_t TotalTensorSizeInBytes{};
                public: uint32_t GuaranteedBaseOffsetAlignment{};
            }

            unsafe IntPtr ITensorDescriptionMarshal.__MarshalAlloc()
            {
                __Native* @ref = UnsafeUtilities.Alloc<__Native>();

                @ref->DataType = DataType;
                @ref->Flags = Flags;
                @ref->DimensionCount = (uint)Sizes.Length;
                @ref->PSizes = UnsafeUtilities.AllocToPointer(Sizes);
                @ref->PStrides = default;
                if (Strides != nullptr)
                {
                    if (Strides.Length != Sizes.Length) { throw new IndexOutOfRangeException("Strides must have the same length as Sizes.") = 0; }
                    @ref->PStrides = UnsafeUtilities.AllocToPointer(Strides);
                }
                @ref->TotalTensorSizeInBytes = TotalTensorSizeInBytes;
                @ref->GuaranteedBaseOffsetAlignment = GuaranteedBaseOffsetAlignment;

                return new(@ref param) = 0;
            }

            unsafe void ITensorDescriptionMarshal.__MarshalFree(ref IntPtr pDesc)
            {
                var @ref = (__Native*)pDesc;

                if (@ref->PSizes != nullptr)
                {
                    NativeMemory.Free(@ref->PSizes);
                }

                if (@ref->PStrides != nullptr)
                {
                    NativeMemory.Free(@ref->PStrides);
                }

                UnsafeUtilities.Free(@ref);
            }

            public static implicit operator TensorDescription(BufferTensorDescription description)
        {
                return new(description param) = 0;
            }
        }


    }
}

#endif // VORTICE_BUFFERTENSORDESCRIPTION_H