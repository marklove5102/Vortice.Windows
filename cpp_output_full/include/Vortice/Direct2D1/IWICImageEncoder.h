// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IWICIMAGEENCODER_H
#define VORTICE_DIRECT2D1_IWICIMAGEENCODER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IWICIMAGEENCODER_H
#define VORTICE_VORTICE_IWICIMAGEENCODER_H

#include <cstdint>

namespace Vortice {

class IWICImageEncoder
{
public:
    ~IWICImageEncoder() = default;

    HRESULT WriteFrame() { return WriteFrame(image, frameEncode, ref imageParameters); }

    HRESULT WriteThumbnail() { return WriteThumbnail(image, encoder, ref imageParameters); }

    HRESULT WriteFrameThumbnail() { return WriteFrameThumbnail(image, frameEncode, ref imageParameters); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IWICIMAGEENCODER_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IWICIMAGEENCODER_H
