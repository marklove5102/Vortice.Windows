// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPDECODERINFO_H
#define VORTICE_DIRECT2D1_IWICBITMAPDECODERINFO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPDECODERINFO_H
#define VORTICE_VORTICE_IWICBITMAPDECODERINFO_H

#include <cstdint>

namespace Vortice {

class IWICBitmapDecoderInfo
{
public:
    ~IWICBitmapDecoderInfo() = default;

    uint32_t get_PatternsCount() const { GetPatterns(0, nullptr, out uint count, out _);
            return count; }
    uint32_t get_PatternsActualCount() const { GetPatterns(0, nullptr, out uint _, out uint actualCount);
            return actualCount; }

    void GetPatterns() { GetPatterns((uint)patterns.Length, patterns, out _, out _); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPDECODERINFO_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPDECODERINFO_H
