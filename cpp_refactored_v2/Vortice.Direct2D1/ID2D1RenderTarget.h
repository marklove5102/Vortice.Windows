// Copyright (c) Contributors.

#ifndef VORTICE_ID2D1RENDERTARGET_H
#define VORTICE_ID2D1RENDERTARGET_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;
        publicclass ID2D1RenderTarget
        {
            public: Size m_dpi{};
                public: Size get_Dpi() const { return GetDpi(dpiX, dpiY);
                    return new(void);; }
                public: void set_Dpi(Size value) { SetDpi(value.Width, value.Height);; }
            publicID2D1Bitmap CreateBitmap(SizeI size)
                {
                return CreateBitmap(size, IntPtr.Zero, 0, new BitmapProperties(DCommon.PixelFormat.Unknown));
            }
            publicID2D1Bitmap CreateBitmap(SizeI size, BitmapProperties bitmapProperties)
                {
                return CreateBitmap(void);
            }
            publicID2D1Bitmap CreateBitmap(SizeI size, void* sourceData, uint32_t pitch)
                {
                return CreateBitmap(size, sourceData, pitch, new BitmapProperties(DCommon.PixelFormat.Unknown));
            }
            publicvoid Clear(const Vortice.Mathematics.Color& clearColor)
                {
                Clear(new Color4(clearColor));
            }
            publicID2D1SolidColorBrush CreateSolidColorBrush(const Vortice.Mathematics.Color& color, const std::optional<BrushProperties>& brushProperties)
                {
                Color4 color4{};
                return CreateSolidColorBrush(void);
            }
            publicID2D1GradientStopCollection CreateGradientStopCollection(const std::vector<GradientStop>& gradientStops)
                {
                return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, Gamma.StandardRgb, ExtendMode.Clamp);
            }
            publicID2D1GradientStopCollection CreateGradientStopCollection(const std::vector<GradientStop>& gradientStops, ExtendMode extendMode)
                {
                return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, Gamma.StandardRgb, extendMode);
            }
            publicID2D1GradientStopCollection CreateGradientStopCollection(const std::vector<GradientStop>& gradientStops, Gamma colorInterpolationGamma, ExtendMode extendMode)
                {
                return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, colorInterpolationGamma, extendMode);
            }
            publicID2D1LinearGradientBrush CreateLinearGradientBrush(LinearGradientBrushProperties linearGradientBrushProperties, ID2D1GradientStopCollection gradientStopCollection)
                {
                return CreateLinearGradientBrush_(void);
            }
            publicID2D1LinearGradientBrush CreateLinearGradientBrush(LinearGradientBrushProperties linearGradientBrushProperties, BrushProperties brushProperties, ID2D1GradientStopCollection gradientStopCollection)
                {
                return CreateLinearGradientBrush_(void);
            }
            publicID2D1RadialGradientBrush CreateRadialGradientBrush(RadialGradientBrushProperties radialGradientBrushProperties, ID2D1GradientStopCollection gradientStopCollection)
                {
                return CreateRadialGradientBrush_(void);
            }
            publicID2D1RadialGradientBrush CreateRadialGradientBrush(RadialGradientBrushProperties radialGradientBrushProperties, BrushProperties brushProperties, ID2D1GradientStopCollection gradientStopCollection)
                {
                return CreateRadialGradientBrush_(void);
            }
            publicID2D1Bitmap CreateSharedBitmap(ID2D1Bitmap bitmap, const std::optional<BitmapProperties>& bitmapProperties)
                {
                return CreateSharedBitmap(typeof(ID2D1Bitmap).GUID, bitmap.NativePointer, bitmapProperties);
            }
            publicID2D1Bitmap CreateSharedBitmap(IDXGISurface surface, const std::optional<BitmapProperties>& bitmapProperties)
                {
                return CreateSharedBitmap(typeof(IDXGISurface).GUID, surface.NativePointer, bitmapProperties);
            }
            publicID2D1Bitmap CreateSharedBitmap(IWICBitmapLock bitmapLock, const std::optional<BitmapProperties>& bitmapProperties)
                {
                return CreateSharedBitmap(typeof(IWICBitmapLock).GUID, bitmapLock.NativePointer, bitmapProperties);
            }
                            publicID2D1BitmapRenderTarget CreateCompatibleRenderTarget(void)
                {
                return CreateCompatibleRenderTarget(void);
            }
                                publicID2D1BitmapRenderTarget CreateCompatibleRenderTarget(SizeI desiredSize)
                {
                return CreateCompatibleRenderTarget(void);
            }
                                    publicID2D1BitmapRenderTarget CreateCompatibleRenderTarget(SizeI desiredSize, SizeI desiredPixelSize)
                {
                return CreateCompatibleRenderTarget(void);
            }
                                                        publicID2D1BitmapRenderTarget CreateCompatibleRenderTarget(SizeI desiredSize, SizeI desiredPixelSize, DCommon.PixelFormat desiredFormat)
                {
                return CreateCompatibleRenderTarget(void);
            }
                            publicvoid DrawBitmap(ID2D1Bitmap bitmap)
                {
                DrawBitmap(bitmap, nullptr, 1.0f, BitmapInterpolationMode.Linear, nullptr);
            }
                                    publicvoid DrawBitmap(ID2D1Bitmap bitmap, float opacity, BitmapInterpolationMode interpolationMode)
                {
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr);
            }
                                        publicvoid DrawBitmap(ID2D1Bitmap bitmap, float opacity, BitmapInterpolationMode interpolationMode, Rect sourceRectangle)
                {
                RawRectF rawRect{};
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, rawRect);
            }
                                            publicvoid DrawBitmap(ID2D1Bitmap bitmap, Rect destinationRectangle, float opacity, BitmapInterpolationMode interpolationMode, Rect sourceRectangle)
                {
                RawRectF rawDestinationRectangle{};
                RawRectF rawSourceRectangle{};
                DrawBitmap(bitmap, (RawRectF?)rawDestinationRectangle, opacity, interpolationMode, rawSourceRectangle);
            }
                                publicvoid DrawEllipse(Ellipse ellipse, ID2D1Brush brush)
                {
                DrawEllipse(ellipse, brush, 1.0f, nullptr);
            }
                                    publicvoid DrawEllipse(Ellipse ellipse, ID2D1Brush brush, float strokeWidth)
                {
                DrawEllipse(ellipse, brush, strokeWidth, nullptr);
            }
                                publicvoid DrawGeometry(ID2D1Geometry geometry, ID2D1Brush brush)
                {
                DrawGeometry(geometry, brush, 1.0f, nullptr);
            }
                                    publicvoid DrawGeometry(ID2D1Geometry geometry, ID2D1Brush brush, float strokeWidth)
                {
                DrawGeometry(geometry, brush, strokeWidth, nullptr);
            }
                                    publicvoid DrawLine(Vector2 point0, Vector2 point1, ID2D1Brush brush)
                {
                DrawLine(point0, point1, brush, 1.0f, nullptr);
            }
                                        publicvoid DrawLine(const Vector2& point0, const Vector2& point1, ID2D1Brush brush, float strokeWidth)
                {
                DrawLine(point0, point1, brush, strokeWidth, nullptr);
            }
                                publicvoid DrawRectangle(const RawRectF& rect, ID2D1Brush brush)
                {
                DrawRectangle(rect, brush, 1.0f, nullptr);
            }
                                    publicvoid DrawRectangle(const Rect& rectangle, ID2D1Brush brush, float strokeWidth)
                {
                RawRectF rect{};
                DrawRectangle(rect, brush, strokeWidth, nullptr);
            }
                                publicvoid DrawRectangle(const Rect& rectangle, ID2D1Brush brush)
                {
                RawRectF rect{};
                DrawRectangle(rect, brush, 1.0f, nullptr);
            }
                                    publicvoid DrawRectangle(const RawRectF& rect, ID2D1Brush brush, float strokeWidth)
                {
                DrawRectangle(rect, brush, strokeWidth, nullptr);
            }
            publicvoid FillRectangle(const Rect& rectangle, ID2D1Brush brush)
                {
                RawRectF rect{};
                FillRectangle(rect, brush);
            }
            publicvoid FillGeometry(ID2D1Geometry geometry, ID2D1Brush brush)
                {
                FillGeometry(geometry, brush, nullptr);
            }
                                publicvoid DrawRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush)
                {
                DrawRoundedRectangle(ref roundedRect, brush, 1.0f, nullptr);
            }
                                    publicvoid DrawRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush, float strokeWidth)
                {
                DrawRoundedRectangle(ref roundedRect, brush, strokeWidth, nullptr);
            }
                                        publicvoid DrawRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush, float strokeWidth, ID2D1StrokeStyle strokeStyle)
                {
                DrawRoundedRectangle(ref roundedRect, brush, strokeWidth, strokeStyle);
            }
            publicvoid FillRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush)
                {
                FillRoundedRectangle(ref roundedRect, brush);
            }
                                                    publicvoid DrawText(const std::string& text, IDWriteTextFormat textFormat, Rect layoutRect, ID2D1Brush defaultForegroundBrush)
                {
                RawRectF rawLayoutRect{};
                DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, DrawTextOptions.None, MeasuringMode.Natural);
            }
                                                        publicvoid DrawText(const std::string& text, IDWriteTextFormat textFormat, Rect layoutRect, ID2D1Brush defaultForegroundBrush, DrawTextOptions options)
                {
                RawRectF rawLayoutRect{};
                DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, options, MeasuringMode.Natural);
            }
                                                            publicvoid DrawText(const std::string& text, IDWriteTextFormat textFormat, Rect layoutRect, ID2D1Brush defaultForegroundBrush, DrawTextOptions options, MeasuringMode measuringMode)
                {
                RawRectF rawLayoutRect{};
                DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, options, measuringMode);
            }
                                    publicvoid DrawTextLayout(Vector2 origin, IDWriteTextLayout textLayout, ID2D1Brush defaultForegroundBrush)
                {
                DrawTextLayout(origin, textLayout, defaultForegroundBrush, DrawTextOptions.None);
            }
            publicvoid DrawGlyphRun(float baselineOriginX, float baselineOriginY, GlyphRun glyphRun, ID2D1Brush foregroundBrush)
                {
                DrawGlyphRun(new Vector2(baselineOriginX, baselineOriginY), glyphRun, foregroundBrush, MeasuringMode.Natural);
            }
            publicvoid DrawGlyphRun(Vector2 baselineOrigin, GlyphRun glyphRun, ID2D1Brush foregroundBrush)
                {
                DrawGlyphRun(baselineOrigin, glyphRun, foregroundBrush, MeasuringMode.Natural);
            }
            publicResult EndDraw(void)
                {
                return EndDraw(void);
            }
        }

    }
}

#endif // VORTICE_ID2D1RENDERTARGET_H