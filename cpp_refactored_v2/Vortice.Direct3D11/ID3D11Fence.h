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
        publicclass ID3D11Fence
        {
            private: const int32_t GENERIC_ALL{};
            publicvoid* CreateSharedHandle(const std::optional<SecurityAttributes>& attributes, const std::string& name)
                {
                return CreateSharedHandle(void);
            }
            publicvoid SetEventOnCompletion(uint64_t value, WaitHandle waitHandle)
                {
                SetEventOnCompletion(value, waitHandle.SafeWaitHandle.DangerousGetHandle());
            }
        }

    }
}

#endif // VORTICE_ID3D11FENCE_H