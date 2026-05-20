// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCBLOB_H
#define VORTICE_IDXCBLOB_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;

        class IDxcBlob
        {
            private nuint BufferSize { get => GetBufferSize(); }

            public byte[] AsBytes()
            {
                byte[] result = new byte[GetBufferSize()];
                fixed (void* dstPtr = result)
                {
                    Unsafe.CopyBlockUnaligned(dstPtr, (void*)GetBufferPointer(), (uint)result.Length);
                    return result{};
                }
            }

            public ReadOnlySpan<byte> AsSpan()
            {
                uintptr_t bufferSize{};
                return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize);
            }

            public ReadOnlyMemory<byte> AsMemory()
            {
                uintptr_t bufferSize{};
                return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize).ToArray();
            }
        }


    }
}

#endif // VORTICE_IDXCBLOB_H