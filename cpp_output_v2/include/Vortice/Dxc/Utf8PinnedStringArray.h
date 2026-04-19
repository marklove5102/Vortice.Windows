// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_UTF8PINNEDSTRINGARRAY_H
#define VORTICE_DXC_UTF8PINNEDSTRINGARRAY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UTF8PINNEDSTRINGARRAY_H
#define VORTICE_VORTICE_UTF8PINNEDSTRINGARRAY_H

#include <cstdint>

namespace Vortice {

struct Utf8PinnedStringArray
{
public:
    constexpr Utf8PinnedStringArray(std::vector<std::string> strings, uint32_t 0)
    Length = length == 0 ? (uint)strings.Length : length;
        _handle = (byte**)NativeMemory.Alloc((nuint)(Length * sizeof(byte*)));

        for (int i = 0; i < Length; i++)
        {
            byte[] bytes = Encoding.UTF8.GetBytes(strings[i]);
            if (bytes.Length == 0)
                continue;

            uint size = (uint)(bytes.Length + 1) * sizeof(byte);
            _handle[i] = (byte*)NativeMemory.Alloc(size);
            fixed (byte* pBytes = bytes)
                Unsafe.CopyBlock(_handle[i], pBytes, size);
        }
    intptr_t Handle{> (nint)_handle};
    const uint32_t Length;

    void Release() { for (int i = 0; i < Length; i++)
            NativeMemory.Free(_handle[i]);

        NativeMemory.Free(_handle); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UTF8PINNEDSTRINGARRAY_H

} // namespace Vortice

#endif // VORTICE_DXC_UTF8PINNEDSTRINGARRAY_H
