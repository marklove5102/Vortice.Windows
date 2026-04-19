// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_EXISTINGCOLLECTIONDESCRIPTION_H
#define VORTICE_DIRECT3D12_EXISTINGCOLLECTIONDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_EXISTINGCOLLECTIONDESCRIPTION_H
#define VORTICE_VORTICE_EXISTINGCOLLECTIONDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class ExistingCollectionDescription : public IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
{
public:
    constexpr ExistingCollectionDescription(ID3D12StateObject existingCollection, std::initializer_list<std::vector<ExportDescription>> exports)
    ExistingCollection = existingCollection;
        Exports = exports;
    ~ExistingCollectionDescription() = default;

    void* pExistingCollection;
    int32_t NumExports;

    ID3D12StateObject ExistingCollection{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_EXISTINGCOLLECTIONDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* pExistingCollection;
    int32_t NumExports;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_EXISTINGCOLLECTIONDESCRIPTION_H
