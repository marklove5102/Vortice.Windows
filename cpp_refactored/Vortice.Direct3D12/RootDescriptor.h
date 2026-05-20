// Copyright (c) Contributors.

#ifndef VORTICE_ROOTDESCRIPTOR_H
#define VORTICE_ROOTDESCRIPTOR_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        struct RootDescriptor
        {
                                public RootDescriptor(uint32_t shaderRegister, uint32_t registerSpace)
        {
                ShaderRegister = shaderRegister;
                RegisterSpace = registerSpace;
            }
        }


    }
}

#endif // VORTICE_ROOTDESCRIPTOR_H