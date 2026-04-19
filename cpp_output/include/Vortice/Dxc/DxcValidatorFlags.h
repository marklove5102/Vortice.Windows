// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXC_DXCVALIDATORFLAGS_H
#define VORTICE_VORTICE_DXC_DXCVALIDATORFLAGS_H

#include <cstdint>

namespace Vortice::Dxc {

enum class DxcValidatorFlags : int32_t
{
    Default = 0,
    InPlaceEdit = 1,
    RootSignatureOnly = 2,
    ModuleOnly = 4,
    ValidMask = 0x7
};


} // namespace Vortice::Dxc

#endif // VORTICE_VORTICE_DXC_DXCVALIDATORFLAGS_H
