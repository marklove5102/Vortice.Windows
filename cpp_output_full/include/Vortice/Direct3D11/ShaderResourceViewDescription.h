// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_SHADERRESOURCEVIEWDESCRIPTION_H
#define VORTICE_DIRECT3D11_SHADERRESOURCEVIEWDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHADERRESOURCEVIEWDESCRIPTION_H
#define VORTICE_VORTICE_SHADERRESOURCEVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ShaderResourceViewDescription
{
public:
    constexpr ShaderResourceViewDescription(ID3D11Buffer buffer, Format format, uint32_t firstElement, uint32_t numElements, BufferExtendedShaderResourceViewFlags BufferExtendedShaderResourceViewFlags.None)
    Format = format;
        ViewDimension = ShaderResourceViewDimension.BufferExtended;
        BufferEx.FirstElement = firstElement;
        BufferEx.NumElements = numElements;
        BufferEx.Flags = flags;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHADERRESOURCEVIEWDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_SHADERRESOURCEVIEWDESCRIPTION_H
