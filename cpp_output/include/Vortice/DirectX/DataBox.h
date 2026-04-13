// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <cstddef>

namespace Vortice {

/**
 * @brief Provides access to data organized in 3D.
 */
struct DataBox {
    /**
     * @brief Pointer to the data.
     */
    void* DataPointer;

    /**
     * @brief Gets the number of bytes per row.
     */
    int32_t RowPitch;

    /**
     * @brief Gets the number of bytes per slice (for a 3D texture, a slice is a 2D image)
     */
    int32_t SlicePitch;

    /**
     * @brief Default constructor
     */
    constexpr DataBox() 
        : DataPointer(nullptr), RowPitch(0), SlicePitch(0) {}

    /**
     * @brief Initializes a new instance of the DataBox struct.
     * @param dataPointer The data pointer.
     * @param rowPitch The row pitch.
     * @param slicePitch The slice pitch.
     */
    constexpr DataBox(void* dataPointer, int32_t rowPitch = 0, int32_t slicePitch = 0)
        : DataPointer(dataPointer), RowPitch(rowPitch), SlicePitch(slicePitch) {}

    /**
     * @brief Gets a value indicating whether this instance is empty.
     */
    [[nodiscard]] constexpr bool IsEmpty() const {
        return DataPointer == nullptr && RowPitch == 0 && SlicePitch == 0;
    }
};

} // namespace Vortice
