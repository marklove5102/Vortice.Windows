// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICPALETTE_H
#define VORTICE_DIRECT2D1_IWICPALETTE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICPALETTE_H
#define VORTICE_VORTICE_IWICPALETTE_H

#include <cstdint>

namespace Vortice {

class IWICPalette
{
public:
    ~IWICPalette() = default;

    void GetColors() { GetColors((uint)colors.Length, colors, out _); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICPALETTE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICPALETTE_H
