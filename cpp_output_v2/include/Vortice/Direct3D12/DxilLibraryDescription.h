// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DXILLIBRARYDESCRIPTION_H
#define VORTICE_DIRECT3D12_DXILLIBRARYDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXILLIBRARYDESCRIPTION_H
#define VORTICE_VORTICE_DXILLIBRARYDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class DxilLibraryDescription : public IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
{
public:
    constexpr DxilLibraryDescription(std::span<const uint8_t> dxilLibrary, std::initializer_list<std::vector<ExportDescription>> exports)
    DxilLibrary = dxilLibrary;
        Exports = exports;
    ~DxilLibraryDescription() = default;

    int32_t NumExports;

    std::span<const uint8_t> DxilLibrary{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXILLIBRARYDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t NumExports;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DXILLIBRARYDESCRIPTION_H
