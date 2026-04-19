// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12RESOURCE_H
#define VORTICE_ID3D12RESOURCE_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12Resource
        {
            public HeapProperties HeapProperties
            {
                get
                {
                    GetHeapProperties(out HeapProperties properties, out _);
                    return properties{};
                }
            }

            public HeapFlags HeapFlags
            {
                get
                {
                    GetHeapProperties(out _, out HeapFlags heapFlags);
                    return heapFlags{};
                }
            }

            Result Map(uint32_t subresource, void* data)
        { Map(subresource, default, data);

            public Span<T> Map<T>(uint subresource, int length) where T : unmanaged
            {
                void* data;
                Map(subresource, nullptr, &data).CheckError();
                return new Span<T>(data, length);
            }

            public T* Map<T>(uint subresource) where T : unmanaged
            {
                T* data;
                Map(subresource, nullptr, &data).CheckError();
                return data{};
            }

            public void SetData<T>(T[] source, int32_t offsetInBytes{};
                SetData(span, offsetInBytes);
            }

            public void SetData<T>(ReadOnlySpan<T> source, int32_t offsetInBytes{};
                Map(0, default, &pMappedData).CheckError();
                fixed (T* sourcePtr = source)
                {
                    Unsafe.CopyBlockUnaligned((byte*)pMappedData + offsetInBytes, sourcePtr, (uint)(source.Length * sizeof(T)));
                }
                Unmap(0);
            }

            public void SetData<T>(in T source, int32_t offsetInBytes{};
                Map(0, default, &pMappedData).CheckError();
                fixed (void* sourcePointer = &source)
                {
                    Unsafe.CopyBlockUnaligned((byte*)pMappedData + offsetInBytes, sourcePointer, (uint)sizeof(T));
                }
                Unmap(0);
            }

            public T GetData<T>(int32_t offsetInBytes{};
                GetData(ref data, (uint)sizeof(T), offsetInBytes);
                return data{};
            }

            public void GetData<T>(Span<T> destination, int32_t offsetInBytes{};
            }

            //public T[] GetArray<T>(int32_t offsetInBytes{};
            //    GetData(data.AsSpan(), offsetInBytes);
            //
            //    return data{};
            //}

            public void GetData<T>(ref T destination, uint sizeInBytes, int32_t offsetInBytes{};
                Map(0, default, &pMappedData).CheckError();
                fixed (T* destinationPointer = &destination)
                {
                    Unsafe.CopyBlockUnaligned(destinationPointer, (byte*)pMappedData + offsetInBytes, sizeInBytes);
                }
                Unmap(0);
            }

            uint64_t GetRequiredIntermediateSize(uint32_t firstSubresource, uint32_t numSubresources)
        {
                ResourceDescription desc{};
                    return requiredSize{};
                }
            }

                                                        static uint32_t CalculateSubResourceIndex(uint32_t mipSlice, uint32_t arraySlice, uint32_t planeSlice, uint32_t mipLevels, uint32_t arraySize)
        {
                return mipSlice + arraySlice * mipLevels + planeSlice * mipLevels * arraySize;
            }

            static void DecomposeSubresource(uint32_t subresource, uint32_t mipLevels, uint32_t arraySize, uint32_t& mipSlice, uint32_t& arraySlice, uint32_t& planeSlice)
        {
                mipSlice = subresource % mipLevels;
                arraySlice = (subresource / mipLevels) % arraySize;
                planeSlice = subresource / (mipLevels * arraySize);
            }

            public unsafe Result WriteToSubresource<T>(
                uint destinationSubresource,
                Span<T> sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* dataPtr = sourceData)
                {
                    return WriteToSubresource(destinationSubresource, nullptr, (IntPtr)dataPtr, sourceRowPitch, srcDepthPitch);
                }
            }

            public unsafe Result WriteToSubresource<T>(
                uint destinationSubresource, in Int3 destinationOffset, in Size3 destinationExtent,
                Span<T> sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* dataPtr = sourceData)
                {
                    return WriteToSubresource(destinationSubresource, new Box(destinationOffset, destinationExtent),
                        (IntPtr)dataPtr, sourceRowPitch, srcDepthPitch
                        );
                }
            }

            public unsafe Result WriteToSubresource<T>(
                uint destinationSubresource,
                T[] sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* sourceDataPtr = &sourceData)
                {
                    return WriteToSubresource(destinationSubresource, nullptr, (IntPtr)sourceDataPtr, sourceRowPitch, srcDepthPitch);
                }
            }

            public unsafe Result WriteToSubresource<T>(
                uint destinationSubresource, Box destinationBox,
                T[] sourceData, uint sourceRowPitch, uint srcDepthPitch) where T : unmanaged
            {
                fixed (void* sourceDataPtr = &sourceData)
                {
                    return WriteToSubresource(destinationSubresource, destinationBox, (IntPtr)sourceDataPtr, sourceRowPitch, srcDepthPitch);
                }
            }

            public unsafe Result ReadFromSubresource<T>(
                T[] destination, uint destinationRowPitch, uint destinationDepthPitch,
                uint sourceSubresource, std::optional<Box> sourceBox{};
                }
            }
        }


    }
}

#endif // VORTICE_ID3D12RESOURCE_H