// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_VIDEOPROCESSORCOLORSPACE_H
#define VORTICE_DIRECT3D11_VIDEOPROCESSORCOLORSPACE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VIDEOPROCESSORCOLORSPACE_H
#define VORTICE_VORTICE_VIDEOPROCESSORCOLORSPACE_H

#include <cstdint>

namespace Vortice {

struct VideoProcessorColorSpace
{
public:
    uint32_t get_Usage() const { return _bitfield & 0x1u; }
    void set_Usage(uint32_t value) { _bitfield = (_bitfield & ~0x1u) | (value & 0x1u); }
    uint32_t get_RGB_Range() const { return (_bitfield >> 1) & 0x1u; }
    void set_RGB_Range(uint32_t value) { _bitfield = (_bitfield & ~(0x1u << 1)) | ((value & 0x1u) << 1); }
    uint32_t get_YCbCr_Matrix() const { return (_bitfield >> 2) & 0x1u; }
    void set_YCbCr_Matrix(uint32_t value) { _bitfield = (_bitfield & ~(0x1u << 2)) | ((value & 0x1u) << 2); }
    uint32_t get_YCbCr_xvYCC() const { return (_bitfield >> 3) & 0x1u; }
    void set_YCbCr_xvYCC(uint32_t value) { _bitfield = (_bitfield & ~(0x1u << 3)) | ((value & 0x1u) << 3); }
    uint32_t get_Nominal_Range() const { return (_bitfield >> 4) & 0x3u; }
    void set_Nominal_Range(uint32_t value) { _bitfield = (_bitfield & ~(0x3u << 4)) | ((value & 0x3u) << 4); }
    uint32_t get_Reserved() const { return (_bitfield >> 6) & 0x3FFFFFFu; }
    void set_Reserved(uint32_t value) { _bitfield = (_bitfield & ~(0x3FFFFFFu << 6)) | ((value & 0x3FFFFFFu) << 6); }


private:
    uint32_t _bitfield;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VIDEOPROCESSORCOLORSPACE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_VIDEOPROCESSORCOLORSPACE_H
