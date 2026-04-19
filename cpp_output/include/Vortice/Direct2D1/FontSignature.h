// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT2D1_FONTSIGNATURE_H
#define VORTICE_VORTICE_DIRECT2D1_FONTSIGNATURE_H

#include <cstdint>

namespace Vortice::Direct2D1 {

struct FontSignature
{
    int32_t fsUsb1;
    int32_t fsUsb2;
    int32_t fsUsb3;
    int32_t fsUsb4;
    int32_t fsCsb1;
    int32_t fsCsb2;

};


} // namespace Vortice::Direct2D1

#endif // VORTICE_VORTICE_DIRECT2D1_FONTSIGNATURE_H
