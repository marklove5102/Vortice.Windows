// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIADAPTER_H
#define VORTICE_DXGI_IDXGIADAPTER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIADAPTER_H
#define VORTICE_VORTICE_IDXGIADAPTER_H

#include <cstdint>

namespace Vortice {

class IDXGIAdapter
{
public:
    ~IDXGIAdapter() = default;

    bool CheckInterfaceSupport() { return CheckInterfaceSupport(type.GUID, out userModeDriverVersion).Success; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIADAPTER_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIADAPTER_H
