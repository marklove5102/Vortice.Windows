// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCUTILS_H
#define VORTICE_DXC_IDXCUTILS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCUTILS_H
#define VORTICE_VORTICE_IDXCUTILS_H

#include <cstdint>

namespace Vortice {

class IDxcUtils
{
public:
    ~IDxcUtils() = default;

    IDxcIncludeHandler CreateDefaultIncludeHandler() { CreateDefaultIncludeHandler(out IDxcIncludeHandler handler).CheckError();
        return handler; }

    IDxcCompilerArgs BuildArguments() { BuildArguments(sourceName, entryPoint, targetProfile, arguments, defines, out IDxcCompilerArgs? args).CheckError();
        return args!; }

    IDxcCompilerArgs BuildArguments() { BuildArguments(sourceName, entryPoint, targetProfile, arguments, argumentsCount, defines, defineCount, out IDxcCompilerArgs? args).CheckError();
        return args!; }

    IDxcBlobEncoding CreateBlob() { CreateBlob(data, size, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlob CreateBlobFromBlob() { CreateBlobFromBlob(blob, offset, length, out IDxcBlob result).CheckError();
        return result; }

    IDxcBlobEncoding CreateBlobFromPinned() { CreateBlobFromPinned(data, size, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlobUtf8 GetBlobAsUtf8() { GetBlobAsUtf8(blob, out IDxcBlobUtf8 result).CheckError();
        return result; }

    IDxcBlobWide GetBlobAsWide() { GetBlobAsWide(blob, out IDxcBlobWide result).CheckError();
        return result; }

    IDxcBlobWide GetBlobAsUtf16() { GetBlobAsWide(blob, out IDxcBlobWide result).CheckError();
        return result; }

    IDxcBlob GetPDBContents() { GetPDBContents(pdbBlob, out hash, out IDxcBlob result).CheckError();
        return result; }

    IDxcBlobEncoding LoadFile() { LoadFile(fileName, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlobEncoding MoveToBlob() { MoveToBlob(data, malloc, size, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCUTILS_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCUTILS_H
