// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_VERTEXRANGE_H
#define VORTICE_DIRECT2D1_VERTEXRANGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VERTEXRANGE_H
#define VORTICE_VORTICE_VERTEXRANGE_H

#include <cstdint>

namespace Vortice {

struct VertexRange
{
public:
    constexpr VertexRange(uint32_t startVertex, uint32_t vertexCount)
    StartVertex = startVertex;
        VertexCount = vertexCount;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VERTEXRANGE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_VERTEXRANGE_H
