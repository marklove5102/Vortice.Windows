// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_SHADERCOMPONENTMAPPING_H
#define VORTICE_DIRECT3D12_SHADERCOMPONENTMAPPING_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SHADERCOMPONENTMAPPING_H
#define VORTICE_VORTICE_SHADERCOMPONENTMAPPING_H

#include <cstdint>

namespace Vortice {

class ShaderComponentMapping
{
public:
    ~ShaderComponentMapping() = default;

    static const uint32_t Default{Encode(ShaderComponentMappingSource.FromMemoryComponent0,
                                                ShaderComponentMappingSource.FromMemoryComponent1,
                                                ShaderComponentMappingSource.FromMemoryComponent2,
                                                ShaderComponentMappingSource.FromMemoryComponent3)};

    static uint32_t Encode() { return (((((uint)source0) & Mask) |
               ((((uint)source1) & Mask) << Shift) |
               ((((uint)source2) & Mask) << (Shift * 2)) |
               ((((uint)source3) & Mask) << (Shift * 3)) |
               AlwaysSetBitAvoidingZeromemMistakes)); }

    static void Decode() { source0 = Decode(0, mapping);
        source1 = Decode(1, mapping);
        source2 = Decode(2, mapping);
        source3 = Decode(3, mapping); }

    static ShaderComponentMappingSource Decode() { return (ShaderComponentMappingSource)(mapping >> (Shift * componentToExtract) & Mask); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_SHADERCOMPONENTMAPPING_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_SHADERCOMPONENTMAPPING_H
