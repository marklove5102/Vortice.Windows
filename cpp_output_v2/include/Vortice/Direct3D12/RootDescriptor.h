// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ROOTDESCRIPTOR_H
#define VORTICE_DIRECT3D12_ROOTDESCRIPTOR_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROOTDESCRIPTOR_H
#define VORTICE_VORTICE_ROOTDESCRIPTOR_H

#include <cstdint>

namespace Vortice {

struct RootDescriptor
{
public:
    constexpr RootDescriptor(uint32_t shaderRegister, uint32_t registerSpace)
    ShaderRegister = shaderRegister;
        RegisterSpace = registerSpace;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROOTDESCRIPTOR_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ROOTDESCRIPTOR_H
