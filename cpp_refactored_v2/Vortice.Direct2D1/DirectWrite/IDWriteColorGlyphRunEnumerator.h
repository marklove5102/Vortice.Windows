// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR_H
#define VORTICE_IDWRITECOLORGLYPHRUNENUMERATOR_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteColorGlyphRunEnumerator
        {
            public: ColorGlyphRun get_CurrentRun() const { return GetCurrentRun(); }
            internalColorGlyphRun GetCurrentRun(void)
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