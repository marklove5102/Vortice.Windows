// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_GRAPHDESCRIPTION_H
#define VORTICE_DIRECTML_GRAPHDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GRAPHDESCRIPTION_H
#define VORTICE_VORTICE_GRAPHDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct GraphDescription
{
public:
    int32_t InputCount;
    int32_t OutputCount;
    int32_t NodeCount;
    void* Nodes;
    int32_t InputEdgeCount;
    void* InputEdges;
    int32_t OutputEdgeCount;
    void* OutputEdges;
    int32_t IntermediateEdgeCount;
    void* IntermediateEdges;

    int32_t InputCount{};
    int32_t OutputCount{};


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_GRAPHDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int32_t InputCount;
    int32_t OutputCount;
    int32_t NodeCount;
    void* Nodes;
    int32_t InputEdgeCount;
    void* InputEdges;
    int32_t OutputEdgeCount;
    void* OutputEdges;
    int32_t IntermediateEdgeCount;
    void* IntermediateEdges;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_GRAPHDESCRIPTION_H
