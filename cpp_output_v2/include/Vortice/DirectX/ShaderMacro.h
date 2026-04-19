// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_SHADERMACRO_H
#define VORTICE_DIRECTX_SHADERMACRO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHADERMACRO_H
#define VORTICE_VORTICE_SHADERMACRO_H

#include <cstdint>

namespace Vortice {

struct ShaderMacro : public IEquatable<ShaderMacro>
{
public:
    constexpr ShaderMacro(std::string name, std::any definition)
    Name = name;
        Definition = definition?.ToString();
    static bool operator{=(ShaderMacro left, ShaderMacro right) => left.Equals(right)};
    intptr_t Name;
    intptr_t Definition;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHADERMACRO_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    intptr_t Name;
    intptr_t Definition;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_SHADERMACRO_H
