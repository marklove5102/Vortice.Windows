// Copyright (c) Contributors.

#ifndef VORTICE_COLORGLYPHRUN_H
#define VORTICE_COLORGLYPHRUN_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass ColorGlyphRun
        {
                        public: GlyphRun GlyphRun{};
                                public: std::optional<GlyphRunDescription> GlyphRunDescription{};
                        public: float BaselineOriginX{};
                        public: float BaselineOriginY{};
                        public: Color4 RunColor{};
                        public: uint16_t PaletteIndex{};
            [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = System.Runtime.InteropServices.CharSet.Unicode)]
            internal struct __Native
        {
                public GlyphRun.__Native GlyphRun{};
                public GlyphRunDescription.__Native* GlyphRunDescription;
                public: float BaselineOriginX{};
                public: float BaselineOriginY{};
                public: Color4 RunColor{};
                public: uint16_t PaletteIndex{};
                internalvoid __MarshalFree(void)
                {
                    GlyphRun.__MarshalFree();
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            internalvoid __MarshalFrom(__Native& @ref)
                {
                GlyphRun = new GlyphRun(void);
                GlyphRun.__MarshalFrom(ref @ref.GlyphRun);
                if (@ref.GlyphRunDescription == nullptr)
                {
                    GlyphRunDescription = nullptr;
                }
                else
                {
                    GlyphRunDescription = new GlyphRunDescription(void);
                    GlyphRunDescription.__MarshalFrom(ref *@ref.GlyphRunDescription);
                }
                BaselineOriginX = @ref.BaselineOriginX;
                BaselineOriginY = @ref.BaselineOriginY;
                RunColor = @ref.RunColor;
                PaletteIndex = @ref.PaletteIndex;
            }
        }

    }
}

#endif // VORTICE_COLORGLYPHRUN_H