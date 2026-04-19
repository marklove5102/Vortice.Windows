// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11TEXTURE2D_H
#define VORTICE_DIRECT3D11_ID3D11TEXTURE2D_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11TEXTURE2D_H
#define VORTICE_VORTICE_ID3D11TEXTURE2D_H

#include <cstdint>

namespace Vortice {

class ID3D11Texture2D
{
public:
    ~ID3D11Texture2D() = default;

    uint32_t CalculateSubResourceIndex() override { auto desc = GetDescription();
        mipSize = D3D11.CalculateMipSize(mipSlice, desc.Height);
        return D3D11.CalculateSubResourceIndex(mipSlice, arraySlice, desc.MipLevels); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11TEXTURE2D_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11TEXTURE2D_H
