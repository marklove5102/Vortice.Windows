// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1GEOMETRY_H
#define VORTICE_ID2D1GEOMETRY_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;
        publicclass ID2D1Geometry
        {
                        public: const float DefaultFlatteningTolerance{};
                        public: float m_flatteningTolerance{}; = DefaultFlatteningTolerance;
                                            publicvoid CombineWithGeometry(ID2D1Geometry inputGeometry, CombineMode combineMode, ID2D1GeometrySink geometrySink)
                {
                CombineWithGeometry(inputGeometry, combineMode, nullptr, FlatteningTolerance, geometrySink);
            }
                                                publicvoid CombineWithGeometry(ID2D1Geometry inputGeometry, CombineMode combineMode, float flatteningTolerance, ID2D1GeometrySink geometrySink)
                {
                CombineWithGeometry(inputGeometry, combineMode, nullptr, flatteningTolerance, geometrySink);
            }
                                                publicGeometryRelation CompareWithGeometry(ID2D1Geometry inputGeometry)
                {
                return CompareWithGeometry(void);
            }
                                                    publicGeometryRelation CompareWithGeometry(ID2D1Geometry inputGeometry, float flatteningTolerance)
                {
                return CompareWithGeometry(void);
            }
                                publicfloat ComputeArea(void)
                {
                return ComputeArea(void);
            }
                                    publicfloat ComputeArea(float flatteningTolerance)
                {
                return ComputeArea(void);
            }
                                publicfloat ComputeLength(void)
                {
                return ComputeLength(void);
            }
                                publicfloat ComputeLength(float flatteningTolerance)
                {
                return ComputeLength(void);
            }
                                    publicVector2 ComputePointAtLength(float length, Vector2& unitTangentVector)
                {
                return ComputePointAtLength(void);
            }
                                        publicVector2 ComputePointAtLength(float length, float flatteningTolerance, Vector2& unitTangentVector)
                {
                return ComputePointAtLength(void);
            }
                                publicbool FillContainsPoint(Vector2 point)
                {
                return FillContainsPoint(void);
            }
                                        publicbool FillContainsPoint(Vector2 point, float flatteningTolerance)
                {
                return FillContainsPoint(void);
            }
                                publicRawRectF GetBounds(void)
                {
                return GetBounds(void);
            }
                                    publicRawRectF GetWidenedBounds(float strokeWidth)
                {
                return GetWidenedBounds(void);
            }
                                        publicRawRectF GetWidenedBounds(float strokeWidth, float flatteningTolerance)
                {
                return GetWidenedBounds(void);
            }
                                            publicRawRectF GetWidenedBounds(float strokeWidth, ID2D1StrokeStyle strokeStyle, float flatteningTolerance)
                {
                return GetWidenedBounds(void);
            }
                                                publicvoid Outline(ID2D1GeometrySink geometrySink)
                {
                Outline(nullptr, FlatteningTolerance, geometrySink);
            }
                                                    publicvoid Outline(float flatteningTolerance, ID2D1GeometrySink geometrySink)
                {
                Outline(nullptr, flatteningTolerance, geometrySink);
            }
                                        publicvoid Simplify(GeometrySimplificationOption simplificationOption, ID2D1SimplifiedGeometrySink geometrySink)
                {
                Simplify(simplificationOption, nullptr, FlatteningTolerance, geometrySink);
            }
                                            publicvoid Simplify(GeometrySimplificationOption simplificationOption, float flatteningTolerance, ID2D1SimplifiedGeometrySink geometrySink)
                {
                Simplify(simplificationOption, nullptr, flatteningTolerance, geometrySink);
            }
                                        publicbool StrokeContainsPoint(Vector2 point, float strokeWidth)
                {
                return StrokeContainsPoint(void);
            }
                                            publicbool StrokeContainsPoint(Vector2 point, float strokeWidth, const std::optional<ID2D1StrokeStyle>& strokeStyle)
                {
                return StrokeContainsPoint(void);
            }
                                                publicbool StrokeContainsPoint(Vector2 point, float strokeWidth, ID2D1StrokeStyle strokeStyle, Matrix3x2 transform)
                {
                return StrokeContainsPoint(void);
            }
                                                    publicbool StrokeContainsPoint(Vector2 point, float strokeWidth, ID2D1StrokeStyle strokeStyle, Matrix3x2 transform, float flatteningTolerance)
                {
                return StrokeContainsPoint(point, strokeWidth, strokeStyle, (Matrix3x2?)transform, flatteningTolerance);
            }
                                    publicvoid Tessellate(ID2D1TessellationSink tessellationSink)
                {
                Tessellate(nullptr, FlatteningTolerance, tessellationSink);
            }
                                        publicvoid Tessellate(float flatteningTolerance, ID2D1TessellationSink tessellationSink)
                {
                Tessellate(nullptr, flatteningTolerance, tessellationSink);
            }
                                        publicvoid Widen(float strokeWidth, ID2D1GeometrySink geometrySink)
                {
                Widen(strokeWidth, nullptr, nullptr, FlatteningTolerance, geometrySink);
            }
                                            publicvoid Widen(float strokeWidth, float flatteningTolerance, ID2D1GeometrySink geometrySink)
                {
                Widen(strokeWidth, nullptr, nullptr, flatteningTolerance, geometrySink);
            }
                                                publicvoid Widen(float strokeWidth, ID2D1StrokeStyle strokeStyle, float flatteningTolerance, ID2D1GeometrySink geometrySink)
                {
                Widen(strokeWidth, strokeStyle, nullptr, flatteningTolerance, geometrySink);
            }
        }

    }
}

#endif // VORTICE_ID2D1GEOMETRY_H