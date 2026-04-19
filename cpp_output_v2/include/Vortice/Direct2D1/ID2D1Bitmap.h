// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1BITMAP_H
#define VORTICE_DIRECT2D1_ID2D1BITMAP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1BITMAP_H
#define VORTICE_VORTICE_ID2D1BITMAP_H

#include <cstdint>

namespace Vortice {

class ID2D1Bitmap
{
public:
    ~ID2D1Bitmap() = default;

    SizeF get_Dpi() const { GetDpi(out float dpiX, out float dpiY);
            return new(dpiX, dpiY); }

    HRESULT CopyFromBitmap() { RawRect sourceRect = sourceRectangle;
        return CopyFromBitmap(&destinationPoint, sourceBitmap, &sourceRect); }

    HRESULT CopyFromMemory() { return CopyFromMemory(nullptr, pointer.ToPointer(), pitch); }

    HRESULT CopyFromRenderTarget() { return CopyFromRenderTarget(nullptr, renderTarget, nullptr); }

    HRESULT CopyFromRenderTarget() { return CopyFromRenderTarget(&destinationPoint, renderTarget, nullptr); }

    HRESULT CopyFromRenderTarget() { RawRect sourceRect = sourceRectangle;
        return CopyFromRenderTarget(&destinationPoint, renderTarget, &sourceRect); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1BITMAP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1BITMAP_H
