// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR1_H
#define VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR1_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        class IDWriteColorGlyphRunEnumerator1
        {
            public new ColorGlyphRun1 get_CurrentRun() const { return GetCurrentRun(); }

            internal new ColorGlyphRun1 GetCurrentRun(void)
        {
                ColorGlyphRun1 colorGlyphRun{};
                ColorGlyphRun1.__Native* colorGlyphRun_ = (ColorGlyphRun1.__Native*)GetCurrentRun_();
                colorGlyphRun.__MarshalFrom(ref *colorGlyphRun_);
                return colorGlyphRun{};
            }
        }


    }
}

#endif // VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR1_H