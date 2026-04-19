// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_SOUNDSTREAM_H
#define VORTICE_DIRECTX_SOUNDSTREAM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_SOUNDSTREAM_H
#define VORTICE_VORTICE_SOUNDSTREAM_H

#include <cstdint>

namespace Vortice {

class SoundStream : public std::iostream
{
public:
    constexpr SoundStream(Stream stream)
    if (stream == nullptr)
        {
            throw ArgumentNullException("stream");
        }

        _input = stream;
        Initialize(stream);
    ~SoundStream() = default;

    void Flush() override { throw NotSupportedException(); }

    void SetLength() override { throw NotSupportedException(); }

    int32_t Read() override { return _input.Read(buffer, offset, Math.Min(count, (int)Math.Max(_startPositionOfData + _length - _input.Position, 0))); }

    void Write() override { throw NotSupportedException(); }


private:
    const Stream _input;
    int64_t _startPositionOfData;
    int64_t _length;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_SOUNDSTREAM_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_SOUNDSTREAM_H
