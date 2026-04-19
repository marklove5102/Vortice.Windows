// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H
#define VORTICE_DIRECT3D12_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H
#define VORTICE_VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H

#include <cstdint>

namespace Vortice {

class RenderPassEndingAccessResolveParameters
{
public:
    ~RenderPassEndingAccessResolveParameters() = default;

    void* pSrcResource;
    void* pDstResource;
    int32_t SubresourceCount;
    Format Format;
    ResolveMode ResolveMode;
    RawBool PreserveResolveSource;

    int32_t SubresourceCount{};
    RenderPassEndingAccessResolveSubresourceParameters get_SubresourceParameters() const { _subresourceParameters }
    Format Format{};
    ResolveMode ResolveMode{};
    bool PreserveResolveSource{};


private:
    RenderPassEndingAccessResolveSubresourceParameters _subresourceParameters;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* pSrcResource;
    void* pDstResource;
    int32_t SubresourceCount;
    Format Format;
    ResolveMode ResolveMode;
    RawBool PreserveResolveSource;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_RENDERPASSENDINGACCESSRESOLVEPARAMETERS_H
