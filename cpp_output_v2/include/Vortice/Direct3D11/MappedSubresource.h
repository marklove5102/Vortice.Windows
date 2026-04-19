// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_MAPPEDSUBRESOURCE_H
#define VORTICE_DIRECT3D11_MAPPEDSUBRESOURCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MAPPEDSUBRESOURCE_H
#define VORTICE_VORTICE_MAPPEDSUBRESOURCE_H

#include <cstdint>

namespace Vortice {

struct MappedSubresource
{
public:
    constexpr MappedSubresource(void* dataPointer, uint32_t rowPitch, uint32_t depthPitch)
    DataPointer = dataPointer;
        RowPitch = rowPitch;
        DepthPitch = depthPitch;
    constexpr MappedSubresource(void* dataPointer)
    DataPointer = dataPointer;
        RowPitch = DepthPitch = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MAPPEDSUBRESOURCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_MAPPEDSUBRESOURCE_H
