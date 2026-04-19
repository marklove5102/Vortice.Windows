// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCCOMPILER2_H
#define VORTICE_DXC_IDXCCOMPILER2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCCOMPILER2_H
#define VORTICE_VORTICE_IDXCCOMPILER2_H

#include <cstdint>

namespace Vortice {

class IDxcCompiler2
{
public:
    ~IDxcCompiler2() = default;

    IDxcOperationResult CompileWithDebug() { return CompileWithDebug(
            source,
            sourceName,
            entryPoint,
            targetProfile,
            arguments,
            (uint)(arguments?.(Length ? Length : 0)),
            defines,
            includeHandler,
            out debugBlobName, out debugBlob); }

    HRESULT CompileWithDebug() { return CompileWithDebug(
            source,
            sourceName,
            entryPoint,
            targetProfile,
            arguments,
            (uint)(arguments?.(Length ? Length : 0)),
            defines,
            includeHandler,
            out result, out debugBlobName, out debugBlob); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCCOMPILER2_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCCOMPILER2_H
