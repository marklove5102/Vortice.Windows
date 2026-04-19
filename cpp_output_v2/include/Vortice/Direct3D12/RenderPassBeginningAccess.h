// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERPASSBEGINNINGACCESS_H
#define VORTICE_DIRECT3D12_RENDERPASSBEGINNINGACCESS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERPASSBEGINNINGACCESS_H
#define VORTICE_VORTICE_RENDERPASSBEGINNINGACCESS_H

#include <cstdint>

namespace Vortice {

struct RenderPassBeginningAccess
{
public:
    constexpr RenderPassBeginningAccess(RenderPassBeginningAccessType type)
    Type = type;
        Clear = default;
    constexpr RenderPassBeginningAccess(const RenderPassBeginningAccessClearParameters& clear)
    Type = RenderPassBeginningAccessType.Clear;
        Clear = clear;
    constexpr RenderPassBeginningAccess(const ClearValue& clearValue)
    Type = RenderPassBeginningAccessType.Clear;
        Clear = new RenderPassBeginningAccessClearParameters(clearValue);
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERPASSBEGINNINGACCESS_H

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

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERPASSBEGINNINGACCESS_H
