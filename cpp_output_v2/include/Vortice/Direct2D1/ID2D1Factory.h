// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1FACTORY_H
#define VORTICE_DIRECT2D1_ID2D1FACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1FACTORY_H
#define VORTICE_VORTICE_ID2D1FACTORY_H

#include <cstdint>

namespace Vortice {

class ID2D1Factory
{
public:
    ~ID2D1Factory() = default;

    Vector2 get_DesktopDpi() const { GetDesktopDpi(out float dpiX, out float dpiY);
            return new Vector2(dpiX, dpiY); }

    ID2D1DrawingStateBlock CreateDrawingStateBlock() { return CreateDrawingStateBlock(nullptr, nullptr); }

    ID2D1DrawingStateBlock CreateDrawingStateBlock() { return CreateDrawingStateBlock(drawingStateDescription, nullptr); }

    ID2D1DrawingStateBlock CreateDrawingStateBlock() { return CreateDrawingStateBlock(drawingStateDescription, textRenderingParams); }

    ID2D1GeometryGroup CreateGeometryGroup() { return CreateGeometryGroup(fillMode, geometries, (uint)geometries.Length); }

    ID2D1RectangleGeometry CreateRectangleGeometry() { RawRectF rawRect = rectangle;
        return CreateRectangleGeometry(new IntPtr(&rawRect)); }

    ID2D1StrokeStyle CreateStrokeStyle() { return CreateStrokeStyle(ref properties, nullptr, 0); }

    ID2D1StrokeStyle CreateStrokeStyle() { return CreateStrokeStyle(ref properties, dashes, (uint)dashes.Length); }

    ID2D1TransformedGeometry CreateTransformedGeometry() { return CreateTransformedGeometry(sourceGeometry, ref transform); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1FACTORY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1FACTORY_H
