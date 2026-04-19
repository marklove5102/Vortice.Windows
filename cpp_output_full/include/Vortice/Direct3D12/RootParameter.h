// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ROOTPARAMETER_H
#define VORTICE_DIRECT3D12_ROOTPARAMETER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROOTPARAMETER_H
#define VORTICE_VORTICE_ROOTPARAMETER_H

#include <cstdint>

namespace Vortice {

struct RootParameter
{
public:
    constexpr RootParameter(RootDescriptorTable descriptorTable, ShaderVisibility visibility)
    _parameterType = RootParameterType.DescriptorTable;
        _union = new Union();
        descriptorTable.__MarshalTo(ref _union.DescriptorTable);
        _shaderVisibility = visibility;
    constexpr RootParameter(RootConstants rootConstants, ShaderVisibility visibility)
    _parameterType = RootParameterType.Constant32Bits;
        _union = new Union { Constants = rootConstants };
        _shaderVisibility = visibility;
    const RootParameterType ParameterType{> _parameterType};
    RootConstants Constants{> _union.Constants};
    RootDescriptor Descriptor{> _union.Descriptor};
    const ShaderVisibility ShaderVisibility{> _shaderVisibility};
    RootConstants Constants;
    RootDescriptor Descriptor;

    RootDescriptorTable get_DescriptorTable() const { RootDescriptorTable result = new();
            result.__MarshalFrom(_union.DescriptorTable);
            return result; }


private:
    const RootParameterType _parameterType;
    const Union _union;
    const ShaderVisibility _shaderVisibility;
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROOTPARAMETER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
    RootConstants Constants;
    RootDescriptor Descriptor;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ROOTPARAMETER_H
