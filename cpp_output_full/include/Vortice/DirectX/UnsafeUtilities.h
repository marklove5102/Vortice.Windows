// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_UNSAFEUTILITIES_H
#define VORTICE_DIRECTX_UNSAFEUTILITIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNSAFEUTILITIES_H
#define VORTICE_VORTICE_UNSAFEUTILITIES_H

#include <cstdint>

namespace Vortice {

class UnsafeUtilities
{
public:
    ~UnsafeUtilities() = default;

    static void Free() { NativeMemory.Free(ptr); }

    static void Free() { NativeMemory.Free(ptr.ToPointer()); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNSAFEUTILITIES_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_UNSAFEUTILITIES_H
