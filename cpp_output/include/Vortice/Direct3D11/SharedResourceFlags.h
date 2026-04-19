// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT3D11_SHAREDRESOURCEFLAGS_H
#define VORTICE_VORTICE_DIRECT3D11_SHAREDRESOURCEFLAGS_H

#include <cstdint>

namespace Vortice::Direct3D11 {

enum class SharedResourceFlags : uint32_t
{
    None = 0,
    Write = 1,
    Read = 0x80000000,
    GenericWrite = 0x40000000,
    GenericRead = 0x80000000,
    GenericExecute = 0x20000000,
    GenericAll = 0x10000000
};


} // namespace Vortice::Direct3D11

#endif // VORTICE_VORTICE_DIRECT3D11_SHAREDRESOURCEFLAGS_H
