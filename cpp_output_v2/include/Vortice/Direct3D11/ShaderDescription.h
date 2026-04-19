// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_SHADERDESCRIPTION_H
#define VORTICE_DIRECT3D11_SHADERDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHADERDESCRIPTION_H
#define VORTICE_VORTICE_SHADERDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ShaderDescription
{
public:
    ShaderVersionType Type{> (ShaderVersionType)(((Version) >> 16) & 0xffff)};
    uint32_t Major{> ((Version) >> 4) & 0xf};
    uint32_t Minor{> ((Version) >> 0) & 0xf};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHADERDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_SHADERDESCRIPTION_H
