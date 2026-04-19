// Copyright (c) Contributors.

#ifndef VORTICE_SHADERCOMPONENTMAPPING_H
#define VORTICE_SHADERCOMPONENTMAPPING_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        public static class ShaderComponentMapping
        {
                    public: static const uint32_t Default{};

                    static uint32_t Encode(ShaderComponentMappingSource source0, ShaderComponentMappingSource source1, ShaderComponentMappingSource source2, ShaderComponentMappingSource source3)
        {
                return (((((uint)source0) & Mask) |
                       ((((uint)source1) & Mask) << Shift) |
                       ((((uint)source2) & Mask) << (Shift * 2)) |
                       ((((uint)source3) & Mask) << (Shift * 3)) |
                       AlwaysSetBitAvoidingZeromemMistakes));
            }

                    static void Decode(uint32_t mapping, ShaderComponentMappingSource& source0, ShaderComponentMappingSource& source1, ShaderComponentMappingSource& source2, ShaderComponentMappingSource& source3)
        {
                source0 = Decode(0, mapping);
                source1 = Decode(1, mapping);
                source2 = Decode(2, mapping);
                source3 = Decode(3, mapping);
            }

                    static ShaderComponentMappingSource Decode(int32_t componentToExtract, uint32_t mapping)
        {
                return (ShaderComponentMappingSource)(mapping >> (Shift * componentToExtract) & Mask);
            }
        }


    }
}

#endif // VORTICE_SHADERCOMPONENTMAPPING_H