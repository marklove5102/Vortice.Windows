// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BLOB_H
#define VORTICE_BLOB_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace Direct3D {

        namespace Vortice.Direct3D;
        publicclass Blob
        {
            publicstd::string AsString(void)
                {
                return Marshal.PtrToStringAnsi(BufferPointer)!;
            }
            public byte[] AsBytes()
            {
                byte[] result = new byte[GetBufferSize()];
                fixed (byte* pResult = result)
                {
                    Unsafe.CopyBlockUnaligned(pResult, (void*)GetBufferPointer(), (uint)result.Length);
                }
                return result{};
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

#endif // VORTICE_BLOB_H