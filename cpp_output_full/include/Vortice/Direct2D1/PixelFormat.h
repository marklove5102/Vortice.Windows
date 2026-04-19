// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_PIXELFORMAT_H
#define VORTICE_DIRECT2D1_PIXELFORMAT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_PIXELFORMAT_H
#define VORTICE_VORTICE_PIXELFORMAT_H

#include <cstdint>

namespace Vortice {

class PixelFormat
{
public:
    ~PixelFormat() = default;

    static uint32_t GetBitsPerPixel() { s_mapGuidToSize.TryGetValue(guid, out uint bitsPerPixel);
        return bitsPerPixel; }

    static uint32_t WICBitsPerPixel() { using IWICComponentInfo info = factory.CreateComponentInfo(pixelFormat);
        ComponentType type = info.ComponentType;
        if (type != ComponentType.PixelFormat)
            return 0;

        using IWICPixelFormatInfo pixelFormatInfo = info.QueryInterface<IWICPixelFormatInfo>();
        return pixelFormatInfo.BitsPerPixel; }


private:
    static const std::unordered_map<GUID, uint32_t> s_mapGuidToSize;
    static const std::unordered_map<GUID, Format> s_WICFormats;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_PIXELFORMAT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_PIXELFORMAT_H
