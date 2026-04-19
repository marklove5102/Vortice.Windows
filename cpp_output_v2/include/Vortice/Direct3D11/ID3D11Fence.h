// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11FENCE_H
#define VORTICE_DIRECT3D11_ID3D11FENCE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11FENCE_H
#define VORTICE_VORTICE_ID3D11FENCE_H

#include <cstdint>

namespace Vortice {

class ID3D11Fence
{
public:
    ~ID3D11Fence() = default;

    void* CreateSharedHandle() { return CreateSharedHandle(attributes, GENERIC_ALL, name); }

    void SetEventOnCompletion() { SetEventOnCompletion(value, waitHandle.SafeWaitHandle.DangerousGetHandle()); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11FENCE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11FENCE_H
