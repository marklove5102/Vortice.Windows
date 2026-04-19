// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCLIBRARY_H
#define VORTICE_DXC_IDXCLIBRARY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCLIBRARY_H
#define VORTICE_VORTICE_IDXCLIBRARY_H

#include <cstdint>

namespace Vortice {

class IDxcLibrary
{
public:
    ~IDxcLibrary() = default;

    IDxcBlob CreateBlobFromBlob() { CreateBlobFromBlob(blob, offset, length, out IDxcBlob result).CheckError();
        return result; }

    IDxcBlobEncoding CreateBlobFromFile() { CreateBlobFromFile(fileName, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlobEncoding CreateBlobWithEncodingFromPinned() { CreateBlobWithEncodingFromPinned(text, size, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlobEncoding CreateBlobWithEncodingOnHeapCopy() { CreateBlobWithEncodingOnHeapCopy(text, size, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlobEncoding CreateBlobWithEncodingOnMalloc() { CreateBlobWithEncodingOnMalloc(text, malloc, size, codePage, out IDxcBlobEncoding result).CheckError();
        return result; }

    IStream CreateStreamFromBlobReadOnly() { CreateStreamFromBlobReadOnly(blob, out IStream result).CheckError();
        return result; }

    IDxcIncludeHandler CreateIncludeHandler() { CreateIncludeHandler(out IDxcIncludeHandler result).CheckError();
        return result; }

    IDxcBlobEncoding GetBlobAsUtf8() { GetBlobAsUtf8(blob, out IDxcBlobEncoding result).CheckError();
        return result; }

    IDxcBlobEncoding GetBlobAsWide() { GetBlobAsWide(blob, out IDxcBlobEncoding result).CheckError();
        return result; }

    HRESULT GetBlobAsUtf16() { return GetBlobAsWide(blob, out blobEncoding); }

    IDxcBlobEncoding GetBlobAsUtf16() { GetBlobAsWide(blob, out IDxcBlobEncoding result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCLIBRARY_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCLIBRARY_H
