// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_CUSTOMVERTEXBUFFERPROPERTIES_H
#define VORTICE_DIRECT2D1_CUSTOMVERTEXBUFFERPROPERTIES_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_CUSTOMVERTEXBUFFERPROPERTIES_H
#define VORTICE_VORTICE_CUSTOMVERTEXBUFFERPROPERTIES_H

#include <cstdint>

namespace Vortice {

class CustomVertexBufferProperties
{
public:
    constexpr CustomVertexBufferProperties(std::vector<uint8_t> shaderBufferWithInputSignature, int32_t stride, std::initializer_list<std::vector<InputElementDescription>> elements)
    ShaderBufferWithInputSignature = shaderBufferWithInputSignature;
        Elements = elements;
        Stride = stride;
    ~CustomVertexBufferProperties() = default;

    uint32_t shaderBufferSize;
    uint32_t elementCount;
    uint32_t stride;

    int32_t Stride{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_CUSTOMVERTEXBUFFERPROPERTIES_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    uint32_t shaderBufferSize;
    uint32_t elementCount;
    uint32_t stride;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_CUSTOMVERTEXBUFFERPROPERTIES_H
