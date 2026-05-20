// Copyright (c) Contributors.

#ifndef VORTICE_TEXTRENDERERBASE_H
#define VORTICE_TEXTRENDERERBASE_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass TextRendererBase : : CallbackBase, IDWriteTextRenderer
        {
                                publicvirtual Matrix3x2 GetCurrentTransform(void* clientDrawingContext)
                {
                return Matrix3x2.Identity;
            }
                                publicvirtual float GetPixelsPerDip(void* clientDrawingContext)
                {
                return 1.0f;
            }
                                publicvirtual RawBool IsPixelSnappingDisabled(void* clientDrawingContext)
                {
                return false{};
            }
                                                    publicvirtual void DrawGlyphRun(void* clientDrawingContext, float baselineOriginX, float baselineOriginY, MeasuringMode measuringMode, GlyphRun glyphRun, GlyphRunDescription glyphRunDescription, IUnknown clientDrawingEffect)
                {
            }
                                                    publicvirtual void DrawInlineObject(void* clientDrawingContext, float originX, float originY, IDWriteInlineObject inlineObject, RawBool isSideways, RawBool isRightToLeft, IUnknown clientDrawingEffect)
                {
            }
                                            publicvirtual void DrawStrikethrough(void* clientDrawingContext, float baselineOriginX, float baselineOriginY, Strikethrough& strikethrough, IUnknown clientDrawingEffect)
                {
            }
                                            publicvirtual void DrawUnderline(void* clientDrawingContext, float baselineOriginX, float baselineOriginY, Underline& underline, IUnknown clientDrawingEffect)
                {
            }
        }

    }
}

#endif // VORTICE_TEXTRENDERERBASE_H