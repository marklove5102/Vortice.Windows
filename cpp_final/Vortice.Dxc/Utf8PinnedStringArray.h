// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UTF8PINNEDSTRINGARRAY_H
#define VORTICE_UTF8PINNEDSTRINGARRAY_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;

        public unsafe readonly ref struct Utf8PinnedStringArray
        {
            private readonly byte** _handle;

            intptr_t get_Handle() const { return static_cast<nint>(_handle); }

            public: const uint32_t Length{};

            public Utf8PinnedStringArray(const std::vector<std::string>& strings, uint32_t length{};
                _handle = (byte**)NativeMemory.Alloc((nuint)(Length * sizeof(byte*)));

                for (int32_t i{}; i < Length; i++)
                {
                    byte[] bytes = Encoding.UTF8.GetBytes(strings);
                    if (bytes.Length == 0)
                        continue;

                    uint32_t size{};
                    _handle= (byte*)NativeMemory.Alloc(size);
                    fixed (byte* pBytes = bytes)
                        Unsafe.CopyBlock(_handle, pBytes, size);
                }
            }

            void Release(void)
        {
                for (int32_t i{}; i < Length; i++)
                    NativeMemory.Free(_handle);

                NativeMemory.Free(_handle);
            }

            public static implicit operator byte**(Utf8PinnedStringArray pStringArray)
                => pStringArray._handle;
        }


    }
}

#endif // VORTICE_UTF8PINNEDSTRINGARRAY_H