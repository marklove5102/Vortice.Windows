// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>

namespace Vortice {

/**
 * @brief Defines a floating-point rectangle (Left, Top, Right, Bottom)
 */
struct RawRectF {
    /**
     * @brief The left position.
     */
    float Left;

    /**
     * @brief The top position.
     */
    float Top;

    /**
     * @brief The right position.
     */
    float Right;

    /**
     * @brief The bottom position.
     */
    float Bottom;

    /**
     * @brief Default constructor.
     */
    constexpr RawRectF() : Left(0.0f), Top(0.0f), Right(0.0f), Bottom(0.0f) {}

    /**
     * @brief Constructor with parameters.
     * @param left The left position.
     * @param top The top position.
     * @param right The right position.
     * @param bottom The bottom position.
     */
    constexpr RawRectF(float left, float top, float right, float bottom)
        : Left(left), Top(top), Right(right), Bottom(bottom) {}

    /**
     * @brief Equality operator.
     */
    [[nodiscard]] friend constexpr bool operator==(const RawRectF& a, const RawRectF& b) {
        return a.Left == b.Left && a.Top == b.Top && a.Right == b.Right && a.Bottom == b.Bottom;
    }

    /**
     * @brief Inequality operator.
     */
    [[nodiscard]] friend constexpr bool operator!=(const RawRectF& a, const RawRectF& b) {
        return !(a == b);
    }
};

} // namespace Vortice
