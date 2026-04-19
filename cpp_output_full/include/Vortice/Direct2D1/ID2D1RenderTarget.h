// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1RENDERTARGET_H
#define VORTICE_DIRECT2D1_ID2D1RENDERTARGET_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1RENDERTARGET_H
#define VORTICE_VORTICE_ID2D1RENDERTARGET_H

#include <cstdint>

namespace Vortice {

class ID2D1RenderTarget
{
public:
    ~ID2D1RenderTarget() = default;

    Size get_Dpi() const { GetDpi(out float dpiX, out float dpiY);
            return new(dpiX, dpiY); }
    void set_Dpi(Size value) { SetDpi(value.Width, value.Height); }

    ID2D1Bitmap CreateBitmap() { return CreateBitmap(size, IntPtr.Zero, 0, new BitmapProperties(DCommon.PixelFormat.Unknown)); }

    ID2D1Bitmap CreateBitmap() { return CreateBitmap(size, IntPtr.Zero, 0, bitmapProperties); }

    ID2D1Bitmap CreateBitmap() { return CreateBitmap(size, sourceData, pitch, new BitmapProperties(DCommon.PixelFormat.Unknown)); }

    void Clear() { Clear(new Color4(clearColor)); }

    ID2D1SolidColorBrush CreateSolidColorBrush() { Color4 color4 = new(color);
        return CreateSolidColorBrush(color4, brushProperties); }

    ID2D1GradientStopCollection CreateGradientStopCollection() { return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, Gamma.StandardRgb, ExtendMode.Clamp); }

    ID2D1GradientStopCollection CreateGradientStopCollection() { return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, Gamma.StandardRgb, extendMode); }

    ID2D1GradientStopCollection CreateGradientStopCollection() { return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, colorInterpolationGamma, extendMode); }

    ID2D1LinearGradientBrush CreateLinearGradientBrush() { return CreateLinearGradientBrush_(linearGradientBrushProperties, nullptr, gradientStopCollection); }

    ID2D1LinearGradientBrush CreateLinearGradientBrush() { return CreateLinearGradientBrush_(linearGradientBrushProperties, brushProperties, gradientStopCollection); }

    ID2D1RadialGradientBrush CreateRadialGradientBrush() { return CreateRadialGradientBrush_(ref radialGradientBrushProperties, nullptr, gradientStopCollection); }

    ID2D1RadialGradientBrush CreateRadialGradientBrush() { return CreateRadialGradientBrush_(ref radialGradientBrushProperties, brushProperties, gradientStopCollection); }

    ID2D1Bitmap CreateSharedBitmap() { return CreateSharedBitmap(typeid(ID2D1Bitmap).GUID, bitmap.NativePointer, bitmapProperties); }

    ID2D1Bitmap CreateSharedBitmap() { return CreateSharedBitmap(typeid(IDXGISurface).GUID, surface.NativePointer, bitmapProperties); }

    ID2D1Bitmap CreateSharedBitmap() { return CreateSharedBitmap(typeid(IWICBitmapLock).GUID, bitmapLock.NativePointer, bitmapProperties); }

    ID2D1BitmapRenderTarget CreateCompatibleRenderTarget() { return CreateCompatibleRenderTarget(nullptr, nullptr, nullptr, CompatibleRenderTargetOptions.None); }

    ID2D1BitmapRenderTarget CreateCompatibleRenderTarget() { return CreateCompatibleRenderTarget(desiredSize, nullptr, nullptr, CompatibleRenderTargetOptions.None); }

    ID2D1BitmapRenderTarget CreateCompatibleRenderTarget() { return CreateCompatibleRenderTarget(desiredSize, desiredPixelSize, nullptr, CompatibleRenderTargetOptions.None); }

    ID2D1BitmapRenderTarget CreateCompatibleRenderTarget() { return CreateCompatibleRenderTarget(desiredSize, desiredPixelSize, desiredFormat, CompatibleRenderTargetOptions.None); }

    void DrawBitmap() { DrawBitmap(bitmap, nullptr, 1.0f, BitmapInterpolationMode.Linear, nullptr); }

    void DrawBitmap() { DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr); }

    void DrawBitmap() { RawRectF rawRect = sourceRectangle;
        DrawBitmap(bitmap, nullptr, opacity, interpolationMode, rawRect); }

    void DrawBitmap() { RawRectF rawDestinationRectangle = destinationRectangle;
        RawRectF rawSourceRectangle = sourceRectangle;
        DrawBitmap(bitmap, (RawRectF?)rawDestinationRectangle, opacity, interpolationMode, rawSourceRectangle); }

    void DrawEllipse() { DrawEllipse(ellipse, brush, 1.0f, nullptr); }

    void DrawEllipse() { DrawEllipse(ellipse, brush, strokeWidth, nullptr); }

    void DrawGeometry() { DrawGeometry(geometry, brush, 1.0f, nullptr); }

    void DrawGeometry() { DrawGeometry(geometry, brush, strokeWidth, nullptr); }

    void DrawLine() { DrawLine(point0, point1, brush, 1.0f, nullptr); }

    void DrawLine() { DrawLine(point0, point1, brush, strokeWidth, nullptr); }

    void DrawRectangle() { DrawRectangle(rect, brush, 1.0f, nullptr); }

    void DrawRectangle() { RawRectF rect = rectangle;
        DrawRectangle(rect, brush, strokeWidth, nullptr); }

    void DrawRectangle() { RawRectF rect = rectangle;
        DrawRectangle(rect, brush, 1.0f, nullptr); }

    void DrawRectangle() { DrawRectangle(rect, brush, strokeWidth, nullptr); }

    void FillRectangle() { RawRectF rect = rectangle;
        FillRectangle(rect, brush); }

    void FillGeometry() { FillGeometry(geometry, brush, nullptr); }

    void DrawRoundedRectangle() { DrawRoundedRectangle(ref roundedRect, brush, 1.0f, nullptr); }

    void DrawRoundedRectangle() { DrawRoundedRectangle(ref roundedRect, brush, strokeWidth, nullptr); }

    void DrawRoundedRectangle() { DrawRoundedRectangle(ref roundedRect, brush, strokeWidth, strokeStyle); }

    void FillRoundedRectangle() { FillRoundedRectangle(ref roundedRect, brush); }

    void DrawText() { RawRectF rawLayoutRect = layoutRect;
        DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, DrawTextOptions.None, MeasuringMode.Natural); }

    void DrawText() { RawRectF rawLayoutRect = layoutRect;
        DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, options, MeasuringMode.Natural); }

    void DrawText() { RawRectF rawLayoutRect = layoutRect;
        DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, options, measuringMode); }

    void DrawTextLayout() { DrawTextLayout(origin, textLayout, defaultForegroundBrush, DrawTextOptions.None); }

    void DrawGlyphRun() { DrawGlyphRun(new Vector2(baselineOriginX, baselineOriginY), glyphRun, foregroundBrush, MeasuringMode.Natural); }

    void DrawGlyphRun() { DrawGlyphRun(baselineOrigin, glyphRun, foregroundBrush, MeasuringMode.Natural); }

    HRESULT EndDraw() { return EndDraw(out _, out _); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1RENDERTARGET_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1RENDERTARGET_H
