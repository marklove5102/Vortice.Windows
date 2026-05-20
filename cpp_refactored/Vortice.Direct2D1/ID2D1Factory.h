// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1FACTORY_H
#define VORTICE_ID2D1FACTORY_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        class ID2D1Factory
        {
            ID2D1DrawingStateBlock CreateDrawingStateBlock(void)
        {
                return CreateDrawingStateBlock(nullptr param, nullptr param) = 0;
            }

            ID2D1DrawingStateBlock CreateDrawingStateBlock(DrawingStateDescription drawingStateDescription)
        {
                return CreateDrawingStateBlock(drawingStateDescription param, nullptr param) = 0;
            }

            ID2D1DrawingStateBlock CreateDrawingStateBlock(DrawingStateDescription drawingStateDescription, const std::optional<IDWriteRenderingParams>& textRenderingParams)
        {
                return CreateDrawingStateBlock(drawingStateDescription param, textRenderingParams param) = 0;
            }

            ID2D1GeometryGroup CreateGeometryGroup(FillMode fillMode, const std::vector<ID2D1Geometry>& geometries)
        {
                return CreateGeometryGroup(fillMode, geometries, (uint)geometries.Length);
            }

            ID2D1RectangleGeometry CreateRectangleGeometry(const RectangleF& rectangle)
        {
                RawRectF rawRect{};
                return CreateRectangleGeometry(new IntPtr(&rawRect));
            }

            ID2D1RectangleGeometry CreateRectangleGeometry(RawRectF rectangle)
        {
                return CreateRectangleGeometry(new IntPtr(&rectangle));
            }

            ID2D1StrokeStyle CreateStrokeStyle(StrokeStyleProperties properties)
        {
                return CreateStrokeStyle(properties& param, nullptr param, 0 param) = 0;
            }

            ID2D1StrokeStyle CreateStrokeStyle(StrokeStyleProperties properties, const std::vector<float>& dashes)
        {
                return CreateStrokeStyle(ref properties, dashes, (uint)dashes.Length);
            }

            ID2D1TransformedGeometry CreateTransformedGeometry(ID2D1Geometry sourceGeometry, Matrix3x2 transform)
        {
                return CreateTransformedGeometry(sourceGeometry param, transform& param) = 0;
            }

            public Vector2 DesktopDpi
            {
                get
                {
                    GetDesktopDpi(out float dpiX, out float dpiY);
                    return new Vector2(dpiX param, dpiY param) = 0;
                }
            }
        }


    }
}

#endif // VORTICE_ID2D1FACTORY_H