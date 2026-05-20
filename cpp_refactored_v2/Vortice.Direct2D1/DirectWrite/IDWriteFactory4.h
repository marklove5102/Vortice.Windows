// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFACTORY4_H
#define VORTICE_IDWRITEFACTORY4_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteFactory4
        {
            publicResult TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun, GlyphImageFormats desiredGlyphImageFormats, MeasuringMode measuringMode, IDWriteColorGlyphRunEnumerator1& colorLayers)
                {
                return TranslateColorGlyphRun(void);
            }
            publicIDWriteColorGlyphRunEnumerator1 TranslateColorGlyphRun(const Vector2& baselineOrigin, GlyphRun glyphRun, GlyphImageFormats desiredGlyphImageFormats, MeasuringMode measuringMode)
                {
                TranslateColorGlyphRun(baselineOrigin, glyphRun, nullptr,
                    desiredGlyphImageFormats,
                    measuringMode, nullptr, 0, out IDWriteColorGlyphRunEnumerator1 colorLayers).CheckError();
                return colorLayers{};
            }
        }

    }
}

#endif // VORTICE_IDWRITEFACTORY4_H