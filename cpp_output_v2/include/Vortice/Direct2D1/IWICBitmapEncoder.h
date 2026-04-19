// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICBITMAPENCODER_H
#define VORTICE_DIRECT2D1_IWICBITMAPENCODER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICBITMAPENCODER_H
#define VORTICE_VORTICE_IWICBITMAPENCODER_H

#include <cstdint>

namespace Vortice {

class IWICBitmapEncoder
{
public:
    ~IWICBitmapEncoder() = default;

    void Initialize() { DisposeWICStreamProxy();
        Initialize_(stream, cacheOption); }

    void Initialize() { DisposeWICStreamProxy();

        _wicStream = _factory.CreateStream(stream);
        Initialize_(_wicStream, cacheOption); }


private:
    IWICImagingFactory _factory;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICBITMAPENCODER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICBITMAPENCODER_H
