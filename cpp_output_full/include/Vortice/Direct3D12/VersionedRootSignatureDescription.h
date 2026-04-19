// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_VERSIONEDROOTSIGNATUREDESCRIPTION_H
#define VORTICE_DIRECT3D12_VERSIONEDROOTSIGNATUREDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VERSIONEDROOTSIGNATUREDESCRIPTION_H
#define VORTICE_VORTICE_VERSIONEDROOTSIGNATUREDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class VersionedRootSignatureDescription
{
public:
    constexpr VersionedRootSignatureDescription()
    {}

    constexpr VersionedRootSignatureDescription(RootSignatureDescription description)
    Version = RootSignatureVersion.Version10;
        Description_1_0 = description;
    constexpr VersionedRootSignatureDescription(RootSignatureDescription1 description)
    Version = RootSignatureVersion.Version11;
        Description_1_1 = description;
    constexpr VersionedRootSignatureDescription(RootSignatureDescription2 description)
    Version = RootSignatureVersion.Version12;
        Description_1_2 = description;
    ~VersionedRootSignatureDescription() = default;

    RootSignatureVersion Version;
    Union Union;

    RootSignatureVersion Version{};


private:
    struct __Native_value{};
    struct Union_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_VERSIONEDROOTSIGNATUREDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    RootSignatureVersion Version;
    Union Union;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_UNION_H
#define VORTICE_VORTICE_UNION_H

#include <cstdint>

namespace Vortice {

struct Union
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_UNION_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_VERSIONEDROOTSIGNATUREDESCRIPTION_H
