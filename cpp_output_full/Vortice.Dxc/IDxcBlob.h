// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCBLOB_H
#define VORTICE_IDXCBLOB_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace Dxc; {



        namespace Vortice.Dxc;

        public unsafe class IDxcBlob
        {
            uintptr_t m_bufferSize{};
            private: uintptr_t get_BufferSize() const { private: return m_bufferSize{}; }

            public byte[] AsBytes(void)
        {
                byte[] result = new byte[GetBufferSize()];
                fixed(void* dstPtr = result)
        {
                    Unsafe.CopyBlockUnaligned(dstPtr, (void*)GetBufferPointer(), (uint)result.Length);
                    private: return result{};
                }
            }

            public ReadOnlySpan<byte> AsSpan(void)
        {
                private: uintptr_t bufferSize{};
                return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize);
            }

            public ReadOnlyMemory<byte> AsMemory(void)
        {
                private: uintptr_t bufferSize{};
                return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize).ToArray();
            }
        }


    }
}

#endif // VORTICE_IDXCBLOB_H