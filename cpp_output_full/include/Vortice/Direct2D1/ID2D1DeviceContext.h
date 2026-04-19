// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1DEVICECONTEXT_H
#define VORTICE_DIRECT2D1_ID2D1DEVICECONTEXT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1DEVICECONTEXT_H
#define VORTICE_VORTICE_ID2D1DEVICECONTEXT_H

#include <cstdint>

namespace Vortice {

class ID2D1DeviceContext
{
public:
    ~ID2D1DeviceContext() = default;

    ID2D1Bitmap1 CreateBitmap() { return CreateBitmap(size, IntPtr.Zero, 0, new BitmapProperties1(PixelFormat.Unknown)); }

    ID2D1Bitmap1 CreateBitmap() { return CreateBitmap(size, IntPtr.Zero, 0, bitmapProperties); }

    ID2D1Bitmap1 CreateBitmap() { return CreateBitmap(size, sourceData, pitch, new BitmapProperties1(PixelFormat.Unknown)); }

    ID2D1ColorContext CreateColorContext() { return CreateColorContext(space, profile, (uint)profile.Length); }

    void DrawBitmap() { DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr, nullptr); }

    void DrawBitmap() { DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr, perspectiveTransform); }

    void DrawBitmap() { DrawBitmap(bitmap, nullptr, opacity, interpolationMode, sourceRectangle, perspectiveTransform); }

    void DrawBitmap() { RawRectF destRect = destinationRectangle;
        RawRectF sourceRect = sourceRectangle;
        DrawBitmap(bitmap, (RawRectF?)destRect, opacity, interpolationMode, (RawRectF?)sourceRect, perspectiveTransform); }

    void DrawBitmap() { RawRectF sourceRect = sourceRectangle;
        DrawBitmap(bitmap, nullptr, opacity, interpolationMode, (RawRectF?)sourceRect, perspectiveTransform); }

    void DrawImage() { DrawImage(image, targetOffset, nullptr, interpolationMode, compositeMode); }

    void DrawImage() { DrawImage(image, nullptr, nullptr, interpolationMode, compositeMode); }

    void DrawImage() { using auto output = effect.Output;
        DrawImage(output, targetOffset, nullptr, interpolationMode, compositeMode); }

    void DrawImage() { using ID2D1Image? output = effect.Output;
        DrawImage(output, nullptr, nullptr, interpolationMode, compositeMode); }

    void PushLayer() { PushLayer(ref layerParameters, layer); }

    void GetEffectInvalidRectangles() { GetEffectInvalidRectangles(effect, invalidRects, (uint)invalidRects.Length); }

    void GetEffectRequiredInputRectangles() { GetEffectRequiredInputRectangles(renderEffect, nullptr, inputDescriptions, requiredInputRects, (uint)inputDescriptions.Length); }

    void GetEffectRequiredInputRectangles() { GetEffectRequiredInputRectangles(renderEffect, renderImageRectangle, inputDescriptions, requiredInputRects, (uint)inputDescriptions.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1DEVICECONTEXT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1DEVICECONTEXT_H
