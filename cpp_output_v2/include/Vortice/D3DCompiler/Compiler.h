// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3DCOMPILER_COMPILER_H
#define VORTICE_D3DCOMPILER_COMPILER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_COMPILER_H
#define VORTICE_VORTICE_COMPILER_H

#include <cstdint>

namespace Vortice {

class Compiler
{
public:
    ~Compiler() = default;

    static HRESULT Compile2() { return D3DCompile2(srcData, srcDataSize, sourceName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, secondaryDataFlags, secondaryData, secondaryDataSize, out code, out errorMsgs); }

    static HRESULT CompileFromFile() { return CompileFromFile(
            fileName,
            nullptr,
            nullptr,
            entryPoint,
            profile,
            ShaderFlags.None,
            EffectFlags.None,
            out blob,
            out errorBlob); }

    static HRESULT CompileFromFile() { return CompileFromFile(
            fileName,
            defines,
            nullptr,
            entryPoint,
            profile,
            ShaderFlags.None,
            EffectFlags.None,
            out blob,
            out errorBlob); }

    static HRESULT CompileFromFile() { return CompileFromFile(
            fileName,
            defines,
            include,
            entryPoint,
            profile,
            ShaderFlags.None,
            EffectFlags.None,
            out blob,
            out errorBlob); }

    static HRESULT CompileFromFile() { return CompileFromFile(
            fileName,
            defines,
            include,
            entryPoint,
            profile,
            shaderFlags,
            EffectFlags.None,
            out blob,
            out errorBlob); }

    static HRESULT CompileFromFile() { return D3DCompileFromFile(fileName, PrepareMacros(defines), include, entryPoint, target, flags1, flags2, out code, out errorMsgs); }

    static Blob CreateBlob() { CreateBlob(size, out Blob blob).CheckError();
        return blob; }

    static HRESULT GetInputSignatureBlob() { return GetInputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out signatureBlob); }

    static Blob GetInputSignatureBlob() { GetInputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out Blob signatureBlob).CheckError();
        return signatureBlob; }

    static HRESULT GetOutputSignatureBlob() { return GetOutputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out signatureBlob); }

    static Blob GetOutputSignatureBlob() { GetOutputSignatureBlob(srcData.BufferPointer, srcData.BufferSize, out Blob signatureBlob).CheckError();
        return signatureBlob; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_COMPILER_H

} // namespace Vortice

#endif // VORTICE_D3DCOMPILER_COMPILER_H
