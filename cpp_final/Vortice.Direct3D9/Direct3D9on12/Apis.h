// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_APIS_H
#define VORTICE_APIS_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {
namespace Direct3D9on12 {

        namespace Vortice.Direct3D9on12;

        class Apis
        {
            public: const uint32_t MAX_D3D9ON12_QUEUES{};
            public: const uint32_t MaxD3D9On12Queues{};

            static IDirect3D9 Direct3DCreate9On12(const std::vector<D3D9On12Arguments>& overrides)
        {
                D3D9On12Arguments.__Native* overrideList = stackalloc D3D9On12Arguments.__Native;
                for (int32_t i{}; i < overrides.Length; i++)
                {
                    overrides.__MarshalTo(ref overrideList);
                }

                return Direct3DCreate9On12(Direct3D9.D3D9.SdkVersion, overrideList, (uint)overrides.Length);
            }

            static IDirect3D9Ex Direct3DCreate9On12Ex(const std::vector<D3D9On12Arguments>& overrides)
        {
                D3D9On12Arguments.__Native* overrideList = stackalloc D3D9On12Arguments.__Native;
                for (int32_t i{}; i < overrides.Length; i++)
                {
                    overrides.__MarshalTo(ref overrideList);
                }

                Direct3DCreate9On12Ex(Direct3D9.D3D9.SdkVersion, overrideList, (uint)overrides.Length, out IDirect3D9Ex outputInterface).CheckError();
                return outputInterface{};
            }

            static Result Direct3DCreate9On12Ex(const std::vector<D3D9On12Arguments>& overrides, std::optional<IDirect3D9Ex>& outputInterface)
        {
                D3D9On12Arguments.__Native* overrideList = stackalloc D3D9On12Arguments.__Native;
                for (int32_t i{}; i < overrides.Length; i++)
                {
                    overrides.__MarshalTo(ref overrideList);
                }

                return Direct3DCreate9On12Ex(Direct3D9.D3D9.SdkVersion, overrideList, (uint)overrides.Length, out outputInterface);
            }
        }


    }
}

#endif // VORTICE_APIS_H