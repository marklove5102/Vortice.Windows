// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT2D1_CONTAINERFORMAT_H
#define VORTICE_VORTICE_DIRECT2D1_CONTAINERFORMAT_H

#include <cstdint>

namespace Vortice::Direct2D1 {

enum class ContainerFormat : int32_t
{
    Bmp,
    Png,
    Ico,
    Jpeg,
    Tiff,
    Gif,
    Wmp,
    Dds,
    Adng,
    Heif,
    Webp,
    Raw
};


} // namespace Vortice::Direct2D1

#endif // VORTICE_VORTICE_DIRECT2D1_CONTAINERFORMAT_H
