// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPFRAMEDECODE_H
#define VORTICE_DIRECT2D1_IWICBITMAPFRAMEDECODE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPFRAMEDECODE_H
#define VORTICE_VORTICE_IWICBITMAPFRAMEDECODE_H

#include <cstdint>

namespace Vortice {

class IWICBitmapFrameDecode
{
public:
    ~IWICBitmapFrameDecode() = default;

    HRESULT TryGetColorContexts() { return ColorContextsHelper.TryGetColorContexts(GetColorContexts, imagingFactory, out colorContexts); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPFRAMEDECODE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPFRAMEDECODE_H
