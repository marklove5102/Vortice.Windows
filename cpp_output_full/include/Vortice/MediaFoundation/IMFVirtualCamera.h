// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_MEDIAFOUNDATION_IMFVIRTUALCAMERA_H
#define VORTICE_MEDIAFOUNDATION_IMFVIRTUALCAMERA_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IMFVIRTUALCAMERA_H
#define VORTICE_VORTICE_IMFVIRTUALCAMERA_H

#include <cstdint>

namespace Vortice {

class IMFVirtualCamera
{
public:
    ~IMFVirtualCamera() = default;

    HRESULT AddProperty() { fixed (byte* pbData = data)
            return AddProperty(ref key, (uint)type, pbData, (uint)data.Length); }

    HRESULT AddProperty() { fixed (byte* pbData = data)
            return AddProperty(ref key, (uint)type, pbData, (uint)data.Length); }

    HRESULT AddRegistryEntry() { fixed (byte* pbData = data)
            return AddRegistryEntry(entryName, subkeyPath, regType, pbData, (uint)data.Length); }

    HRESULT AddRegistryEntry() { fixed (byte* pbData = data)
            return AddRegistryEntry(entryName, subkeyPath, regType, pbData, (uint)data.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IMFVIRTUALCAMERA_H

} // namespace Vortice

#endif // VORTICE_MEDIAFOUNDATION_IMFVIRTUALCAMERA_H
