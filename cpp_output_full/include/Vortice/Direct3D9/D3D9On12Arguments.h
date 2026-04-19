// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_D3D9ON12ARGUMENTS_H
#define VORTICE_DIRECT3D9_D3D9ON12ARGUMENTS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_D3D9ON12ARGUMENTS_H
#define VORTICE_VORTICE_D3D9ON12ARGUMENTS_H

#include <cstdint>

namespace Vortice {

struct D3D9On12Arguments
{
public:
    RawBool Enable9On12;
    void* pD3D12Device;
    void* pD3D12Queue1;
    void* pD3D12Queue2;
    uint32_t NumQueues;
    uint32_t NodeMask;

    bool Enable9On12{};
    uint32_t NodeMask{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_D3D9ON12ARGUMENTS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    RawBool Enable9On12;
    void* pD3D12Device;
    void* pD3D12Queue1;
    void* pD3D12Queue2;
    uint32_t NumQueues;
    uint32_t NodeMask;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_D3D9ON12ARGUMENTS_H
