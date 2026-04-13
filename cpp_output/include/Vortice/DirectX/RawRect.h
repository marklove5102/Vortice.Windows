// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>

namespace Vortice {

/**
 * @brief Defines an integer rectangle (Left, Top, Right, Bottom)
 */
struct RawRect {
    /**
     * @brief The left position.
     */
    int32_t Left;

    /**
     * @brief The top position.
     */
    int32_t Top;

    /**
     * @brief The right position.
     */
    int32_t Right;

    /**
     * @brief The bottom position.
     */
    int32_t Bottom;

    /**
     * @brief Default constructor.
     */
    constexpr RawRect() : Left(0), Top(0), Right(0), Bottom(0) {}

    /**
     * @brief Constructor with parameters.
     * @param left The left position.
     * @param top The top position.
     * @param right The right position.
     * @param bottom The bottom position.
     */
    constexpr RawRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
        : Left(left), Top(top), Right(right), Bottom(bottom) {}

    /**
     * @brief Equality operator.
     */
    [[nodiscard]] friend constexpr bool operator==(const RawRect& a, const RawRect& b) {
        return a.Left == b.Left && a.Top == b.Top && a.Right == b.Right && a.Bottom == b.Bottom;
    }

    /**
     * @brief Inequality operator.
     */
    [[nodiscard]] friend constexpr bool operator!=(const RawRect& a, const RawRect& b) {
        return !(a == b);
    }
};

} // namespace Vortice
