// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <cstddef>

namespace Vortice {

    /// <summary>
    /// Provides access to data organized in 3D.
    /// </summary>
    struct DataBox {
        /// <summary>
        /// Pointer to the data.
        /// </summary>
        void* DataPointer;

        /// <summary>
        /// Gets the number of bytes per row.
        /// </summary>
        uint32_t RowPitch;

        /// <summary>
        /// Gets the number of bytes per slice (for a 3D texture, a slice is a 2D image)
        /// </summary>
        uint32_t SlicePitch;

        constexpr DataBox() 
            : DataPointer(nullptr), RowPitch(0), SlicePitch(0) {}

        /// <summary>
        /// Initializes a new instance of the DataBox struct.
        /// </summary>
        /// <param name="dataPointer">The data pointer.</param>
        /// <param name="rowPitch">The row pitch.</param>
        /// <param name="slicePitch">The slice pitch.</param>
        constexpr DataBox(void* dataPointer, uint32_t rowPitch = 0, uint32_t slicePitch = 0)
            : DataPointer(dataPointer), RowPitch(rowPitch), SlicePitch(slicePitch) {}

        /// <summary>
        /// Gets a value indicating whether this instance is empty.
        /// </summary>
        constexpr bool IsEmpty() const {
            return DataPointer == nullptr && RowPitch == 0 && SlicePitch == 0;
        }
    };

} // namespace Vortice
