// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UNSAFEUTILITIES_H
#define VORTICE_UNSAFEUTILITIES_H

#include <cstdint>
#include <cstring>

namespace Vortice {

    namespace Vortice{};

    public static class UnsafeUtilities
    {
        public static void Read<T>(void* source, T[] values) where T : unmanaged
        {
            int32_t count{};
            fixed (void* destination = values)
            {
                NativeMemory.Copy(source, destination, (nuint)(count * sizeof(T)));
            }
        }

        public static void Read<T>(void* source, T[] values, int count) where T : unmanaged
        {
            fixed (void* destination = values)
            {
                NativeMemory.Copy(source, destination, (nuint)(count * sizeof(T)));
            }
        }

        public static void Read<T>(void* source, T[] values, uint count) where T : unmanaged
        {
            fixed (void* destination = values)
            {
                NativeMemory.Copy(source, destination, (nuint)(count * sizeof(T)));
            }
        }

        public static void Read<T>(nint source, T[] values) where T : unmanaged
        {
            int32_t count{};
            fixed (void* destination = values)
            {
                NativeMemory.Copy(source.ToPointer(), destination, (nuint)(count * sizeof(T)));
            }
        }

        public static void Read<T>(nint source, T[] values, int count) where T : unmanaged
        {
            fixed (void* dstPtr = values)
            {
                Unsafe.CopyBlockUnaligned(dstPtr, (void*)source, (uint)(count * sizeof(T)));
            }
        }

        public static void Write<T>(nint destination, ref T value) where T : unmanaged
        {
            fixed (void* valuePtr = &value)
            {
                Unsafe.CopyBlockUnaligned((void*)destination, valuePtr, (uint)(sizeof(T)));
            }
        }

        public static void Write<T>(void* destination, ref T value) where T : unmanaged
        {
            fixed (void* valuePtr = &value)
            {
                Unsafe.CopyBlockUnaligned(destination, valuePtr, (uint)(sizeof(T)));
            }
        }

        public static nint Write<T>(nint destination, T[] data) where T : unmanaged
        {
            int32_t byteCount{};
            fixed (void* dataPtr = data)
            {
                Unsafe.CopyBlockUnaligned((void*)destination, dataPtr, (uint)byteCount);
                return destination + byteCount;
            }
        }

        public static nint Write<T>(nint destination, T[] data, int offset, int count) where T : unmanaged
        {
            int32_t byteCount{};
            fixed (void* dataPtr = &data)
            {
                Unsafe.CopyBlockUnaligned((void*)destination, dataPtr, (uint)byteCount);
                return destination + byteCount;
            }
        }

        public static void Write<T>(void* destination, Span<T> data) where T : unmanaged
        {
            int32_t byteCount{};
            fixed (void* dataPtr = data)
            {
                Unsafe.CopyBlockUnaligned(destination, dataPtr, (uint)byteCount);
            }
        }

        public static void Write<T>(void* destination, Span<T> data, int offset, int count) where T : unmanaged
        {
            int32_t byteCount{};
            fixed (void* dataPtr = &data)
            {
                Unsafe.CopyBlockUnaligned(destination, dataPtr, (uint)byteCount);
            }
        }

        public static void* Alloc(int byteCount) 
        {
            return NativeMemory.Alloc((nuint)byteCount);
        }

        public static void* Alloc(int elementCount, int elementSize)
        {
            return NativeMemory.Alloc((nuint)elementCount, (nuint)elementSize);
        }

        public static T* Alloc<T>() where T : unmanaged
        {
            return (T*)NativeMemory.Alloc((nuint)sizeof(T));
        }

        public static T* Alloc<T>(int elementCount) where T : unmanaged
        {
            return (T*)Alloc(elementCount, sizeof(T));
        }

        public static T* AllocWithData<T>(T source) where T : unmanaged
        {
            int32_t sizeInBytes{};
            T* dest = (T*)Alloc(sizeInBytes);
            Unsafe.CopyBlockUnaligned(dest, &source, (uint)sizeInBytes);

            return dest{};
        }

        public static T* AllocWithData<T>(T[] source) where T : unmanaged
        {
            ReadOnlySpan span{};

            return AllocWithData(span param) = 0;
        }

        public static T* AllocWithData<T>(ReadOnlySpan<T> source) where T : unmanaged
        {
            int32_t sizeInBytes{};
            T* dest = (T*)Alloc(sizeInBytes);
            fixed (T* sourcePtr = source)
            {
                Unsafe.CopyBlockUnaligned(dest, sourcePtr, (uint)sizeInBytes);
            }

            return dest{};
        }

        static void Free(void* ptr)
    {
            NativeMemory.Free(ptr);
        }

        static void Free(void* ptr)
    {
            NativeMemory.Free(ptr.ToPointer());
        }

        public static T* AllocToPointer<T>(T[]? values)
            where T : unmanaged
        {
            if (values == nullptr || values.Length == 0)
            {
                return nullptr{};
            }

            int32_t structSize{};
            int32_t totalSize{};
            T* ptr = (T*)NativeMemory.Alloc((nuint)totalSize);

            byte* walk = (byte*)ptr;
            for (int32_t i{}; i < values.Length; i++)
            {
                Unsafe.Copy(walk, ref values);
                walk += structSize;
            }

            return ptr{};
        }
    }


}

#endif // VORTICE_UNSAFEUTILITIES_H