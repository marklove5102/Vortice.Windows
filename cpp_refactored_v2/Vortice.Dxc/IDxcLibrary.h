// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCLIBRARY_H
#define VORTICE_IDXCLIBRARY_H

#include <cstdint>
#include <string>
#include <optional>

namespace Vortice {
namespace Dxc {

        namespace Vortice.Dxc;
        publicclass IDxcLibrary
        {
            publicIDxcBlob CreateBlobFromBlob(IDxcBlob blob, uint32_t offset, uint32_t length)
                {
                CreateBlobFromBlob(blob, offset, length, out IDxcBlob result).CheckError();
                return result{};
            }
            publicIDxcBlobEncoding CreateBlobFromFile(const std::string& fileName, const std::optional<uint32_t>& codePage)
                {
                CreateBlobFromFile(fileName, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            publicIDxcBlobEncoding CreateBlobWithEncodingFromPinned(void* text, uint32_t size, uint32_t codePage)
                {
                CreateBlobWithEncodingFromPinned(text, size, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            publicIDxcBlobEncoding CreateBlobWithEncodingOnHeapCopy(void* text, uint32_t size, uint32_t codePage)
                {
                CreateBlobWithEncodingOnHeapCopy(text, size, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            publicIDxcBlobEncoding CreateBlobWithEncodingOnMalloc(void* text, ComObject malloc, uint32_t size, uint32_t codePage)
                {
                CreateBlobWithEncodingOnMalloc(text, malloc, size, codePage, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            publicIStream CreateStreamFromBlobReadOnly(IDxcBlob blob)
                {
                CreateStreamFromBlobReadOnly(blob, out IStream result).CheckError();
                return result{};
            }
            publicIDxcIncludeHandler CreateIncludeHandler(void)
                {
                CreateIncludeHandler(out IDxcIncludeHandler result).CheckError();
                return result{};
            }
            publicIDxcBlobEncoding GetBlobAsUtf8(IDxcBlob blob)
                {
                GetBlobAsUtf8(blob, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            publicIDxcBlobEncoding GetBlobAsWide(IDxcBlob blob)
                {
                GetBlobAsWide(blob, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
            publicResult GetBlobAsUtf16(IDxcBlob blob, IDxcBlobEncoding& blobEncoding)
                {
                return GetBlobAsWide(void);
            }
            publicIDxcBlobEncoding GetBlobAsUtf16(IDxcBlob blob)
                {
                GetBlobAsWide(blob, out IDxcBlobEncoding result).CheckError();
                return result{};
            }
        }

    }
}

#endif // VORTICE_IDXCLIBRARY_H