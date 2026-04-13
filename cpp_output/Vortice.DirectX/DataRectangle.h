// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <cstddef>

namespace Vortice {

    /// <summary>
    /// Provides access to data organized in 2D.
    /// </summary>
    struct DataRectangle {
        /// <summary>
        /// Pointer to the data.
        /// </summary>
        void* DataPointer;

        /// <summary>
        /// Gets the number of bytes per row.
        /// </summary>
        uint32_t Pitch;

        constexpr DataRectangle() 
            : DataPointer(nullptr), Pitch(0) {}

        /// <summary>
        /// Initializes a new instance of the DataRectangle class.
        /// </summary>
        /// <param name="dataPointer">The data pointer.</param>
        /// <param name="pitch">The pitch.</param>
        constexpr DataRectangle(void* dataPointer, uint32_t pitch)
            : DataPointer(dataPointer), Pitch(pitch) {}
    };

} // namespace Vortice
