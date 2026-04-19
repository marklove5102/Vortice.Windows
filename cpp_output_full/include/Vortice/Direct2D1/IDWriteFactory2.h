// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITEFACTORY2_H
#define VORTICE_DIRECT2D1_IDWRITEFACTORY2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITEFACTORY2_H
#define VORTICE_VORTICE_IDWRITEFACTORY2_H

#include <cstdint>

namespace Vortice {

class IDWriteFactory2
{
public:
    ~IDWriteFactory2() = default;

    IDWriteColorGlyphRunEnumerator TranslateColorGlyphRun() { TranslateColorGlyphRun(
            baselineOriginX,
            baselineOriginY,
            glyphRun,
            nullptr,
            MeasuringMode.Natural,
            nullptr,
            0,
            out IDWriteColorGlyphRunEnumerator colorLayers).CheckError();
        return colorLayers; }

    IDWriteColorGlyphRunEnumerator TranslateColorGlyphRun() { TranslateColorGlyphRun(
            baselineOrigin.X,
            baselineOrigin.Y,
            glyphRun,
            nullptr,
            MeasuringMode.Natural,
            nullptr,
            0,
            out IDWriteColorGlyphRunEnumerator colorLayers).CheckError();
        return colorLayers; }

    HRESULT TranslateColorGlyphRun() { return TranslateColorGlyphRun(
            baselineOriginX,
            baselineOriginY,
            glyphRun,
            nullptr,
            MeasuringMode.Natural,
            nullptr,
            0,
            out colorLayers); }

    HRESULT TranslateColorGlyphRun() { return TranslateColorGlyphRun(
            baselineOrigin.X,
            baselineOrigin.Y,
            glyphRun,
            nullptr,
            MeasuringMode.Natural,
            nullptr,
            0,
            out colorLayers); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITEFACTORY2_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITEFACTORY2_H
