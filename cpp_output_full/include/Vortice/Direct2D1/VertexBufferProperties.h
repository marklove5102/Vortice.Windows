// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_VERTEXBUFFERPROPERTIES_H
#define VORTICE_DIRECT2D1_VERTEXBUFFERPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VERTEXBUFFERPROPERTIES_H
#define VORTICE_VORTICE_VERTEXBUFFERPROPERTIES_H

#include <cstdint>

namespace Vortice {

class VertexBufferProperties
{
public:
    constexpr VertexBufferProperties(int32_t inputCount, VertexUsage usage, std::vector<uint8_t> data, int32_t byteWidth)
    InputCount = inputCount;
        Usage = usage;
        Data = (byte[])data.Clone();
        ByteWidth = byteWidth;
    ~VertexBufferProperties() = default;

    int32_t inputCount;
    VertexUsage usage;
    int32_t byteWidth;

    int32_t InputCount{};
    VertexUsage Usage{};
    int32_t ByteWidth{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VERTEXBUFFERPROPERTIES_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t inputCount;
    VertexUsage usage;
    int32_t byteWidth;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_VERTEXBUFFERPROPERTIES_H
