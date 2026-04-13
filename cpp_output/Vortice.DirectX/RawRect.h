// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>

namespace Vortice {

    /// <summary>
    /// Defines an integer rectangle (Left, Top, Right, Bottom)
    /// </summary>
    struct RawRect {
        /// <summary>
        /// The left position.
        /// </summary>
        int32_t Left;

        /// <summary>
        /// The top position.
        /// </summary>
        int32_t Top;

        /// <summary>
        /// The right position
        /// </summary>
        int32_t Right;

        /// <summary>
        /// The bottom position.
        /// </summary>
        int32_t Bottom;

        constexpr RawRect() 
            : Left(0), Top(0), Right(0), Bottom(0) {}

        constexpr RawRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
            : Left(left), Top(top), Right(right), Bottom(bottom) {}

        /// <summary>
        /// Gets the width of the rectangle.
        /// </summary>
        constexpr int32_t Width() const {
            return Right - Left;
        }

        /// <summary>
        /// Gets the height of the rectangle.
        /// </summary>
        constexpr int32_t Height() const {
            return Bottom - Top;
        }

        /// <inheritdoc/>
        constexpr bool operator==(const RawRect& other) const {
            return Left == other.Left && Top == other.Top && 
                   Right == other.Right && Bottom == other.Bottom;
        }

        /// <inheritdoc/>
        constexpr bool operator!=(const RawRect& other) const {
            return !(*this == other);
        }
    };

} // namespace Vortice
