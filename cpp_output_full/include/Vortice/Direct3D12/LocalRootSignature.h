// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_LOCALROOTSIGNATURE_H
#define VORTICE_DIRECT3D12_LOCALROOTSIGNATURE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_LOCALROOTSIGNATURE_H
#define VORTICE_VORTICE_LOCALROOTSIGNATURE_H

#include <cstdint>

namespace Vortice {

struct LocalRootSignature : public IStateSubObjectDescription, public IStateSubObjectDescriptionMarshal
{
public:
    constexpr LocalRootSignature(ID3D12RootSignature rootSignature)
    RootSignature = rootSignature;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_LOCALROOTSIGNATURE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_LOCALROOTSIGNATURE_H
