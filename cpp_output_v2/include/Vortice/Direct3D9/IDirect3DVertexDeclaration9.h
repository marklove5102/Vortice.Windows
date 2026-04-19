// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_IDIRECT3DVERTEXDECLARATION9_H
#define VORTICE_DIRECT3D9_IDIRECT3DVERTEXDECLARATION9_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECT3DVERTEXDECLARATION9_H
#define VORTICE_VORTICE_IDIRECT3DVERTEXDECLARATION9_H

#include <cstdint>

namespace Vortice {

class IDirect3DVertexDeclaration9
{
public:
    ~IDirect3DVertexDeclaration9() = default;

    uint32_t get_ElementsCount() const { uint count = 0;
            GetDeclaration(nullptr, ref count);
            return count; }

    uint32_t GetElements() { uint count = (uint)elements.Length;
        GetDeclaration(elements, ref count);
        return count; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECT3DVERTEXDECLARATION9_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_IDIRECT3DVERTEXDECLARATION9_H
