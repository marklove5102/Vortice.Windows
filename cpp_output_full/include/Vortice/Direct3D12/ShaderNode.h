// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_SHADERNODE_H
#define VORTICE_DIRECT3D12_SHADERNODE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHADERNODE_H
#define VORTICE_VORTICE_SHADERNODE_H

#include <cstdint>

namespace Vortice {

struct ShaderNode
{
public:
    NodeOverridesType OverridesType;
    void* Shader;
    NodeOverridesType OverridesType;
    Union Inner;


private:
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHADERNODE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* Shader;
    NodeOverridesType OverridesType;
    Union Inner;


private:
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_SHADERNODE_H
