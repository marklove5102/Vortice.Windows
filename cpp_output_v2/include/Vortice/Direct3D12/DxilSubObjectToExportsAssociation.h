// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DXILSUBOBJECTTOEXPORTSASSOCIATION_H
#define VORTICE_DIRECT3D12_DXILSUBOBJECTTOEXPORTSASSOCIATION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXILSUBOBJECTTOEXPORTSASSOCIATION_H
#define VORTICE_VORTICE_DXILSUBOBJECTTOEXPORTSASSOCIATION_H

#include <cstdint>

namespace Vortice {

class DxilSubObjectToExportsAssociation : public IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
{
public:
    constexpr DxilSubObjectToExportsAssociation(std::string subObjectToAssociate, std::initializer_list<std::vector<std::string>> exports)
    SubObjectToAssociate = subObjectToAssociate;
        Exports = exports;
    ~DxilSubObjectToExportsAssociation() = default;

    void* pSubobjectToAssociate;
    int32_t NumExports;

    std::string SubObjectToAssociate{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXILSUBOBJECTTOEXPORTSASSOCIATION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* pSubobjectToAssociate;
    int32_t NumExports;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DXILSUBOBJECTTOEXPORTSASSOCIATION_H
