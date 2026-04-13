// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D_SHADERMACRO_H
#define VORTICE_DIRECT3D_SHADERMACRO_H

#include <string>
#include <optional>

namespace Vortice::Direct3D
{
    struct ShaderMacro
    {
        std::optional<std::string> Name;
        std::optional<std::string> Definition;

        ShaderMacro() = default;

        ShaderMacro(const std::optional<std::string>& name, const std::optional<std::string>& definition)
            : Name(name), Definition(definition) {}

        ShaderMacro(const char* name, const char* definition)
            : Name(std::string(name)), Definition(std::string(definition)) {}

        bool operator==(const ShaderMacro& other) const
        {
            return Name == other.Name && Definition == other.Definition;
        }

        bool operator!=(const ShaderMacro& other) const
        {
            return !(*this == other);
        }
    };
}

#endif // VORTICE_DIRECT3D_SHADERMACRO_H
