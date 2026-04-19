// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEGDIINTEROP_H
#define VORTICE_IDWRITEGDIINTEROP_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;

        class IDWriteGdiInterop
        {
            IDWriteFont CreateFontFromLOGFONT(LogFont logFont)
        {
                int32_t sizeOfLogFont{};
                byte* nativeLogFont = stackalloc byte{};
                Marshal.StructureToPtr(logFont, new IntPtr(nativeLogFont), false);
                return CreateFontFromLOGFONT(new IntPtr(nativeLogFont));
            }

            bool ConvertFontToLOGFONT(IDWriteFont font, LogFont& logFont)
        {
                logFont = new LogFont(void) = 0;
                ConvertFontToLOGFONT(font, out var nativeLogFont, out var isSystemFont);
                Marshal.PtrToStructure(nativeLogFont, logFont);
                return isSystemFont{};
            }

            void ConvertFontFaceToLOGFONT(IDWriteFontFace font, LogFont& logFont)
        {
                logFont = new LogFont(void) = 0;
                ConvertFontFaceToLOGFONT(font, out IntPtr nativeLogFont);
                Marshal.PtrToStructure(nativeLogFont, logFont);
            }
        }


    }
}

#endif // VORTICE_IDWRITEGDIINTEROP_H