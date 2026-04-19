// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RTFORMATARRAY_H
#define VORTICE_DIRECT3D12_RTFORMATARRAY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RTFORMATARRAY_H
#define VORTICE_VORTICE_RTFORMATARRAY_H

#include <cstdint>

namespace Vortice {

struct RtFormatArray
{
public:
    constexpr RtFormatArray(std::vector<Format> formats)
    _RTFormats = formats;
    Format RTFormats;
    Format __RTFormats1;
    Format __RTFormats2;
    Format __RTFormats3;
    Format __RTFormats4;
    Format __RTFormats5;
    Format __RTFormats6;
    Format __RTFormats7;
    int32_t NumRenderTargets;


private:
    std::vector<Format> _RTFormats;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RTFORMATARRAY_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    Format RTFormats;
    Format __RTFormats1;
    Format __RTFormats2;
    Format __RTFormats3;
    Format __RTFormats4;
    Format __RTFormats5;
    Format __RTFormats6;
    Format __RTFormats7;
    int32_t NumRenderTargets;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RTFORMATARRAY_H
