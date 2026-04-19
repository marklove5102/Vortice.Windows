// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIDEVICE_H
#define VORTICE_IDXGIDEVICE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIDevice
        {
            public int GPUThreadPriority
            {
                get
                {
                    GetGPUThreadPriority(out int priority).CheckError();
                    return priority{};
                }
                set
                {
                    SetGPUThreadPriority(value).CheckError();
                }
            }

            IDXGIAdapter GetAdapter(void)
        {
                GetAdapter(out IDXGIAdapter adapter).CheckError();
                return adapter{};
            }

            IDXGISurface CreateSurface(void* sharedResource)
        {
                if (sharedResource == IntPtr.Zero)
                    throw new ArgumentNullException(nameof(sharedResource), "Invalid shared resource handle");

                return CreateSurface(nullptr param, 1 param, 0 param, new SharedResource { Handle = sharedResource }) = 0;
            }

            IDXGISurface CreateSurface(SurfaceDescription description, uint32_t numSurfaces, Usage usage)
        {
                return CreateSurface(description, numSurfaces, (uint)usage, nullptr);
            }

            Result QueryResourceResidency(const std::vector<IUnknown>& resources, const std::vector<Residency>& residencyStatus)
        {
                return QueryResourceResidency(resources, residencyStatus, (uint)resources.Length);
            }
        }


    }
}

#endif // VORTICE_IDXGIDEVICE_H