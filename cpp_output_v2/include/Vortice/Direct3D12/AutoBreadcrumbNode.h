// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_AUTOBREADCRUMBNODE_H
#define VORTICE_DIRECT3D12_AUTOBREADCRUMBNODE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_AUTOBREADCRUMBNODE_H
#define VORTICE_VORTICE_AUTOBREADCRUMBNODE_H

#include <cstdint>

namespace Vortice {

class AutoBreadcrumbNode
{
public:
    ~AutoBreadcrumbNode() = default;

    void* pCommandListDebugNameA;
    void* pCommandListDebugNameW;
    void* pCommandQueueDebugNameA;
    void* pCommandQueueDebugNameW;
    void* pCommandList;
    void* pCommandQueue;
    int32_t BreadcrumbCount;

    int32_t BreadcrumbCount{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_AUTOBREADCRUMBNODE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* pCommandListDebugNameA;
    void* pCommandListDebugNameW;
    void* pCommandQueueDebugNameA;
    void* pCommandQueueDebugNameW;
    void* pCommandList;
    void* pCommandQueue;
    int32_t BreadcrumbCount;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_AUTOBREADCRUMBNODE_H
