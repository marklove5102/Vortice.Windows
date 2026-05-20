// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITELOCALIZEDSTRINGS_H
#define VORTICE_IDWRITELOCALIZEDSTRINGS_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        class IDWriteLocalizedStrings
        {
            std::string GetString(uint32_t index)
        {
                uint32_t length{};
                char* chars = stackalloc char[(int)length + 1];
                GetString(index, new IntPtr(chars), length + 1);
                return new string(chars, 0, (int)length);
            }

            std::string GetLocaleName(uint32_t index)
        {
                uint32_t length{};
                char* chars = stackalloc char[(int)length + 1];
                GetLocaleName(index, new IntPtr(chars), length + 1);
                return new string(chars, 0, (int)length);
            }
        }


    }
}

#endif // VORTICE_IDWRITELOCALIZEDSTRINGS_H