// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_COLORGLYPHRUN_H
#define VORTICE_DIRECT2D1_COLORGLYPHRUN_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COLORGLYPHRUN_H
#define VORTICE_VORTICE_COLORGLYPHRUN_H

#include <cstdint>

namespace Vortice {

class ColorGlyphRun
{
public:
    ~ColorGlyphRun() = default;

    GlyphRun GlyphRun;
    float BaselineOriginX;
    float BaselineOriginY;
    Color4 RunColor;
    uint16_t PaletteIndex;
    float BaselineOriginX;
    float BaselineOriginY;
    Color4 RunColor;
    uint16_t PaletteIndex;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_COLORGLYPHRUN_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    float BaselineOriginX;
    float BaselineOriginY;
    Color4 RunColor;
    uint16_t PaletteIndex;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_COLORGLYPHRUN_H
