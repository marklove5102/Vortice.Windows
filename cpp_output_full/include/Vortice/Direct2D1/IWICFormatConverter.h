// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICFORMATCONVERTER_H
#define VORTICE_DIRECT2D1_IWICFORMATCONVERTER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICFORMATCONVERTER_H
#define VORTICE_VORTICE_IWICFORMATCONVERTER_H

#include <cstdint>

namespace Vortice {

class IWICFormatConverter
{
public:
    ~IWICFormatConverter() = default;

    HRESULT Initialize() { return Initialize(source, dstFormat, BitmapDitherType.None, nullptr, 0.0, BitmapPaletteType.Custom); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICFORMATCONVERTER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICFORMATCONVERTER_H
