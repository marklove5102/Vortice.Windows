// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_WIC_H
#define VORTICE_DIRECT2D1_WIC_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WIC_H
#define VORTICE_VORTICE_WIC_H

#include <cstdint>

namespace Vortice {

class WIC
{
public:
    ~WIC() = default;

    static IWICBitmapSource WICConvertBitmapSource() { WICConvertBitmapSource_(dstFormat, source, out IWICBitmapSource destination).CheckError();
        return destination; }

    static HRESULT WICConvertBitmapSource() { return WICConvertBitmapSource_(dstFormat, source, out destination); }

    static IWICBitmap WICCreateBitmapFromSection() { WICCreateBitmapFromSection_(width, height, pixelFormat, section, stride, offset, out IWICBitmap result).CheckError();
        return result; }

    static HRESULT WICCreateBitmapFromSection() { return WICCreateBitmapFromSection_(width, height, pixelFormat, section, stride, offset, out result); }

    static IWICBitmap WICCreateBitmapFromSectionEx() { WICCreateBitmapFromSectionEx_(width, height, pixelFormat, section, stride, offset, desiredAccessLevel, out IWICBitmap bitmap).CheckError();
        return bitmap; }

    static HRESULT WICCreateBitmapFromSectionEx() { return WICCreateBitmapFromSectionEx_(width, height, pixelFormat, section, stride, offset, desiredAccessLevel, out bitmap); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WIC_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_WIC_H
