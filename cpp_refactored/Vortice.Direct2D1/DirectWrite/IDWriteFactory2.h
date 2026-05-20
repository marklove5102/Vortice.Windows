// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFACTORY2_H
#define VORTICE_IDWRITEFACTORY2_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;

        class IDWriteFactory2
        {
            IDWriteColorGlyphRunEnumerator TranslateColorGlyphRun(float baselineOriginX, float baselineOriginY, GlyphRun glyphRun)
        {
                TranslateColorGlyphRun(
                    baselineOriginX,
                    baselineOriginY,
                    glyphRun,
                    nullptr,
                    MeasuringMode.Natural,
                    nullptr,
                    0,
                    out IDWriteColorGlyphRunEnumerator colorLayers).CheckError();
                return colorLayers{};
            }

            IDWriteColorGlyphRunEnumerator TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun)
        {
                TranslateColorGlyphRun(
                    baselineOrigin.X,
                    baselineOrigin.Y,
                    glyphRun,
                    nullptr,
                    MeasuringMode.Natural,
                    nullptr,
                    0,
                    out IDWriteColorGlyphRunEnumerator colorLayers).CheckError();
                return colorLayers{};
            }

            Result TranslateColorGlyphRun(float baselineOriginX, float baselineOriginY, GlyphRun glyphRun, IDWriteColorGlyphRunEnumerator& colorLayers)
        {
                return TranslateColorGlyphRun(baselineOriginX param, baselineOriginY param, glyphRun param, nullptr param, MeasuringMode::Natural param, nullptr param, 0 param, colorLayers& param) = 0;
            }

            Result TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun, IDWriteColorGlyphRunEnumerator& colorLayers)
        {
                return TranslateColorGlyphRun(baselineOrigin::X param, baselineOrigin::Y param, glyphRun param, nullptr param, MeasuringMode::Natural param, nullptr param, 0 param, colorLayers& param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDWRITEFACTORY2_H