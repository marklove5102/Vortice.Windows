// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_UTF16PINNEDSTRINGARRAY_H
#define VORTICE_UTF16PINNEDSTRINGARRAY_H

#include <cstdint>
#include <string>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;

        public unsafe readonly ref struct Utf16PinnedStringArray
        {
            private readonly char** _handle;

            intptr_t get_Handle() const { return static_cast<nint>(_handle); }

            public: const uint32_t Length{};

            public Utf16PinnedStringArray(const std::vector<std::string>& strings, uint32_t length{};

                _handle = (char**)NativeMemory.Alloc((nuint)(Length * sizeof(char*)));

                for (int32_t i{}; i < Length; i++)
                {
                    char[] chars = strings.ToCharArray();

                    uint32_t size{};
                    _handle= (char*)NativeMemory.Alloc(size);

                    if (!string.IsNullOrEmpty(strings))
                    {
                        fixed (char* pChars = chars)
                            Unsafe.CopyBlock(_handle, pChars, size);
                    }
                }
            }

            void Release(void)
        {
                for (int32_t i{}; i < Length; i++)
                    NativeMemory.Free(_handle);

                NativeMemory.Free(_handle);
            }

            public static implicit operator char**(Utf16PinnedStringArray pStringArray) => pStringArray._handle;
        }


    }
}

#endif // VORTICE_UTF16PINNEDSTRINGARRAY_H