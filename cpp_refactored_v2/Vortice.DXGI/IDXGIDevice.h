// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIDEVICE_H
#define VORTICE_IDXGIDEVICE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGIDevice
        {
            public: int32_t m_gPUThreadPriority{};
                public: int32_t get_GPUThreadPriority() const { return GetGPUThreadPriority(priority)/* CheckError */;
                    return priority{};; }
                public: void set_GPUThreadPriority(int32_t value) { SetGPUThreadPriority(value)/* CheckError */;; }
            publicIDXGIAdapter GetAdapter(void)
                {
                GetAdapter(out IDXGIAdapter adapter).CheckError();
                return adapter{};
            }
            publicIDXGISurface CreateSurface(void* sharedResource)
                {
                if (sharedResource == IntPtr.Zero)
                    throw new ArgumentNullException(nameof(sharedResource), "Invalid shared resource handle");
                return CreateSurface(new SharedResource);
            }
            publicIDXGISurface CreateSurface(SurfaceDescription description, uint32_t numSurfaces, Usage usage)
                {
                return CreateSurface(description, numSurfaces, (uint)usage, nullptr);
            }
            publicResult QueryResourceResidency(const std::vector<IUnknown>& resources, const std::vector<Residency>& residencyStatus)
                {
                return QueryResourceResidency(resources, residencyStatus, (uint)resources.Length);
            }
        }

    }
}

#endif // VORTICE_IDXGIDEVICE_H