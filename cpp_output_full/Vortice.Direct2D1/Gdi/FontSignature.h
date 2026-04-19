#ifndef VORTICE_FONTSIGNATURE_H
#define VORTICE_FONTSIGNATURE_H

#include <cstdint>

namespace Vortice {
    namespace Gdi {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        using System.Runtime.InteropServices;

        namespace Vortice.Gdi
        {
            [StructLayout(LayoutKind.Sequential)]
            public struct FontSignature
        {
                public: int32_t fsUsb1{};
                public: int32_t fsUsb2{};
                public: int32_t fsUsb3{};
                public: int32_t fsUsb4{};
                public: int32_t fsCsb1{};
                public: int32_t fsCsb2{};
            }

        }


    }
}

#endif // VORTICE_FONTSIGNATURE_H