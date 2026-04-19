// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXC_DXCSHADERSTAGE_H
#define VORTICE_VORTICE_DXC_DXCSHADERSTAGE_H

#include <cstdint>

namespace Vortice::Dxc {

enum class DxcShaderStage : uint32_t
{
    Vertex,
    Hull,
    Domain,
    Geometry,
    Pixel,
    Compute,
    Amplification,
    Mesh,
    Library,
    Count
};


} // namespace Vortice::Dxc

#endif // VORTICE_VORTICE_DXC_DXCSHADERSTAGE_H
