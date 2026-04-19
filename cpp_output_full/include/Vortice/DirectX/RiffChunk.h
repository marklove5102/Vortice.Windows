// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_RIFFCHUNK_H
#define VORTICE_DIRECTX_RIFFCHUNK_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RIFFCHUNK_H
#define VORTICE_VORTICE_RIFFCHUNK_H

#include <cstdint>

namespace Vortice {

class RiffChunk
{
public:
    constexpr RiffChunk(Stream stream, FourCC type, uint32_t size, uint32_t dataPosition, bool false, bool false)
    Stream = stream;
        Type = type;
        Size = size;
        DataPosition = dataPosition;
        IsList = isList;
        IsHeader = isHeader;
    ~RiffChunk() = default;

    Stream Stream{};
    FourCC Type{};
    uint32_t Size{};
    uint32_t DataPosition{};
    bool IsList{};
    bool IsHeader{};

    std::span<uint8_t> GetData() { Span<byte> data = new byte[Size];
        Stream.Position = DataPosition;
        Stream.ReadExactly(data);
        return data; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_RIFFCHUNK_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_RIFFCHUNK_H
