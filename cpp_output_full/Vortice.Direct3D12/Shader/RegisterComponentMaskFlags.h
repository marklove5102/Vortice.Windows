#ifndef VORTICE_REGISTERCOMPONENTMASKFLAGS_H
#define VORTICE_REGISTERCOMPONENTMASKFLAGS_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12 {
        namespace Shader; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct3D12.Shader;

            enum class RegisterComponentMaskFlags : uint8_t
            {
                None = 0,
                ComponentX = 1,
                ComponentY = 2,
                ComponentZ = 4,
                ComponentW = 8,
                All = ComponentX | ComponentY | ComponentZ | ComponentW
            };


        }
    }
}

#endif // VORTICE_REGISTERCOMPONENTMASKFLAGS_H