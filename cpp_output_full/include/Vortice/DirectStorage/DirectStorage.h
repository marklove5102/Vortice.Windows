// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSTORAGE_DIRECTSTORAGE_H
#define VORTICE_DIRECTSTORAGE_DIRECTSTORAGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTSTORAGE_H
#define VORTICE_VORTICE_DIRECTSTORAGE_H

#include <cstdint>

namespace Vortice {

class DirectStorage
{
public:
    ~DirectStorage() = default;

    static IDStorageCompressionCodec DStorageCreateCompressionCodec() { DStorageCreateCompressionCodec(format, numThreads, typeid(IDStorageCompressionCodec).GUID, out IntPtr nativePtr).CheckError();
        return new(nativePtr)!; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DIRECTSTORAGE_H

} // namespace Vortice

#endif // VORTICE_DIRECTSTORAGE_DIRECTSTORAGE_H
