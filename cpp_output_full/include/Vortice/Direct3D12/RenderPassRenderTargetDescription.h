// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERPASSRENDERTARGETDESCRIPTION_H
#define VORTICE_DIRECT3D12_RENDERPASSRENDERTARGETDESCRIPTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERPASSRENDERTARGETDESCRIPTION_H
#define VORTICE_VORTICE_RENDERPASSRENDERTARGETDESCRIPTION_H

#include <cstdint>

namespace Vortice {

struct RenderPassRenderTargetDescription
{
public:
    constexpr RenderPassRenderTargetDescription(CpuDescriptorHandle cpuDescriptor, RenderPassBeginningAccess beginningAccess, RenderPassEndingAccess endingAccess)
    CpuDescriptor = cpuDescriptor;
        BeginningAccess = beginningAccess;
        EndingAccess = endingAccess;
    CpuDescriptorHandle CpuDescriptor;
    RenderPassBeginningAccess BeginningAccess;


private:
    struct __Native_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERPASSRENDERTARGETDESCRIPTION_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    CpuDescriptorHandle CpuDescriptor;
    RenderPassBeginningAccess BeginningAccess;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERPASSRENDERTARGETDESCRIPTION_H
