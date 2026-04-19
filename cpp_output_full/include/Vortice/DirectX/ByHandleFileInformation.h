// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_BYHANDLEFILEINFORMATION_H
#define VORTICE_DIRECTX_BYHANDLEFILEINFORMATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>
#include <windows.h>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BYHANDLEFILEINFORMATION_H
#define VORTICE_VORTICE_BYHANDLEFILEINFORMATION_H

#include <cstdint>

namespace Vortice {

struct ByHandleFileInformation
{
public:
    uint32_t FileAttributes;
    uint64_t CreationTime;
    uint64_t LastAccessTime;
    uint64_t LastWriteTime;
    uint32_t VolumeSerialNumber;
    uint32_t FileSizeHigh;
    uint32_t FileSizeLow;
    uint32_t NumberOfLinks;
    uint32_t FileIndexHigh;
    uint32_t FileIndexLow;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BYHANDLEFILEINFORMATION_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_BYHANDLEFILEINFORMATION_H
