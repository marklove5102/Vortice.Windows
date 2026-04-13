// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#pragma once

#include <cstdint>
#include <cstddef>

namespace Vortice {

/**
 * @brief Provides access to data organized in 2D.
 */
struct DataRectangle {
    /**
     * @brief Pointer to the data.
     */
    void* DataPointer;

    /**
     * @brief Gets the number of bytes per row.
     */
    uint32_t Pitch;

    /**
     * @brief Default constructor
     */
    constexpr DataRectangle() 
        : DataPointer(nullptr), Pitch(0) {}

    /**
     * @brief Initializes a new instance of the DataRectangle class.
     * @param dataPointer The data pointer.
     * @param pitch The pitch.
     */
    constexpr DataRectangle(void* dataPointer, uint32_t pitch)
        : DataPointer(dataPointer), Pitch(pitch) {}
};

} // namespace Vortice
