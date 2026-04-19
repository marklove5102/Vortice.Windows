// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIDEVICE_H
#define VORTICE_DXGI_IDXGIDEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIDEVICE_H
#define VORTICE_VORTICE_IDXGIDEVICE_H

#include <cstdint>

namespace Vortice {

class IDXGIDevice
{
public:
    ~IDXGIDevice() = default;

    int32_t get_GPUThreadPriority() const { GetGPUThreadPriority(out int priority).CheckError();
            return priority; }
    void set_GPUThreadPriority(int32_t value) { SetGPUThreadPriority(value).CheckError(); }

    IDXGIAdapter GetAdapter() { GetAdapter(out IDXGIAdapter adapter).CheckError();
        return adapter; }

    IDXGISurface CreateSurface() { return CreateSurface(description, numSurfaces, (uint)usage, nullptr); }

    HRESULT QueryResourceResidency() { return QueryResourceResidency(resources, residencyStatus, (uint)resources.Length); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIDEVICE_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIDEVICE_H
