// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPFRAMEENCODE_H
#define VORTICE_DIRECT2D1_IWICBITMAPFRAMEENCODE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPFRAMEENCODE_H
#define VORTICE_VORTICE_IWICBITMAPFRAMEENCODE_H

#include <cstdint>

namespace Vortice {

class IWICBitmapFrameEncode
{
public:
    ~IWICBitmapFrameEncode() = default;

    void SetColorContexts() { SetColorContexts(colorContexts != nullptr ? (uint)colorContexts.Length : 0u, colorContexts); }

    void SetPixelFormat() { SetPixelFormat(ref pixelFormat); }

    HRESULT WritePixels() { return WritePixels(lineCount, buffer.DataPointer, (uint)buffer.Pitch, totalSizeInBytes); }

    HRESULT WritePixels() { return WritePixels(lineCount, stride, bufferSize, pixels); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPFRAMEENCODE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPFRAMEENCODE_H
