// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPDECODER_H
#define VORTICE_DIRECT2D1_IWICBITMAPDECODER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPDECODER_H
#define VORTICE_VORTICE_IWICBITMAPDECODER_H

#include <cstdint>

namespace Vortice {

class IWICBitmapDecoder
{
public:
    ~IWICBitmapDecoder() = default;

    void Initialize() { if (this._wicStream != nullptr)
            throw InvalidOperationException("This dynamic_cast<already>(instance) != nullptr initialized with an existing stream");

        Initialize_(stream, cacheOptions); }

    HRESULT TryGetColorContexts() { return ColorContextsHelper.TryGetColorContexts(GetColorContexts, imagingFactory, out colorContexts); }


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPDECODER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPDECODER_H
