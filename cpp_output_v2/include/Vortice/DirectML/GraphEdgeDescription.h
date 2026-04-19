// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_GRAPHEDGEDESCRIPTION_H
#define VORTICE_DIRECTML_GRAPHEDGEDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GRAPHEDGEDESCRIPTION_H
#define VORTICE_VORTICE_GRAPHEDGEDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct GraphEdgeDescription
{
public:
    constexpr GraphEdgeDescription(IGraphEdgeDescription description)
    Description = description;
    GraphEdgeType Type;
    void* Description;

    IGraphEdgeDescription Description{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GRAPHEDGEDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    GraphEdgeType Type;
    void* Description;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_GRAPHEDGEDESCRIPTION_H
