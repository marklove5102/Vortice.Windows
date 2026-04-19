// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1GEOMETRY_H
#define VORTICE_DIRECT2D1_ID2D1GEOMETRY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1GEOMETRY_H
#define VORTICE_VORTICE_ID2D1GEOMETRY_H

#include <cstdint>

namespace Vortice {

class ID2D1Geometry
{
public:
    ~ID2D1Geometry() = default;

    float FlatteningTolerance{};

    void CombineWithGeometry() { CombineWithGeometry(inputGeometry, combineMode, nullptr, FlatteningTolerance, geometrySink); }

    void CombineWithGeometry() { CombineWithGeometry(inputGeometry, combineMode, nullptr, flatteningTolerance, geometrySink); }

    GeometryRelation CompareWithGeometry() { return CompareWithGeometry(inputGeometry, nullptr, FlatteningTolerance); }

    GeometryRelation CompareWithGeometry() { return CompareWithGeometry(inputGeometry, nullptr, flatteningTolerance); }

    float ComputeArea() { return ComputeArea(nullptr, FlatteningTolerance); }

    float ComputeArea() { return ComputeArea(nullptr, flatteningTolerance); }

    float ComputeLength() { return ComputeLength(nullptr, FlatteningTolerance); }

    float ComputeLength() { return ComputeLength(nullptr, flatteningTolerance); }

    Vector2 ComputePointAtLength() { return ComputePointAtLength(length, nullptr, FlatteningTolerance, out unitTangentVector); }

    Vector2 ComputePointAtLength() { return ComputePointAtLength(length, nullptr, flatteningTolerance, out unitTangentVector); }

    bool FillContainsPoint() { return FillContainsPoint(point, nullptr, FlatteningTolerance); }

    bool FillContainsPoint() { return FillContainsPoint(point, nullptr, flatteningTolerance); }

    RawRectF GetBounds() { return GetBounds(nullptr); }

    RawRectF GetWidenedBounds() { return GetWidenedBounds(strokeWidth, nullptr, nullptr, FlatteningTolerance); }

    RawRectF GetWidenedBounds() { return GetWidenedBounds(strokeWidth, nullptr, nullptr, flatteningTolerance); }

    RawRectF GetWidenedBounds() { return GetWidenedBounds(strokeWidth, strokeStyle, nullptr, flatteningTolerance); }

    void Outline() { Outline(nullptr, FlatteningTolerance, geometrySink); }

    void Outline() { Outline(nullptr, flatteningTolerance, geometrySink); }

    void Simplify() { Simplify(simplificationOption, nullptr, FlatteningTolerance, geometrySink); }

    void Simplify() { Simplify(simplificationOption, nullptr, flatteningTolerance, geometrySink); }

    bool StrokeContainsPoint() { return StrokeContainsPoint(point, strokeWidth, nullptr); }

    bool StrokeContainsPoint() { return StrokeContainsPoint(point, strokeWidth, strokeStyle, nullptr, FlatteningTolerance); }

    bool StrokeContainsPoint() { return StrokeContainsPoint(point, strokeWidth, strokeStyle, transform, FlatteningTolerance); }

    bool StrokeContainsPoint() { return StrokeContainsPoint(point, strokeWidth, strokeStyle, (Matrix3x2?)transform, flatteningTolerance); }

    void Tessellate() { Tessellate(nullptr, FlatteningTolerance, tessellationSink); }

    void Tessellate() { Tessellate(nullptr, flatteningTolerance, tessellationSink); }

    void Widen() { Widen(strokeWidth, nullptr, nullptr, FlatteningTolerance, geometrySink); }

    void Widen() { Widen(strokeWidth, nullptr, nullptr, flatteningTolerance, geometrySink); }

    void Widen() { Widen(strokeWidth, strokeStyle, nullptr, flatteningTolerance, geometrySink); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1GEOMETRY_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1GEOMETRY_H
