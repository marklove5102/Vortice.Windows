// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1FACTORY_H
#define VORTICE_ID2D1FACTORY_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;
        publicclass ID2D1Factory
        {
            publicID2D1DrawingStateBlock CreateDrawingStateBlock(void)
                {
                return CreateDrawingStateBlock(void);
            }
            publicID2D1DrawingStateBlock CreateDrawingStateBlock(DrawingStateDescription drawingStateDescription)
                {
                return CreateDrawingStateBlock(void);
            }
            publicID2D1DrawingStateBlock CreateDrawingStateBlock(DrawingStateDescription drawingStateDescription, const std::optional<IDWriteRenderingParams>& textRenderingParams)
                {
                return CreateDrawingStateBlock(void);
            }
            publicID2D1GeometryGroup CreateGeometryGroup(FillMode fillMode, const std::vector<ID2D1Geometry>& geometries)
                {
                return CreateGeometryGroup(fillMode, geometries, (uint)geometries.Length);
            }
            publicID2D1RectangleGeometry CreateRectangleGeometry(const RectangleF& rectangle)
                {
                RawRectF rawRect{};
                return CreateRectangleGeometry(new IntPtr(&rawRect));
            }
            publicID2D1RectangleGeometry CreateRectangleGeometry(RawRectF rectangle)
                {
                return CreateRectangleGeometry(new IntPtr(&rectangle));
            }
            publicID2D1StrokeStyle CreateStrokeStyle(StrokeStyleProperties properties)
                {
                return CreateStrokeStyle(void);
            }
            publicID2D1StrokeStyle CreateStrokeStyle(StrokeStyleProperties properties, const std::vector<float>& dashes)
                {
                return CreateStrokeStyle(ref properties, dashes, (uint)dashes.Length);
            }
            publicID2D1TransformedGeometry CreateTransformedGeometry(ID2D1Geometry sourceGeometry, Matrix3x2 transform)
                {
                return CreateTransformedGeometry(void);
            }
            public: Vector2 m_desktopDpi{};
                public: Vector2 get_DesktopDpi() const { return GetDesktopDpi(dpiX, dpiY);
                    return new Vector2(void);; }
        }

    }
}

#endif // VORTICE_ID2D1FACTORY_H