// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEGDIINTEROP1_H
#define VORTICE_IDWRITEGDIINTEROP1_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteGdiInterop1
        {
            publicIDWriteFont CreateFontFromLOGFONT(LogFont logFont, IDWriteFontCollection fontCollection)
                {
                int32_t sizeOfLogFont{};
                byte* nativeLogFont = stackalloc byte{};
                Marshal.StructureToPtr(logFont, new IntPtr(nativeLogFont), false);
                return CreateFontFromLOGFONT(new IntPtr(nativeLogFont), fontCollection);
            }
            publicIDWriteFontSet GetMatchingFontsByLOGFONT(LogFont logFont, IDWriteFontSet fontSet)
                {
                int32_t sizeOfLogFont{};
                byte* nativeLogFont = stackalloc byte{};
                Marshal.StructureToPtr(logFont, new IntPtr(nativeLogFont), false);
                return GetMatchingFontsByLOGFONT(new IntPtr(nativeLogFont), fontSet);
            }
        }

    }
}

#endif // VORTICE_IDWRITEGDIINTEROP1_H