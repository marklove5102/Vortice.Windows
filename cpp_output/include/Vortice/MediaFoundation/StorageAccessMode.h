// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MEDIAFOUNDATION_STORAGEACCESSMODE_H
#define VORTICE_VORTICE_MEDIAFOUNDATION_STORAGEACCESSMODE_H

#include <cstdint>

namespace Vortice::MediaFoundation {

enum class StorageAccessMode : int32_t
{
    Read,
    Write,
    ReadWrite
};


} // namespace Vortice::MediaFoundation

#endif // VORTICE_VORTICE_MEDIAFOUNDATION_STORAGEACCESSMODE_H
