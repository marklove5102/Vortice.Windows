// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D9_HELPERS_H
#define VORTICE_DIRECT3D9_HELPERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HELPERS_H
#define VORTICE_VORTICE_HELPERS_H

#include <cstdint>

namespace Vortice {

class Helpers
{
public:
    ~Helpers() = default;

    static const GUID DebugObjectName{new(0x429B8C22, 0x9188, 0x4B0C, 0x87, 0x42, 0xAC, 0xB0, 0xBF, 0x85, 0xC2, 0x00)};

    static int32_t ToBgra() { int value = color.B;
        value |= color.G << 8;
        value |= color.R << 16;
        value |= color.A << 24;

        return (int)value; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HELPERS_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D9_HELPERS_H
