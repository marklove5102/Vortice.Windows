// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SHADERDESCRIPTION_H
#define VORTICE_SHADERDESCRIPTION_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D11 {
        namespace Shader; {

            namespace Vortice.Direct3D11.Shader;

            public struct ShaderDescription
            {
                ShaderVersionType get_Type() const { return (ShaderVersionType)(((Version) >> 16) & 0xffff); }
                uint32_t get_Major() const { return ((Version) >> 4) & 0xf; }
                uint32_t get_Minor() const { return ((Version) >> 0) & 0xf; }
            }


        }
    }
}

#endif // VORTICE_SHADERDESCRIPTION_H