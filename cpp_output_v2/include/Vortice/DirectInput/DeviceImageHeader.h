// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_DEVICEIMAGEHEADER_H
#define VORTICE_DIRECTINPUT_DEVICEIMAGEHEADER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DEVICEIMAGEHEADER_H
#define VORTICE_VORTICE_DEVICEIMAGEHEADER_H

#include <cstdint>

namespace Vortice {

class DeviceImageHeader
{
public:
    ~DeviceImageHeader() = default;

    int32_t Size;
    int32_t SizeImageInfo;
    int32_t ViewCount;
    int32_t ButtonCount;
    int32_t AxeCount;
    int32_t PovCount;
    int32_t BufferSize;
    int32_t BufferUsed;
    void* ImageInfoArrayPointer;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DEVICEIMAGEHEADER_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t Size;
    int32_t SizeImageInfo;
    int32_t ViewCount;
    int32_t ButtonCount;
    int32_t AxeCount;
    int32_t PovCount;
    int32_t BufferSize;
    int32_t BufferUsed;
    void* ImageInfoArrayPointer;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_DEVICEIMAGEHEADER_H
