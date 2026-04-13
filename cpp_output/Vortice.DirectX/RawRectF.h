// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <cmath>

namespace Vortice {

    /// <summary>
    /// Defines a floating-point rectangle (Left, Top, Right, Bottom)
    /// </summary>
    struct RawRectF {
        /// <summary>
        /// The left position.
        /// </summary>
        float Left;

        /// <summary>
        /// The top position.
        /// </summary>
        float Top;

        /// <summary>
        /// The right position
        /// </summary>
        float Right;

        /// <summary>
        /// The bottom position.
        /// </summary>
        float Bottom;

        constexpr RawRectF() 
            : Left(0.0f), Top(0.0f), Right(0.0f), Bottom(0.0f) {}

        constexpr RawRectF(float left, float top, float right, float bottom)
            : Left(left), Top(top), Right(right), Bottom(bottom) {}

        /// <summary>
        /// Gets the width of the rectangle.
        /// </summary>
        constexpr float Width() const {
            return Right - Left;
        }

        /// <summary>
        /// Gets the height of the rectangle.
        /// </summary>
        constexpr float Height() const {
            return Bottom - Top;
        }

        /// <inheritdoc/>
        constexpr bool operator==(const RawRectF& other) const {
            return std::fabs(Left - other.Left) < 1e-6f && 
                   std::fabs(Top - other.Top) < 1e-6f && 
                   std::fabs(Right - other.Right) < 1e-6f && 
                   std::fabs(Bottom - other.Bottom) < 1e-6f;
        }

        /// <inheritdoc/>
        constexpr bool operator!=(const RawRectF& other) const {
            return !(*this == other);
        }
    };

} // namespace Vortice
