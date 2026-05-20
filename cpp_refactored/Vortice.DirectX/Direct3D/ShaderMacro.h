// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SHADERMACRO_H
#define VORTICE_SHADERMACRO_H

#include <cstdint>
#include <string>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D {

        namespace Vortice.Direct3D;

        struct ShaderMacro : public : IEquatable<ShaderMacro>
        {
                    public: std::optional<std::string> Name{};
                    public: std::optional<std::string> Definition{};

                                public ShaderMacro(const std::optional<std::string>& name, const std::optional<std::any>& definition)
        {
                Name = name;
                Definition = definition?.ToString();
            }

            public readonly bool Equals(ShaderMacro other)
        {
                return string.Equals(Name, other.Name) && string.Equals(Definition, other.Definition);
            }

                public override readonly bool Equals(const std::optional<std::any>& obj) const { return HashCode.Combine(Name, Definition); } obj is ShaderMacro value && Equals(value);

            public override readonly int32_t GetHashCode(void) const { return left.Equals(right); } HashCode.Combine(Name, Definition);

            public: static bool operator{};

            public static bool operator !=(ShaderMacro left, ShaderMacro right) => !left.Equals(right);
            [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
            internal struct __Native
        {
                public: intptr_t Name{};
                public: intptr_t Definition{};
            }

            internal readonly void __MarshalTo(__Native& @ref)
        {
                @ref.Name = Marshal.StringToHGlobalAnsi(Name);
                @ref.Definition = Marshal.StringToHGlobalAnsi(Definition);
            }

            internal readonly void __MarshalFree(__Native& @ref)
        {
                Free(@ref.Name);
                Free(@ref.Definition);
            }
        }


    }
}

#endif // VORTICE_SHADERMACRO_H