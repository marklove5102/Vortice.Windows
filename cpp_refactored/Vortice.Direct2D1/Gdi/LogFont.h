// Copyright (c) Contributors.

#ifndef VORTICE_LOGFONT_H
#define VORTICE_LOGFONT_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace Gdi {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Gdi;

        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        class LogFont
        {
            public: int32_t lfHeight{};
            public: int32_t lfWidth{};
            public: int32_t lfEscapement{};
            public: int32_t lfOrientation{};
            public: int32_t lfWeight{};
            public: uint8_t lfItalic{};
            public: uint8_t lfUnderline{};
            public: uint8_t lfStrikeOut{};
            public: uint8_t lfCharSet{};
            public: uint8_t lfOutPrecision{};
            public: uint8_t lfClipPrecision{};
            public: uint8_t lfQuality{};
            public: uint8_t lfPitchAndFamily{};
            [MarshalAs(UnmanagedType.ByValTStr, SizeConst = 0x20)]
            public: std::string lfFaceName{};
        }


    }
}

#endif // VORTICE_LOGFONT_H