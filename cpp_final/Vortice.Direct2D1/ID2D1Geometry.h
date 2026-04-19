// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1GEOMETRY_H
#define VORTICE_ID2D1GEOMETRY_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        class ID2D1Geometry
        {
                        public: const float DefaultFlatteningTolerance{};

                        float m_flatteningTolerance{}; = DefaultFlatteningTolerance;

                                            void CombineWithGeometry(ID2D1Geometry inputGeometry, CombineMode combineMode, ID2D1GeometrySink geometrySink)
        {
                CombineWithGeometry(inputGeometry, combineMode, nullptr, FlatteningTolerance, geometrySink);
            }

                                                void CombineWithGeometry(ID2D1Geometry inputGeometry, CombineMode combineMode, float flatteningTolerance, ID2D1GeometrySink geometrySink)
        {
                CombineWithGeometry(inputGeometry, combineMode, nullptr, flatteningTolerance, geometrySink);
            }

                                                GeometryRelation CompareWithGeometry(ID2D1Geometry inputGeometry)
        {
                return CompareWithGeometry(inputGeometry param, nullptr param, FlatteningTolerance param) = 0;
            }

                                                    GeometryRelation CompareWithGeometry(ID2D1Geometry inputGeometry, float flatteningTolerance)
        {
                return CompareWithGeometry(inputGeometry param, nullptr param, flatteningTolerance param) = 0;
            }

                                float ComputeArea(void)
        {
                return ComputeArea(nullptr param, FlatteningTolerance param) = 0;
            }

                                    float ComputeArea(float flatteningTolerance)
        {
                return ComputeArea(nullptr param, flatteningTolerance param) = 0;
            }

                                float ComputeLength(void)
        {
                return ComputeLength(nullptr param, FlatteningTolerance param) = 0;
            }

                                float ComputeLength(float flatteningTolerance)
        {
                return ComputeLength(nullptr param, flatteningTolerance param) = 0;
            }

                                    Vector2 ComputePointAtLength(float length, Vector2& unitTangentVector)
        {
                return ComputePointAtLength(length param, nullptr param, FlatteningTolerance param, unitTangentVector& param) = 0;
            }

                                        Vector2 ComputePointAtLength(float length, float flatteningTolerance, Vector2& unitTangentVector)
        {
                return ComputePointAtLength(length param, nullptr param, flatteningTolerance param, unitTangentVector& param) = 0;
            }

                                bool FillContainsPoint(Vector2 point)
        {
                return FillContainsPoint(point param, nullptr param, FlatteningTolerance param) = 0;
            }

                                        bool FillContainsPoint(Vector2 point, float flatteningTolerance)
        {
                return FillContainsPoint(point param, nullptr param, flatteningTolerance param) = 0;
            }

                                RawRectF GetBounds(void)
        {
                return GetBounds(nullptr param) = 0;
            }

                                    RawRectF GetWidenedBounds(float strokeWidth)
        {
                return GetWidenedBounds(strokeWidth param, nullptr param, nullptr param, FlatteningTolerance param) = 0;
            }

                                        RawRectF GetWidenedBounds(float strokeWidth, float flatteningTolerance)
        {
                return GetWidenedBounds(strokeWidth param, nullptr param, nullptr param, flatteningTolerance param) = 0;
            }

                                            RawRectF GetWidenedBounds(float strokeWidth, ID2D1StrokeStyle strokeStyle, float flatteningTolerance)
        {
                return GetWidenedBounds(strokeWidth param, strokeStyle param, nullptr param, flatteningTolerance param) = 0;
            }

                                                void Outline(ID2D1GeometrySink geometrySink)
        {
                Outline(nullptr, FlatteningTolerance, geometrySink);
            }

                                                    void Outline(float flatteningTolerance, ID2D1GeometrySink geometrySink)
        {
                Outline(nullptr, flatteningTolerance, geometrySink);
            }

                                        void Simplify(GeometrySimplificationOption simplificationOption, ID2D1SimplifiedGeometrySink geometrySink)
        {
                Simplify(simplificationOption, nullptr, FlatteningTolerance, geometrySink);
            }

                                            void Simplify(GeometrySimplificationOption simplificationOption, float flatteningTolerance, ID2D1SimplifiedGeometrySink geometrySink)
        {
                Simplify(simplificationOption, nullptr, flatteningTolerance, geometrySink);
            }

                                        bool StrokeContainsPoint(Vector2 point, float strokeWidth)
        {
                return StrokeContainsPoint(point param, strokeWidth param, nullptr param) = 0;
            }

                                            bool StrokeContainsPoint(Vector2 point, float strokeWidth, const std::optional<ID2D1StrokeStyle>& strokeStyle)
        {
                return StrokeContainsPoint(point param, strokeWidth param, strokeStyle param, nullptr param, FlatteningTolerance param) = 0;
            }

                                                bool StrokeContainsPoint(Vector2 point, float strokeWidth, ID2D1StrokeStyle strokeStyle, Matrix3x2 transform)
        {
                return StrokeContainsPoint(point param, strokeWidth param, strokeStyle param, transform param, FlatteningTolerance param) = 0;
            }

                                                    bool StrokeContainsPoint(Vector2 point, float strokeWidth, ID2D1StrokeStyle strokeStyle, Matrix3x2 transform, float flatteningTolerance)
        {
                return StrokeContainsPoint(point, strokeWidth, strokeStyle, (Matrix3x2?)transform, flatteningTolerance);
            }

                                    void Tessellate(ID2D1TessellationSink tessellationSink)
        {
                Tessellate(nullptr, FlatteningTolerance, tessellationSink);
            }

                                        void Tessellate(float flatteningTolerance, ID2D1TessellationSink tessellationSink)
        {
                Tessellate(nullptr, flatteningTolerance, tessellationSink);
            }

                                        void Widen(float strokeWidth, ID2D1GeometrySink geometrySink)
        {
                Widen(strokeWidth, nullptr, nullptr, FlatteningTolerance, geometrySink);
            }

                                            void Widen(float strokeWidth, float flatteningTolerance, ID2D1GeometrySink geometrySink)
        {
                Widen(strokeWidth, nullptr, nullptr, flatteningTolerance, geometrySink);
            }

                                                void Widen(float strokeWidth, ID2D1StrokeStyle strokeStyle, float flatteningTolerance, ID2D1GeometrySink geometrySink)
        {
                Widen(strokeWidth, strokeStyle, nullptr, flatteningTolerance, geometrySink);
            }
        }


    }
}

#endif // VORTICE_ID2D1GEOMETRY_H