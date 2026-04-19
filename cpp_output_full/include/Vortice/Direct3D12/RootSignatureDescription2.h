// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_ROOTSIGNATUREDESCRIPTION2_H
#define VORTICE_DIRECT3D12_ROOTSIGNATUREDESCRIPTION2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ROOTSIGNATUREDESCRIPTION2_H
#define VORTICE_VORTICE_ROOTSIGNATUREDESCRIPTION2_H

#include <cstdint>

namespace Vortice {

class RootSignatureDescription2
{
public:
    constexpr RootSignatureDescription2()
    {}

    constexpr RootSignatureDescription2(RootSignatureFlags flags, std::vector<RootParameter1> null, std::vector<StaticSamplerDescription1> null)
    Parameters = parameters;
        StaticSamplers = samplers;
        Flags = flags;
    ~RootSignatureDescription2() = default;

    uint32_t NumParameters;
    uint32_t NumStaticSamplers;
    RootSignatureFlags Flags;

    RootSignatureFlags Flags{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ROOTSIGNATUREDESCRIPTION2_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    uint32_t NumParameters;
    uint32_t NumStaticSamplers;
    RootSignatureFlags Flags;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_ROOTSIGNATUREDESCRIPTION2_H
