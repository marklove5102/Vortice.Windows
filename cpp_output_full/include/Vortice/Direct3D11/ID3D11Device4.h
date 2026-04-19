// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11DEVICE4_H
#define VORTICE_DIRECT3D11_ID3D11DEVICE4_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11DEVICE4_H
#define VORTICE_VORTICE_ID3D11DEVICE4_H

#include <cstdint>

namespace Vortice {

class ID3D11Device4
{
public:
    ~ID3D11Device4() = default;

    int32_t RegisterDeviceRemovedEvent() { return RegisterDeviceRemovedEvent(waitHandle.SafeWaitHandle.DangerousGetHandle()); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11DEVICE4_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11DEVICE4_H
