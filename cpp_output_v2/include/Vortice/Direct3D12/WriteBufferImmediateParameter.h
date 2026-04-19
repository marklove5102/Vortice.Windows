// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_WRITEBUFFERIMMEDIATEPARAMETER_H
#define VORTICE_DIRECT3D12_WRITEBUFFERIMMEDIATEPARAMETER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WRITEBUFFERIMMEDIATEPARAMETER_H
#define VORTICE_VORTICE_WRITEBUFFERIMMEDIATEPARAMETER_H

#include <cstdint>

namespace Vortice {

struct WriteBufferImmediateParameter
{
public:
    constexpr WriteBufferImmediateParameter(uint64_t destination, uint32_t value)
    Dest = destination;
        Value = value;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_WRITEBUFFERIMMEDIATEPARAMETER_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_WRITEBUFFERIMMEDIATEPARAMETER_H
