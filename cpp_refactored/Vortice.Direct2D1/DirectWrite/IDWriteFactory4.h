// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFACTORY4_H
#define VORTICE_IDWRITEFACTORY4_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;

        class IDWriteFactory4
        {
            Result TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun, GlyphImageFormats desiredGlyphImageFormats, MeasuringMode measuringMode, IDWriteColorGlyphRunEnumerator1& colorLayers)
        {
                return TranslateColorGlyphRun(baselineOrigin param, glyphRun param, nullptr param, desiredGlyphImageFormats param, measuringMode param, nullptr param, 0 param, colorLayers& param) = 0;
            }

            IDWriteColorGlyphRunEnumerator1 TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun, GlyphImageFormats desiredGlyphImageFormats, MeasuringMode measuringMode{};
                return colorLayers{};
            }
        }


    }
}

#endif // VORTICE_IDWRITEFACTORY4_H