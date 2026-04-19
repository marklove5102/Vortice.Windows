// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_VERTEXELEMENT_H
#define VORTICE_DIRECT3D9_VERTEXELEMENT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VERTEXELEMENT_H
#define VORTICE_VORTICE_VERTEXELEMENT_H

#include <cstdint>

namespace Vortice {

struct VertexElement
{
public:
    constexpr VertexElement(int16_t stream, int16_t offset, DeclarationType type, DeclarationMethod method, DeclarationUsage usage, uint8_t 0)
    Stream = stream;
        Offset = offset;
        Type = type;
        Method = method;
        Usage = usage;
        UsageIndex = usageIndex;
    static const VertexElement VertexDeclarationEnd{new(0xff, 0, DeclarationType.Unused, DeclarationMethod.Default, DeclarationUsage.Position, 0)};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VERTEXELEMENT_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_VERTEXELEMENT_H
