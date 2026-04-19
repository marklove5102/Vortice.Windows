// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERPASSENDINGACCESS_H
#define VORTICE_DIRECT3D12_RENDERPASSENDINGACCESS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERPASSENDINGACCESS_H
#define VORTICE_VORTICE_RENDERPASSENDINGACCESS_H

#include <cstdint>

namespace Vortice {

struct RenderPassEndingAccess
{
public:
    constexpr RenderPassEndingAccess(RenderPassEndingAccessType type)
    Type = type;
        Resolve = default;
    constexpr RenderPassEndingAccess(RenderPassEndingAccessResolveParameters resolve)
    Type = RenderPassEndingAccessType.Resolve;
        Resolve = resolve;
    RenderPassEndingAccessType Type;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERPASSENDINGACCESS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WITH_H
#define VORTICE_VORTICE_WITH_H

#include <cstdint>

namespace Vortice {

struct with
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_WITH_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    RenderPassEndingAccessType Type;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERPASSENDINGACCESS_H
