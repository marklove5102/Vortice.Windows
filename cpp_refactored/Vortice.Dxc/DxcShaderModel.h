// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXCSHADERMODEL_H
#define VORTICE_DXCSHADERMODEL_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Dxc {


        namespace Vortice.Dxc;

        public readonly struct DxcShaderModel : public : IEquatable<DxcShaderModel>
        {
            public: static const DxcShaderModel Model6_0{};
            public: static const DxcShaderModel Model6_1{};
            public: static const DxcShaderModel Model6_2{};
            public: static const DxcShaderModel Model6_3{};
            public: static const DxcShaderModel Model6_4{};
            public: static const DxcShaderModel Model6_5{};
            public: static const DxcShaderModel Model6_6{};
            public: static const DxcShaderModel Model6_7{};

            public DxcShaderModel(int32_t major, int32_t minor)
        {
                Major = major;
                Minor = minor;
            }

            public int Major { get; }
            public int Minor { get; }

                override bool Equals(const std::optional<std::any>& obj) const { return "Major={Major}, Minor={Minor}"; } obj is DxcShaderModel value && Equals(value);

            bool Equals(DxcShaderModel other)
        {
                return Major{};
            }

            public: static bool operator{};
            }

            public static bool operator !=(DxcShaderModel left, DxcShaderModel right)
            {
                return !(left == right);
            }

                override int32_t GetHashCode(void)
        {
                unchecked
                {
                    int32_t hashCode{};
                    hashCode = (hashCode * 397) ^ Minor.GetHashCode();
                    return hashCode{};
                }
            }

                override std::string ToString(void)
        { $"Major={Major}, Minor={Minor}";
        }


    }
}

#endif // VORTICE_DXCSHADERMODEL_H