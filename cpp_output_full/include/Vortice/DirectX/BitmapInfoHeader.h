// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_BITMAPINFOHEADER_H
#define VORTICE_DIRECTX_BITMAPINFOHEADER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BITMAPINFOHEADER_H
#define VORTICE_VORTICE_BITMAPINFOHEADER_H

#include <cstdint>

namespace Vortice {

struct BitmapInfoHeader
{
public:
    int32_t SizeInBytes;
    int32_t Width;
    int32_t Height;
    int16_t PlaneCount;
    int16_t BitCount;
    int32_t Compression;
    int32_t SizeImage;
    int32_t XPixelsPerMeter;
    int32_t YPixelsPerMeter;
    int32_t ColorUsedCount;
    int32_t ColorImportantCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BITMAPINFOHEADER_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_BITMAPINFOHEADER_H
