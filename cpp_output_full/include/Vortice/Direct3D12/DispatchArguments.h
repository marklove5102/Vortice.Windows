// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DISPATCHARGUMENTS_H
#define VORTICE_DIRECT3D12_DISPATCHARGUMENTS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DISPATCHARGUMENTS_H
#define VORTICE_VORTICE_DISPATCHARGUMENTS_H

#include <cstdint>

namespace Vortice {

struct DispatchArguments
{
public:
    constexpr DispatchArguments(uint32_t threadGroupCountX, uint32_t threadGroupCountY, uint32_t threadGroupCountZ)
    ThreadGroupCountX = threadGroupCountX;
        ThreadGroupCountY = threadGroupCountY;
        ThreadGroupCountZ = threadGroupCountZ;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DISPATCHARGUMENTS_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DISPATCHARGUMENTS_H
