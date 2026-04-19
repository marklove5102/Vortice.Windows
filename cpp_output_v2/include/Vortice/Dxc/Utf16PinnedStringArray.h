// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_UTF16PINNEDSTRINGARRAY_H
#define VORTICE_DXC_UTF16PINNEDSTRINGARRAY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UTF16PINNEDSTRINGARRAY_H
#define VORTICE_VORTICE_UTF16PINNEDSTRINGARRAY_H

#include <cstdint>

namespace Vortice {

struct Utf16PinnedStringArray
{
public:
    intptr_t Handle{> (nint)_handle};
    const uint32_t Length;

    void Release() { for (int i = 0; i < Length; i++)
            NativeMemory.Free(_handle[i]);

        NativeMemory.Free(_handle); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UTF16PINNEDSTRINGARRAY_H

} // namespace Vortice

#endif // VORTICE_DXC_UTF16PINNEDSTRINGARRAY_H
