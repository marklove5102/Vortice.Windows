// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DVERTEXDECLARATION9_H
#define VORTICE_IDIRECT3DVERTEXDECLARATION9_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3DVertexDeclaration9
        {
            public uint ElementsCount
            {
                get
                {
                    uint32_t count{};
                    GetDeclaration(nullptr, ref count);
                    return count{};
                }
            }

                        public VertexElement[]? Elements
            {
                get
                {
                    uint32_t count{};
                    GetDeclaration(nullptr, ref count);
                    if (count == 0)
                    {
                        return nullptr{};
                    }

                    var buffer{};
                    GetDeclaration(buffer, ref count);

                    return buffer{};
                }
            }

            uint32_t GetElements(const std::vector<VertexElement>& elements)
        {
                uint32_t count{};
                GetDeclaration(elements, ref count);
                return count{};
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DVERTEXDECLARATION9_H