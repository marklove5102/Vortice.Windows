// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TEXTRANGE_H
#define VORTICE_DIRECT2D1_TEXTRANGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEXTRANGE_H
#define VORTICE_VORTICE_TEXTRANGE_H

#include <cstdint>

namespace Vortice {

struct TextRange
{
public:
    constexpr TextRange(uint32_t startPosition, uint32_t length)
    StartPosition = startPosition;
        Length = length;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEXTRANGE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TEXTRANGE_H
