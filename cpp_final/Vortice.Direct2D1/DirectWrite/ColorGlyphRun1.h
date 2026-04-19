// Copyright (c) Contributors.

#ifndef VORTICE_COLORGLYPHRUN1_H
#define VORTICE_COLORGLYPHRUN1_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;

        class ColorGlyphRun1
        {
                        public: GlyphRun GlyphRun{};

                                public: std::optional<GlyphRunDescription> GlyphRunDescription{};

                        public: float BaselineOriginX{};

                        public: float BaselineOriginY{};

                        public: Color4 RunColor{};

                        public: uint16_t PaletteIndex{};

                            public: GlyphImageFormats GlyphImageFormat{};

                        public: MeasuringMode MeasuringMode{};
            [StructLayout(LayoutKind.Sequential, Pack = 0, CharSet = System.Runtime.InteropServices.CharSet.Unicode)]
            internal struct __Native
        {
                public GlyphRun.__Native GlyphRun{};
                public GlyphRunDescription.__Native* GlyphRunDescription;
                public: float BaselineOriginX{};
                public: float BaselineOriginY{};
                public: Color4 RunColor{};
                public: uint16_t PaletteIndex{};
                public: GlyphImageFormats GlyphImageFormat{};
                public: MeasuringMode MeasuringMode{};

                void __MarshalFree(void)
        {
                    GlyphRun.__MarshalFree();
                }
            }

            void __MarshalFree(__Native& @ref)
        {
                @ref.__MarshalFree();
            }

            void __MarshalFrom(__Native& @ref)
        {
                GlyphRun = new GlyphRun(void) = 0;
                GlyphRun.__MarshalFrom(ref @ref.GlyphRun);

                if (@ref.GlyphRunDescription == nullptr)
                {
                    GlyphRunDescription = nullptr;
                }
                else
                {
                    GlyphRunDescription = new GlyphRunDescription(void) = 0;
                    GlyphRunDescription.__MarshalFrom(ref *@ref.GlyphRunDescription);
                }

                BaselineOriginX = @ref.BaselineOriginX;
                BaselineOriginY = @ref.BaselineOriginY;
                RunColor = @ref.RunColor;
                PaletteIndex = @ref.PaletteIndex;
                GlyphImageFormat = @ref.GlyphImageFormat;
                MeasuringMode = @ref.MeasuringMode;
            }
        }


    }
}

#endif // VORTICE_COLORGLYPHRUN1_H