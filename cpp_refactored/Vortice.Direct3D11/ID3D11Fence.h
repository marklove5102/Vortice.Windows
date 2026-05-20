// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11FENCE_H
#define VORTICE_ID3D11FENCE_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        class ID3D11Fence
        {
            private: const int32_t GENERIC_ALL{};

            void* CreateSharedHandle(const std::optional<SecurityAttributes>& attributes, const std::string& name)
        {
                return CreateSharedHandle(attributes param, GENERIC_ALL param, name param) = 0;
            }

            void SetEventOnCompletion(uint64_t value, WaitHandle waitHandle)
        {
                SetEventOnCompletion(value, waitHandle.SafeWaitHandle.DangerousGetHandle());
            }
        }


    }
}

#endif // VORTICE_ID3D11FENCE_H