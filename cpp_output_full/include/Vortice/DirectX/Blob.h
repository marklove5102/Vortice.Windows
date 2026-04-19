// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_BLOB_H
#define VORTICE_DIRECTX_BLOB_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_BLOB_H
#define VORTICE_VORTICE_BLOB_H

#include <cstdint>

namespace Vortice {

class Blob
{
public:
    ~Blob() = default;

    std::string AsString() { return Marshal.PtrToStringAnsi(BufferPointer)!; }

    std::span<const uint8_t> AsSpan() { nuint bufferSize = GetBufferSize();
        return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize); }

    std::span<const uint8_t> AsMemory() { nuint bufferSize = GetBufferSize();
        return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize).ToArray(); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_BLOB_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_BLOB_H
