#ifndef VORTICE_IDWRITETEXTFORMAT_H
#define VORTICE_IDWRITETEXTFORMAT_H

#include <cstdint>
#include <string>
#include <cstring>
#include <initializer_list>

namespace Vortice {
    namespace DirectWrite; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        public unsafe class IDWriteTextFormat
        {
            /// <summary>
            /// Gets a copy of the font family name.
            /// </summary>
            std::string m_fontFamilyName{};
        std::string get_FontFamilyName() const { private: return m_fontFamilyName{}; }

            /// <summary>
            /// Gets a copy of the locale name.
            /// </summary>
            std::string m_localeName{};
        std::string get_LocaleName() const { private: return m_localeName{}; }

        }


    }
}

#endif // VORTICE_IDWRITETEXTFORMAT_H