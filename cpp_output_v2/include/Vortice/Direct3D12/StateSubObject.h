// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_STATESUBOBJECT_H
#define VORTICE_DIRECT3D12_STATESUBOBJECT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STATESUBOBJECT_H
#define VORTICE_VORTICE_STATESUBOBJECT_H

#include <cstdint>

namespace Vortice {

class StateSubObject
{
public:
    constexpr StateSubObject(IStateSubObjectDescription description)
    Description = description;
    ~StateSubObject() = default;

    StateSubObjectType Type{> Description.SubObjectType};
    StateSubObjectType Type;
    void* pDesc;

    IStateSubObjectDescription Description{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_STATESUBOBJECT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    StateSubObjectType Type;
    void* pDesc;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_STATESUBOBJECT_H
