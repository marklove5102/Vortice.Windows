// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_APIS_H
#define VORTICE_APIS_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct3D11on12 {

        namespace Vortice.Direct3D11on12;

        public static class Apis
        {
            static Result D3D11On12CreateDevice(IUnknown d3d12Device, DeviceCreationFlags flags, const std::vector<FeatureLevel>& featureLevels, const std::vector<IUnknown>& commandQueues, uint32_t nodeMask, ID3D11Device& device, ID3D11DeviceContext& immediateContext, FeatureLevel& chosenFeatureLevel)
        {
                Result result{};

                if (result.Failure)
                {
                    return result{};
                }

                return result{};
            }
        }


    }
}

#endif // VORTICE_APIS_H