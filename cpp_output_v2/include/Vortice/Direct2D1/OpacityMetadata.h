// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_OPACITYMETADATA_H
#define VORTICE_DIRECT2D1_OPACITYMETADATA_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_OPACITYMETADATA_H
#define VORTICE_VORTICE_OPACITYMETADATA_H

#include <cstdint>

namespace Vortice {

class OpacityMetadata : public ID2D1Effect
{
public:
    constexpr OpacityMetadata(ID2D1DeviceContext context)
    {}

    constexpr OpacityMetadata(ID2D1EffectContext context)
    {}

    ~OpacityMetadata() = default;

    Vector4 get_InputOpaqueRectangle() const { GetVector4Value((int)OpacityMetadataProperties.InputOpaqueRectangle) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_OPACITYMETADATA_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_OPACITYMETADATA_H
