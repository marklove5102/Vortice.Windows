// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_DATASTREAM_H
#define VORTICE_DIRECTX_DATASTREAM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TO_H
#define VORTICE_VORTICE_TO_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) to
{
public:
    virtual ~to() = default;

    virtual void Read(void* buffer, int32_t offset, int32_t count) = 0;
    virtual void Write(void* buffer, int32_t offset, int32_t count) = 0;
    virtual void WriteRange(void* source, int64_t count) = 0;
    virtual int32_t ReadByte() = 0;
    virtual int32_t Read(std::vector<uint8_t> buffer, int32_t offset, int32_t count) = 0;
    virtual void Write(std::vector<uint8_t> buffer, int32_t offset, int32_t count) = 0;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TO_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DATASTREAM_H
#define VORTICE_VORTICE_DATASTREAM_H

#include <cstdint>

namespace Vortice {

class DataStream : public std::iostream
{
public:
    constexpr DataStream(Blob buffer)
    Debug.Assert(buffer.GetBufferSize() > 0);

        _buffer = (byte*)buffer.GetBufferPointer();
        _size = buffer.GetBufferSize();
        CanRead = true;
        CanWrite = true;
        _blob = buffer;
    constexpr DataStream(int32_t sizeInBytes, bool canRead, bool canWrite)
    Debug.Assert(sizeInBytes > 0);

        _buffer = (byte*)MemoryHelpers.AllocateMemory((nuint)sizeInBytes);
        _size = sizeInBytes;
        _ownsBuffer = true;
        CanRead = canRead;
        CanWrite = canWrite;
    constexpr DataStream(void* userBuffer, int64_t sizeInBytes, bool canRead, bool canWrite)
    Debug.Assert(userBuffer != IntPtr.Zero);
        Debug.Assert(sizeInBytes > 0);

        _buffer = (byte*)userBuffer.ToPointer();
        _size = sizeInBytes;
        CanRead = canRead;
        CanWrite = canWrite;
    constexpr DataStream(void* dataPointer, int32_t sizeInBytes, bool canRead, bool canWrite, GCHandle handle)
    Debug.Assert(sizeInBytes > 0);
        _handle = handle;
        _buffer = (byte*)dataPointer;
        _size = sizeInBytes;
        CanRead = canRead;
        CanWrite = canWrite;
        _ownsBuffer = false;
    constexpr DataStream(void* buffer, int32_t sizeInBytes, bool canRead, bool canWrite, bool makeCopy)
    Debug.Assert(sizeInBytes > 0);

        if (makeCopy)
        {
            _buffer = (byte*)MemoryHelpers.AllocateMemory((nuint)sizeInBytes);
            Unsafe.CopyBlockUnaligned(_buffer, buffer, (uint)sizeInBytes);
        }
        else
        {
            _buffer = (byte*)buffer;
        }
        _size = sizeInBytes;
        CanRead = canRead;
        CanWrite = canWrite;
        _ownsBuffer = makeCopy;
    constexpr DataStream()
    Dispose(false);
    ~DataStream() = default;

    void* BasePointer{> (IntPtr)_buffer};
    void* PositionPointer{> (IntPtr)(_buffer + _position)};
    int64_t RemainingLength{> (_size - _position)};

    void Read() { Unsafe.CopyBlockUnaligned((byte*)buffer + offset, _buffer + _position, (uint)count);
        _position += count; }

    void Write() { Unsafe.CopyBlockUnaligned(_buffer + _position, (byte*)buffer + offset, (uint)count);
        _position += count; }

    void WriteRange() { if (!CanWrite)
            throw NotSupportedException();

        Debug.Assert(source != IntPtr.Zero);
        Debug.Assert(count > 0);
        Debug.Assert((_position + count) <= _size);

        Unsafe.CopyBlockUnaligned(_buffer + _position, source.ToPointer(), (uint)count);
        _position += count; }

    int32_t ReadByte() override { if (_position >= Length)
            return -1;

        return _buffer[_position++]; }

    int32_t Read() override { int minCount = (int)Math.Min(RemainingLength, count);
        return ReadRange(buffer, offset, minCount); }

    void Write() override { WriteRange(buffer, offset, count); }


private:
    GCHandle _handle;
    const bool _ownsBuffer;
    int64_t _position;
    const int64_t _size;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_DATASTREAM_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FROM_H
#define VORTICE_VORTICE_FROM_H

#include <cstdint>

namespace Vortice {

class from
{
public:
    ~from() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FROM_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_AND_H
#define VORTICE_VORTICE_AND_H

#include <cstdint>

namespace Vortice {

class and
{
public:
    ~and() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_AND_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USING_H
#define VORTICE_VORTICE_USING_H

#include <cstdint>

namespace Vortice {

class using
{
public:
    ~using() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_USING_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_USING_H
#define VORTICE_VORTICE_USING_H

#include <cstdint>

namespace Vortice {

class using
{
public:
    ~using() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_USING_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_DATASTREAM_H
