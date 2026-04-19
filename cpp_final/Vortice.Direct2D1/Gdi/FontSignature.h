// Copyright (c) Contributors.

#ifndef VORTICE_FONTSIGNATURE_H
#define VORTICE_FONTSIGNATURE_H

#include <cstdint>

﻿// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
namespace Vortice.Gdi
{
    [StructLayout(LayoutKind.Sequential)]
    struct FontSignature
{
        public: int32_t fsUsb1{};
        public: int32_t fsUsb2{};
        public: int32_t fsUsb3{};
        public: int32_t fsUsb4{};
        public: int32_t fsCsb1{};
        public: int32_t fsCsb2{};
    }

}


#endif // VORTICE_FONTSIGNATURE_H