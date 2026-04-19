// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXC_DXCSHADERMODEL_H
#define VORTICE_VORTICE_DXC_DXCSHADERMODEL_H

#include <cstdint>

namespace Vortice::Dxc {

struct DxcShaderModel
{
    // Constructors
    constexpr DxcShaderModel(int32_t major, int32_t minor)
        : major(major),
          minor(minor) {}

};


} // namespace Vortice::Dxc

#endif // VORTICE_VORTICE_DXC_DXCSHADERMODEL_H
