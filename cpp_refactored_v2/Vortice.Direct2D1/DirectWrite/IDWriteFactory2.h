// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFACTORY2_H
#define VORTICE_IDWRITEFACTORY2_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteFactory2
        {
            publicIDWriteColorGlyphRunEnumerator TranslateColorGlyphRun(float baselineOriginX, float baselineOriginY, GlyphRun glyphRun)
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
            publicIDWriteColorGlyphRunEnumerator TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun)
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
            publicResult TranslateColorGlyphRun(float baselineOriginX, float baselineOriginY, GlyphRun glyphRun, IDWriteColorGlyphRunEnumerator& colorLayers)
                {
                return TranslateColorGlyphRun(void);
            }
            publicResult TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun, IDWriteColorGlyphRunEnumerator& colorLayers)
                {
                return TranslateColorGlyphRun(void);
            }
        }

    }
}

#endif // VORTICE_IDWRITEFACTORY2_H