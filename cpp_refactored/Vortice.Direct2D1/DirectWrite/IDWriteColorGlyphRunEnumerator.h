// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR_H
#define VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        class IDWriteColorGlyphRunEnumerator
        {
            ColorGlyphRun get_CurrentRun() const { return GetCurrentRun(); }

            ColorGlyphRun GetCurrentRun(void)
        {
                ColorGlyphRun colorGlyphRun{};
                ColorGlyphRun.__Native* colorGlyphRun_ = (ColorGlyphRun.__Native*)GetCurrentRun_();
                colorGlyphRun.__MarshalFrom(ref *colorGlyphRun_);
                return colorGlyphRun{};
            }
        }


    }
}

#endif // VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR_H