// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_DXCSHADERMODEL_H
#define VORTICE_DXC_DXCSHADERMODEL_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXCSHADERMODEL_H
#define VORTICE_VORTICE_DXCSHADERMODEL_H

#include <cstdint>

namespace Vortice {

struct DxcShaderModel : public IEquatable<DxcShaderModel>
{
public:
    constexpr DxcShaderModel(int32_t major, int32_t minor)
    Major = major;
        Minor = minor;
    static const DxcShaderModel Model6_0{new(6, 0)};
    static const DxcShaderModel Model6_1{new(6, 1)};
    static const DxcShaderModel Model6_2{new(6, 2)};
    static const DxcShaderModel Model6_3{new(6, 3)};
    static const DxcShaderModel Model6_4{new(6, 4)};
    static const DxcShaderModel Model6_5{new(6, 5)};
    static const DxcShaderModel Model6_6{new(6, 6)};
    static const DxcShaderModel Model6_7{new(6, 7)};
    static bool operator{=(DxcShaderModel left, DxcShaderModel right)
    {
        return left.Equals(right)};

    int32_t Major{};
    int32_t Minor{};

    bool Equals() { return Major == other.Major && Minor == other.Minor; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXCSHADERMODEL_H

} // namespace Vortice

#endif // VORTICE_DXC_DXCSHADERMODEL_H
