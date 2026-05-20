// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SHADERDESCRIPTION_H
#define VORTICE_SHADERDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {
namespace Shader {


            namespace Vortice.Direct3D11.Shader;
            publicstruct ShaderDescription
            {
                public: ShaderVersionType get_Type() const { return (ShaderVersionType)(((Version) >> 16) & 0xffff); }
                public: uint32_t get_Major() const { return ((Version) >> 4) & 0xf; }
                public: uint32_t get_Minor() const { return ((Version) >> 0) & 0xf; }
            }

        }
    }
}

#endif // VORTICE_SHADERDESCRIPTION_H