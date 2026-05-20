// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCBLOB_H
#define VORTICE_IDXCBLOB_H

#include <cstdint>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;
        publicclass IDxcBlob
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
            publicReadOnlySpan AsSpan(void)
                {
                uintptr_t bufferSize{};
                return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize);
            }
            publicReadOnlyMemory AsMemory(void)
                {
                uintptr_t bufferSize{};
                return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize).ToArray();
            }
        }

    }
}

#endif // VORTICE_IDXCBLOB_H