// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICE2_H
#define VORTICE_DIRECT3D11_ID3D11DEVICE2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICE2_H
#define VORTICE_VORTICE_ID3D11DEVICE2_H

#include <cstdint>

namespace Vortice {

class ID3D11Device2
{
public:
    ~ID3D11Device2() = default;

    uint32_t CheckMultisampleQualityLevels1() { return CheckMultisampleQualityLevels1(format, sampleCount, CheckMultisampleQualityLevelsFlags.TiledResource); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICE2_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICE2_H
