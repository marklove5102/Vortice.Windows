// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_SAMPLEDESCRIPTION_H
#define VORTICE_DIRECTX_SAMPLEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SAMPLEDESCRIPTION_H
#define VORTICE_VORTICE_SAMPLEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct SampleDescription
{
public:
    constexpr SampleDescription(uint32_t count, uint32_t quality)
    Count = count;
        Quality = quality;
    static const SampleDescription Default{new(1, 0)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SAMPLEDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_SAMPLEDESCRIPTION_H
