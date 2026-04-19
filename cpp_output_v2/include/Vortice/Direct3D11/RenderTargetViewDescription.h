// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_RENDERTARGETVIEWDESCRIPTION_H
#define VORTICE_DIRECT3D11_RENDERTARGETVIEWDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERTARGETVIEWDESCRIPTION_H
#define VORTICE_VORTICE_RENDERTARGETVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RenderTargetViewDescription
{
public:
    constexpr RenderTargetViewDescription(ID3D11Buffer buffer, Format format, uint32_t firstElement, uint32_t numElements)
    Format = format;
        ViewDimension = RenderTargetViewDimension.Buffer;
        Buffer.FirstElement = firstElement;
        Buffer.NumElements = numElements;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERTARGETVIEWDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_RENDERTARGETVIEWDESCRIPTION_H
