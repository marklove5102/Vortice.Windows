// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITETEXTFORMAT_H
#define VORTICE_IDWRITETEXTFORMAT_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;
        publicclass IDWriteTextFormat
        {
                        public: std::string m_fontFamilyName{};
                public: std::string get_FontFamilyName() const { return uint32_t fontFamilyNameLength{};
                    char* fontFamilyName = stackalloc char[(int)fontFamilyNameLength + 1];
                    GetFontFamilyName(new IntPtr(fontFamilyName), fontFamilyNameLength + 1);
                    return new string(fontFamilyName, 0, (int)fontFamilyNameLength);; }
                        public: std::string m_localeName{};
                public: std::string get_LocaleName() const { return uint32_t localNameLength{};
                    char* localName = stackalloc char[(int)localNameLength + 1];
                    GetLocaleName(new IntPtr(localName), localNameLength + 1);
                    return new string(localName, 0, (int)localNameLength);; }
        }

    }
}

#endif // VORTICE_IDWRITETEXTFORMAT_H