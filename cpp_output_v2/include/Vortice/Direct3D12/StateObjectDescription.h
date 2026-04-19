// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_STATEOBJECTDESCRIPTION_H
#define VORTICE_DIRECT3D12_STATEOBJECTDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STATEOBJECTDESCRIPTION_H
#define VORTICE_VORTICE_STATEOBJECTDESCRIPTION_H

#include <cstdint>

namespace Vortice {

class StateObjectDescription
{
public:
    constexpr StateObjectDescription(StateObjectType type, std::initializer_list<std::vector<StateSubObject>> subObjects)
    Type = type;
        SubObjects = subObjects;
    ~StateObjectDescription() = default;

    StateObjectType Type;
    int32_t NumSubobjects;

    StateObjectType Type{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_STATEOBJECTDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    StateObjectType Type;
    int32_t NumSubobjects;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_STATEOBJECTDESCRIPTION_H
