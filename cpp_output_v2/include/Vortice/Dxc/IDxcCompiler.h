// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCCOMPILER_H
#define VORTICE_DXC_IDXCCOMPILER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCCOMPILER_H
#define VORTICE_VORTICE_IDXCCOMPILER_H

#include <cstdint>

namespace Vortice {

class IDxcCompiler
{
public:
    ~IDxcCompiler() = default;

    IDxcBlobEncoding Disassemble() { Disassemble(source, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcOperationResult Compile() { return Compile(
            source,
            sourceName,
            entryPoint,
            targetProfile,
            arguments,
            (uint)(arguments?.(Length ? Length : 0)),
            defines,
            includeHandler); }

    HRESULT Compile() { return Compile(
            source,
            sourceName,
            entryPoint,
            targetProfile,
            arguments,
            (uint)(arguments?.(Length ? Length : 0)),
            defines,
            includeHandler,
            out result); }

    IDxcOperationResult Preprocess() { return Preprocess(
            source,
            sourceName,
            arguments,
            (uint)(arguments?.(Length ? Length : 0)),
            defines,
            includeHandler); }

    HRESULT Preprocess() { return Preprocess(
            source,
            sourceName,
            arguments,
            (uint)(arguments?.(Length ? Length : 0)),
            defines,
            includeHandler,
            out result); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCCOMPILER_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCCOMPILER_H
