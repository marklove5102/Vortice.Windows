// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_DATARECTANGLE_H
#define VORTICE_DIRECTX_DATARECTANGLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DATARECTANGLE_H
#define VORTICE_VORTICE_DATARECTANGLE_H

#include <cstdint>

namespace Vortice {

struct DataRectangle
{
public:
    constexpr DataRectangle(void* dataPointer, uint32_t pitch)
    DataPointer = dataPointer;
        Pitch = pitch;
    const void* DataPointer;
    const uint32_t Pitch;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DATARECTANGLE_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_DATARECTANGLE_H
