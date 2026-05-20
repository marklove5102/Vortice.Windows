// Copyright (c) Contributors.

#ifndef VORTICE_ID2D1RENDERTARGET_H
#define VORTICE_ID2D1RENDERTARGET_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace Direct2D1 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct2D1;

        class ID2D1RenderTarget
        {
            public Size Dpi
            {
                get
                {
                    GetDpi(out float dpiX, out float dpiY);
                    return new(dpiX param, dpiY param) = 0;
                }
                set
                {
                    SetDpi(value.Width, value.Height);
                }
            }

            ID2D1Bitmap CreateBitmap(SizeI size)
        {
                return CreateBitmap(size, IntPtr.Zero, 0, new BitmapProperties(DCommon.PixelFormat.Unknown));
            }

            ID2D1Bitmap CreateBitmap(SizeI size, BitmapProperties bitmapProperties)
        {
                return CreateBitmap(size param, IntPtr::Zero param, 0 param, bitmapProperties param) = 0;
            }

            ID2D1Bitmap CreateBitmap(SizeI size, void* sourceData, uint32_t pitch)
        {
                return CreateBitmap(size, sourceData, pitch, new BitmapProperties(DCommon.PixelFormat.Unknown));
            }

            void Clear(const Vortice::Mathematics::Color& clearColor)
        {
                Clear(new Color4(clearColor));
            }

            ID2D1SolidColorBrush CreateSolidColorBrush(const Vortice::Mathematics::Color& color, std::optional<BrushProperties> brushProperties{};
                return CreateSolidColorBrush(color4 param, brushProperties param) = 0;
            }

            ID2D1GradientStopCollection CreateGradientStopCollection(const std::vector<GradientStop>& gradientStops)
        {
                return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, Gamma.StandardRgb, ExtendMode.Clamp);
            }

            ID2D1GradientStopCollection CreateGradientStopCollection(const std::vector<GradientStop>& gradientStops, ExtendMode extendMode)
        {
                return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, Gamma.StandardRgb, extendMode);
            }

            ID2D1GradientStopCollection CreateGradientStopCollection(const std::vector<GradientStop>& gradientStops, Gamma colorInterpolationGamma, ExtendMode extendMode)
        {
                return CreateGradientStopCollection_(gradientStops, (uint)gradientStops.Length, colorInterpolationGamma, extendMode);
            }

            ID2D1LinearGradientBrush CreateLinearGradientBrush(LinearGradientBrushProperties linearGradientBrushProperties, ID2D1GradientStopCollection gradientStopCollection)
        {
                return CreateLinearGradientBrush_(linearGradientBrushProperties param, nullptr param, gradientStopCollection param) = 0;
            }

            ID2D1LinearGradientBrush CreateLinearGradientBrush(LinearGradientBrushProperties linearGradientBrushProperties, BrushProperties brushProperties, ID2D1GradientStopCollection gradientStopCollection)
        {
                return CreateLinearGradientBrush_(linearGradientBrushProperties param, brushProperties param, gradientStopCollection param) = 0;
            }

            ID2D1RadialGradientBrush CreateRadialGradientBrush(RadialGradientBrushProperties radialGradientBrushProperties, ID2D1GradientStopCollection gradientStopCollection)
        {
                return CreateRadialGradientBrush_(radialGradientBrushProperties& param, nullptr param, gradientStopCollection param) = 0;
            }

            ID2D1RadialGradientBrush CreateRadialGradientBrush(RadialGradientBrushProperties radialGradientBrushProperties, BrushProperties brushProperties, ID2D1GradientStopCollection gradientStopCollection)
        {
                return CreateRadialGradientBrush_(radialGradientBrushProperties& param, brushProperties param, gradientStopCollection param) = 0;
            }

            ID2D1Bitmap CreateSharedBitmap(ID2D1Bitmap bitmap, std::optional<BitmapProperties> bitmapProperties{};
            }

            ID2D1Bitmap CreateSharedBitmap(IDXGISurface surface, std::optional<BitmapProperties> bitmapProperties{};
            }

            ID2D1Bitmap CreateSharedBitmap(IWICBitmapLock bitmapLock, std::optional<BitmapProperties> bitmapProperties{};
            }

                            ID2D1BitmapRenderTarget CreateCompatibleRenderTarget(void)
        {
                return CreateCompatibleRenderTarget(nullptr param, nullptr param, nullptr param, CompatibleRenderTargetOptions::None param) = 0;
            }

                                ID2D1BitmapRenderTarget CreateCompatibleRenderTarget(SizeI desiredSize)
        {
                return CreateCompatibleRenderTarget(desiredSize param, nullptr param, nullptr param, CompatibleRenderTargetOptions::None param) = 0;
            }

                                    ID2D1BitmapRenderTarget CreateCompatibleRenderTarget(SizeI desiredSize, SizeI desiredPixelSize)
        {
                return CreateCompatibleRenderTarget(desiredSize param, desiredPixelSize param, nullptr param, CompatibleRenderTargetOptions::None param) = 0;
            }

                                                        ID2D1BitmapRenderTarget CreateCompatibleRenderTarget(SizeI desiredSize, SizeI desiredPixelSize, DCommon::PixelFormat desiredFormat)
        {
                return CreateCompatibleRenderTarget(desiredSize param, desiredPixelSize param, desiredFormat param, CompatibleRenderTargetOptions::None param) = 0;
            }

                            void DrawBitmap(ID2D1Bitmap bitmap)
        {
                DrawBitmap(bitmap, nullptr, 1.0f, BitmapInterpolationMode.Linear, nullptr);
            }

                                    void DrawBitmap(ID2D1Bitmap bitmap, float opacity, BitmapInterpolationMode interpolationMode)
        {
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr);
            }

                                        void DrawBitmap(ID2D1Bitmap bitmap, float opacity, BitmapInterpolationMode interpolationMode, Rect sourceRectangle)
        {
                RawRectF rawRect{};
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, rawRect);
            }

                                            void DrawBitmap(ID2D1Bitmap bitmap, Rect destinationRectangle, float opacity, BitmapInterpolationMode interpolationMode, Rect sourceRectangle)
        {
                RawRectF rawDestinationRectangle{};
                RawRectF rawSourceRectangle{};
                DrawBitmap(bitmap, (RawRectF?)rawDestinationRectangle, opacity, interpolationMode, rawSourceRectangle);
            }

                                void DrawEllipse(Ellipse ellipse, ID2D1Brush brush)
        {
                DrawEllipse(ellipse, brush, 1.0f, nullptr);
            }

                                    void DrawEllipse(Ellipse ellipse, ID2D1Brush brush, float strokeWidth)
        {
                DrawEllipse(ellipse, brush, strokeWidth, nullptr);
            }

                                void DrawGeometry(ID2D1Geometry geometry, ID2D1Brush brush)
        {
                DrawGeometry(geometry, brush, 1.0f, nullptr);
            }

                                    void DrawGeometry(ID2D1Geometry geometry, ID2D1Brush brush, float strokeWidth)
        {
                DrawGeometry(geometry, brush, strokeWidth, nullptr);
            }

                                    void DrawLine(Vector2 point0, Vector2 point1, ID2D1Brush brush)
        {
                DrawLine(point0, point1, brush, 1.0f, nullptr);
            }

                                        void DrawLine(const Vector2& point0, const Vector2& point1, ID2D1Brush brush, float strokeWidth)
        {
                DrawLine(point0, point1, brush, strokeWidth, nullptr);
            }

                                void DrawRectangle(const RawRectF& rect, ID2D1Brush brush)
        {
                DrawRectangle(rect, brush, 1.0f, nullptr);
            }

                                    void DrawRectangle(const Rect& rectangle, ID2D1Brush brush, float strokeWidth)
        {
                RawRectF rect{};
                DrawRectangle(rect, brush, strokeWidth, nullptr);
            }

                                void DrawRectangle(const Rect& rectangle, ID2D1Brush brush)
        {
                RawRectF rect{};
                DrawRectangle(rect, brush, 1.0f, nullptr);
            }

                                    void DrawRectangle(const RawRectF& rect, ID2D1Brush brush, float strokeWidth)
        {
                DrawRectangle(rect, brush, strokeWidth, nullptr);
            }

            void FillRectangle(const Rect& rectangle, ID2D1Brush brush)
        {
                RawRectF rect{};
                FillRectangle(rect, brush);
            }

            void FillGeometry(ID2D1Geometry geometry, ID2D1Brush brush)
        {
                FillGeometry(geometry, brush, nullptr);
            }

                                void DrawRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush)
        {
                DrawRoundedRectangle(ref roundedRect, brush, 1.0f, nullptr);
            }

                                    void DrawRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush, float strokeWidth)
        {
                DrawRoundedRectangle(ref roundedRect, brush, strokeWidth, nullptr);
            }

                                        void DrawRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush, float strokeWidth, ID2D1StrokeStyle strokeStyle)
        {
                DrawRoundedRectangle(ref roundedRect, brush, strokeWidth, strokeStyle);
            }

            void FillRoundedRectangle(RoundedRectangle roundedRect, ID2D1Brush brush)
        {
                FillRoundedRectangle(ref roundedRect, brush);
            }

                                                    void DrawText(const std::string& text, IDWriteTextFormat textFormat, Rect layoutRect, ID2D1Brush defaultForegroundBrush)
        {
                RawRectF rawLayoutRect{};
                DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, DrawTextOptions.None, MeasuringMode.Natural);
            }

                                                        void DrawText(const std::string& text, IDWriteTextFormat textFormat, Rect layoutRect, ID2D1Brush defaultForegroundBrush, DrawTextOptions options)
        {
                RawRectF rawLayoutRect{};
                DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, options, MeasuringMode.Natural);
            }

                                                            void DrawText(const std::string& text, IDWriteTextFormat textFormat, Rect layoutRect, ID2D1Brush defaultForegroundBrush, DrawTextOptions options, MeasuringMode measuringMode)
        {
                RawRectF rawLayoutRect{};
                DrawText(text, (uint)text.Length, textFormat, rawLayoutRect, defaultForegroundBrush, options, measuringMode);
            }

                                    void DrawTextLayout(Vector2 origin, IDWriteTextLayout textLayout, ID2D1Brush defaultForegroundBrush)
        {
                DrawTextLayout(origin, textLayout, defaultForegroundBrush, DrawTextOptions.None);
            }

            void DrawGlyphRun(float baselineOriginX, float baselineOriginY, GlyphRun glyphRun, ID2D1Brush foregroundBrush)
        {
                DrawGlyphRun(new Vector2(baselineOriginX, baselineOriginY), glyphRun, foregroundBrush, MeasuringMode.Natural);
            }

            void DrawGlyphRun(Vector2 baselineOrigin, GlyphRun glyphRun, ID2D1Brush foregroundBrush)
        {
                DrawGlyphRun(baselineOrigin, glyphRun, foregroundBrush, MeasuringMode.Natural);
            }

            Result EndDraw(void)
        {
                return EndDraw(_& param, _& param) = 0;
            }
        }


    }
}

#endif // VORTICE_ID2D1RENDERTARGET_H