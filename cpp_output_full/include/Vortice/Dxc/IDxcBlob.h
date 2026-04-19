// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCBLOB_H
#define VORTICE_DXC_IDXCBLOB_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCBLOB_H
#define VORTICE_VORTICE_IDXCBLOB_H

#include <cstdint>

namespace Vortice {

class IDxcBlob
{
public:
    ~IDxcBlob() = default;

    std::span<const uint8_t> AsSpan() { nuint bufferSize = GetBufferSize();
        return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize); }

    std::span<const uint8_t> AsMemory() { nuint bufferSize = GetBufferSize();
        return new ReadOnlySpan<byte>(GetBufferPointer().ToPointer(), (int)bufferSize).ToArray(); }


private:
    uintptr_t get_BufferSize() const { return BufferSize_value; }
    uintptr_t BufferSize_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCBLOB_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCBLOB_H
