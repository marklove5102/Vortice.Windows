// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ROOTPARAMETER1_H
#define VORTICE_DIRECT3D12_ROOTPARAMETER1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROOTPARAMETER1_H
#define VORTICE_VORTICE_ROOTPARAMETER1_H

#include <cstdint>

namespace Vortice {

struct RootParameter1
{
public:
    constexpr RootParameter1(RootDescriptorTable1 descriptorTable, ShaderVisibility visibility)
    _parameterType = RootParameterType.DescriptorTable;
        _union = new Union();
        descriptorTable.__MarshalTo(ref _union.DescriptorTable);
        _shaderVisibility = visibility;
    constexpr RootParameter1(RootConstants rootConstants, ShaderVisibility visibility)
    _parameterType = RootParameterType.Constant32Bits;
        _union = new Union { Constants = rootConstants };
        _shaderVisibility = visibility;
    RootParameterType ParameterType{> _parameterType};
    ShaderVisibility ShaderVisibility{> _shaderVisibility};
    RootConstants Constants;
    RootDescriptor1 Descriptor;

    RootDescriptorTable1 get_DescriptorTable() const { auto result = new RootDescriptorTable1();
            result.__MarshalFrom(_union.DescriptorTable);
            return result; }
    RootConstants get_Constants() const { _union.Constants }
    RootDescriptor1 get_Descriptor() const { _union.Descriptor }


private:
    const RootParameterType _parameterType;
    const Union _union;
    const ShaderVisibility _shaderVisibility;
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROOTPARAMETER1_H

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
    RootDescriptor1 Descriptor;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ROOTPARAMETER1_H
