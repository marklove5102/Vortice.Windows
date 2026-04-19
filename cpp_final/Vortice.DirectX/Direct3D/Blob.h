// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BLOB_H
#define VORTICE_BLOB_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace Direct3D {

        namespace Vortice.Direct3D;

        class Blob
        {
            std::string AsString(void)
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

#endif // VORTICE_BLOB_H