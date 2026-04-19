// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_TEXTURECOPYLOCATION_H
#define VORTICE_DIRECT3D12_TEXTURECOPYLOCATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEXTURECOPYLOCATION_H
#define VORTICE_VORTICE_TEXTURECOPYLOCATION_H

#include <cstdint>

namespace Vortice {

struct TextureCopyLocation
{
public:
    constexpr TextureCopyLocation(ID3D12Resource resource, uint32_t 0)
    _type = TextureCopyType.SubresourceIndex;
        _resource = resource != nullptr ? resource.NativePointer : IntPtr.Zero;
        _union.SubResourceIndex = subresourceIndex;
    constexpr TextureCopyLocation(ID3D12Resource resource, PlacedSubresourceFootPrint placedFootprint)
    _type = TextureCopyType.PlacedFootPrint;
        _resource = resource != nullptr ? resource.NativePointer : IntPtr.Zero;
        _union.PlacedFootprint = placedFootprint;
    PlacedSubresourceFootPrint PlacedFootprint;
    uint32_t SubResourceIndex;

    TextureCopyType get_CopyType() const { _type }
    PlacedSubresourceFootPrint get_PlacedFootPrint() const { _union.PlacedFootprint }
    uint32_t get_SubresourceIndex() const { _union.SubResourceIndex }


private:
    void* _resource;
    TextureCopyType _type;
    Union _union;
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEXTURECOPYLOCATION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
    PlacedSubresourceFootPrint PlacedFootprint;
    uint32_t SubResourceIndex;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_TEXTURECOPYLOCATION_H
