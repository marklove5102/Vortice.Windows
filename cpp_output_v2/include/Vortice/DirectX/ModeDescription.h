// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_MODEDESCRIPTION_H
#define VORTICE_DIRECTX_MODEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MODEDESCRIPTION_H
#define VORTICE_VORTICE_MODEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct ModeDescription
{
public:
    constexpr ModeDescription(uint32_t width, uint32_t height, Format Format.B8G8R8A8_UNorm)
    Width = width;
        Height = height;
        Format = format;
        RefreshRate = new Rational(60, 1);
        ScanlineOrdering = ModeScanlineOrder.Unspecified;
        Scaling = ModeScaling.Unspecified;
    constexpr ModeDescription(uint32_t width, uint32_t height, Rational refreshRate, Format format)
    Width = width;
        Height = height;
        Format = format;
        RefreshRate = refreshRate;
        ScanlineOrdering = ModeScanlineOrder.Unspecified;
        Scaling = ModeScaling.Unspecified;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_MODEDESCRIPTION_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_MODEDESCRIPTION_H
