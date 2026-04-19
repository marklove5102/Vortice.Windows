// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIFACTORY6_H
#define VORTICE_IDXGIFACTORY6_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIFactory6
        {
            public Result EnumAdapterByGpuPreference<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, GpuPreference gpuPreference, out T? adapter)
                where T : IDXGIAdapter
            {
                Result result{};
                if (result.Success)
                {
                    adapter = MarshallingHelpers.FromPointer<T>(adapterPtr);
                    return result{};
                }

                adapter = nullptr;
                return result{};
            }

            public T EnumAdapterByGpuPreference<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(uint index, GpuPreference gpuPreference)
                where T : IDXGIAdapter
            {
                EnumAdapterByGpuPreference(index, gpuPreference, typeof(T).GUID, out IntPtr adapterPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(adapterPtr)!;
            }

                                int32_t GetAdapterByGpuPreference(GpuPreference gpuPreference)
        {
                int32_t count{};

                for (uint32_t adapterIndex{}; EnumAdapterByGpuPreference(adapterIndex, gpuPreference, out IDXGIAdapter1? adapter).Success; adapterIndex++)
                {
                    count++;
                    adapter!.Dispose();
                }

                return count{};
            }
        }


    }
}

#endif // VORTICE_IDXGIFACTORY6_H