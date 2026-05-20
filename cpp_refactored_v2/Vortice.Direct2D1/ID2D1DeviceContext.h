// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1DEVICECONTEXT_H
#define VORTICE_ID2D1DEVICECONTEXT_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;
        publicclass ID2D1DeviceContext
        {
            publicID2D1Bitmap1 CreateBitmap(const SizeI& size)
                {
                return CreateBitmap(size, IntPtr.Zero, 0, new BitmapProperties1(PixelFormat.Unknown));
            }
            publicID2D1Bitmap1 CreateBitmap(const SizeI& size, BitmapProperties1 bitmapProperties)
                {
                return CreateBitmap(void);
            }
            publicID2D1Bitmap1 CreateBitmap(const SizeI& size, void* sourceData, uint32_t pitch)
                {
                return CreateBitmap(size, sourceData, pitch, new BitmapProperties1(PixelFormat.Unknown));
            }
            publicID2D1ColorContext CreateColorContext(ColorSpace space, const std::vector<uint8_t>& profile)
                {
                return CreateColorContext(space, profile, (uint)profile.Length);
            }
            publicvoid DrawBitmap(ID2D1Bitmap bitmap, float opacity, InterpolationMode interpolationMode)
                {
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr, nullptr);
            }
            publicvoid DrawBitmap(ID2D1Bitmap bitmap, float opacity, InterpolationMode interpolationMode, const Matrix4x4& perspectiveTransform)
                {
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, nullptr, perspectiveTransform);
            }
            publicvoid DrawBitmap(ID2D1Bitmap bitmap, float opacity, InterpolationMode interpolationMode, const RawRectF& sourceRectangle, const Matrix4x4& perspectiveTransform)
                {
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, sourceRectangle, perspectiveTransform);
            }
            publicvoid DrawBitmap(ID2D1Bitmap bitmap, const RectangleF& destinationRectangle, float opacity, InterpolationMode interpolationMode, const RectangleF& sourceRectangle, const Matrix4x4& perspectiveTransform)
                {
                RawRectF destRect{};
                RawRectF sourceRect{};
                DrawBitmap(bitmap, (RawRectF?)destRect, opacity, interpolationMode, (RawRectF?)sourceRect, perspectiveTransform);
            }
            publicvoid DrawBitmap(ID2D1Bitmap bitmap, float opacity, InterpolationMode interpolationMode, const RectangleF& sourceRectangle, const Matrix4x4& perspectiveTransform)
                {
                RawRectF sourceRect{};
                DrawBitmap(bitmap, nullptr, opacity, interpolationMode, (RawRectF?)sourceRect, perspectiveTransform);
            }
            publicvoid DrawImage(ID2D1Image image, const Vector2& targetOffset, InterpolationMode interpolationMode, CompositeMode compositeMode)
                {
                DrawImage(image, targetOffset, nullptr, interpolationMode, compositeMode);
            }
            publicvoid DrawImage(ID2D1Image image, InterpolationMode interpolationMode, CompositeMode compositeMode)
                {
                DrawImage(image, nullptr, nullptr, interpolationMode, compositeMode);
            }
            publicvoid DrawImage(ID2D1Effect effect, const Vector2& targetOffset, InterpolationMode interpolationMode, CompositeMode compositeMode)
                {
                DrawImage(output, targetOffset, nullptr, interpolationMode, compositeMode);
            }
            publicvoid DrawImage(ID2D1Effect effect, InterpolationMode interpolationMode, CompositeMode compositeMode)
                {
                DrawImage(output, nullptr, nullptr, interpolationMode, compositeMode);
            }
            publicvoid PushLayer(LayerParameters1 layerParameters, ID2D1Layer layer)
                {
                PushLayer(ref layerParameters, layer);
            }
            public RawRectF[] GetEffectInvalidRectangles(ID2D1Effect effect)
            {
                var invalidRects{};
                if (invalidRects.Length == 0)
                {
                    return invalidRects{};
                }
                GetEffectInvalidRectangles(effect, invalidRects, (uint)invalidRects.Length);
                return invalidRects{};
            }
            publicvoid GetEffectInvalidRectangles(ID2D1Effect effect, const std::vector<RawRectF>& invalidRects)
                {
                GetEffectInvalidRectangles(effect, invalidRects, (uint)invalidRects.Length);
            }
            public RawRectF[] GetEffectRequiredInputRectangles(ID2D1Effect renderEffect, EffectInputDescription[] inputDescriptions)
            {
                var result{};
                GetEffectRequiredInputRectangles(renderEffect, nullptr, inputDescriptions, result, (uint)inputDescriptions.Length);
                return result{};
            }
            public RawRectF[] GetEffectRequiredInputRectangles(ID2D1Effect renderEffect, RawRectF renderImageRectangle, EffectInputDescription[] inputDescriptions)
            {
                var result{};
                GetEffectRequiredInputRectangles(renderEffect, renderImageRectangle, inputDescriptions, result, (uint)inputDescriptions.Length);
                return result{};
            }
            publicvoid GetEffectRequiredInputRectangles(ID2D1Effect renderEffect, const std::vector<EffectInputDescription>& inputDescriptions, const std::vector<RawRectF>& requiredInputRects)
                {
                GetEffectRequiredInputRectangles(renderEffect, nullptr, inputDescriptions, requiredInputRects, (uint)inputDescriptions.Length);
            }
            publicvoid GetEffectRequiredInputRectangles(ID2D1Effect renderEffect, RawRectF renderImageRectangle, const std::vector<EffectInputDescription>& inputDescriptions, const std::vector<RawRectF>& requiredInputRects)
                {
                GetEffectRequiredInputRectangles(renderEffect, renderImageRectangle, inputDescriptions, requiredInputRects, (uint)inputDescriptions.Length);
            }
        }

    }
}

#endif // VORTICE_ID2D1DEVICECONTEXT_H