// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ROOTSIGNATUREDESCRIPTION_H
#define VORTICE_DIRECT3D12_ROOTSIGNATUREDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROOTSIGNATUREDESCRIPTION_H
#define VORTICE_VORTICE_ROOTSIGNATUREDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class RootSignatureDescription
{
public:
    constexpr RootSignatureDescription()
    {}

    constexpr RootSignatureDescription(RootSignatureFlags flags, std::vector<RootParameter> default, std::vector<StaticSamplerDescription> default)
    Parameters = parameters;
        StaticSamplers = samplers;
        Flags = flags;
    ~RootSignatureDescription() = default;

    int32_t NumParameters;
    int32_t NumStaticSamplers;
    RootSignatureFlags Flags;

    RootSignatureFlags Flags{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROOTSIGNATUREDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t NumParameters;
    int32_t NumStaticSamplers;
    RootSignatureFlags Flags;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ROOTSIGNATUREDESCRIPTION_H
