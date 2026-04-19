// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_BUFFERDESCRIPTION_H
#define VORTICE_DIRECT3D11_BUFFERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BUFFERDESCRIPTION_H
#define VORTICE_VORTICE_BUFFERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct BufferDescription
{
public:
    constexpr BufferDescription(uint32_t byteWidth, BindFlags bindFlags, ResourceUsage ResourceUsage.Default, CpuAccessFlags CpuAccessFlags.None, ResourceOptionFlags ResourceOptionFlags.None, uint32_t 0)
    ByteWidth = byteWidth;
        BindFlags = bindFlags;
        Usage = usage;
        CPUAccessFlags = cpuAccessFlags;
        MiscFlags = miscFlags;
        StructureByteStride = structureByteStride;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_BUFFERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_BUFFERDESCRIPTION_H
