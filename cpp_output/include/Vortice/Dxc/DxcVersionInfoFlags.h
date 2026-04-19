// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXC_DXCVERSIONINFOFLAGS_H
#define VORTICE_VORTICE_DXC_DXCVERSIONINFOFLAGS_H

#include <cstdint>

namespace Vortice::Dxc {

enum class DxcVersionInfoFlags : int32_t
{
    DxcVersionInfoFlags_None = 0,
    Debug = 1,
    Internal = 2
};


} // namespace Vortice::Dxc

#endif // VORTICE_VORTICE_DXC_DXCVERSIONINFOFLAGS_H
