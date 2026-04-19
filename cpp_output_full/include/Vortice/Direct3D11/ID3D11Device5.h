// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICE5_H
#define VORTICE_DIRECT3D11_ID3D11DEVICE5_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICE5_H
#define VORTICE_VORTICE_ID3D11DEVICE5_H

#include <cstdint>

namespace Vortice {

class ID3D11Device5
{
public:
    ~ID3D11Device5() = default;

    ID3D11Fence CreateFence() { CreateFence(initialValue, flags, typeid(ID3D11Fence).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D11Fence(nativePtr); }

    ID3D11Fence OpenSharedFence() { OpenSharedFence(fenceHandle, typeid(ID3D11Fence).GUID, out IntPtr nativePtr).CheckError();
        return new ID3D11Fence(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICE5_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICE5_H
