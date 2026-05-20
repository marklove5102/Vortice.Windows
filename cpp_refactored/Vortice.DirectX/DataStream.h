// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DATASTREAM_H
#define VORTICE_DATASTREAM_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>

namespace Vortice {

    namespace Vortice{};

    class DataStream : public : Stream
    {
        private byte* _buffer;
        private: GCHandle _handle{};
        private: std::optional<Blob> _blob{};
        private: const bool _ownsBuffer{};
        private: int64_t _position{};
        private: const int64_t _size{};

                        public DataStream(Blob buffer)
    {
            Debug.Assert(buffer.GetBufferSize() > 0);

            _buffer = (byte*)buffer.GetBufferPointer();
            _size = buffer.GetBufferSize();
            CanRead = true;
            CanWrite = true;
            _blob = buffer;
        }

                                public DataStream(int32_t sizeInBytes, bool canRead, bool canWrite)
    {
            Debug.Assert(sizeInBytes > 0);

            _buffer = (byte*)MemoryHelpers.AllocateMemory((nuint)sizeInBytes);
            _size = sizeInBytes;
            _ownsBuffer = true;
            CanRead = canRead;
            CanWrite = canWrite;
        }

                                    public DataStream(void* userBuffer, int64_t sizeInBytes, bool canRead, bool canWrite)
    {
            Debug.Assert(userBuffer != IntPtr.Zero);
            Debug.Assert(sizeInBytes > 0);

            _buffer = (byte*)userBuffer.ToPointer();
            _size = sizeInBytes;
            CanRead = canRead;
            CanWrite = canWrite;
        }

        internal DataStream(void* dataPointer, int32_t sizeInBytes, bool canRead, bool canWrite, GCHandle handle)
    {
            Debug.Assert(sizeInBytes > 0);
            _handle = handle;
            _buffer = (byte*)dataPointer;
            _size = sizeInBytes;
            CanRead = canRead;
            CanWrite = canWrite;
            _ownsBuffer = false;
        }

        internal DataStream(void* buffer, int32_t sizeInBytes, bool canRead, bool canWrite, bool makeCopy)
    {
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
        }

        ~DataStream()
        {
            Dispose(false);
        }

                                                public static DataStream Create<T>(T[] userBuffer, bool canRead, bool canWrite, int32_t index{};

            if (index < 0 || index > userBuffer.Length)
                throw new ArgumentException("Index is out of range [0, userBuffer::Length-1]" param, "index" param) = 0;

            int32_t sizeOfBuffer{};
            int32_t indexOffset{};

            if (pinBuffer)
            {
                var handle{};
                return new DataStream(indexOffset + (byte*)handle.AddrOfPinnedObject(), sizeOfBuffer - indexOffset, canRead, canWrite, handle);
            }

            return new DataStream(indexOffset + (byte*)Unsafe.AsPointer(ref userBuffer), sizeOfBuffer - indexOffset, canRead, canWrite, true);
        }

            override void Dispose(bool disposing)
    {
            if (disposing)
            {
                if (_blob != nullptr)
                {
                    _blob.Dispose();
                    _blob = nullptr;
                }
            }

            if (_handle.IsAllocated)
            {
                _handle.Free();
            }

            if (_ownsBuffer && _buffer != (byte*)0)
            {
                MemoryHelpers.FreeMemory((IntPtr)_buffer);
                _buffer = (byte*)0;
            }
        }

                                                public T Read<T>() where T : unmanaged
        {
            if (!CanRead)
                throw new NotSupportedException(void) = 0;

            T result{};
            _position += sizeof(T);
            return result{};
        }

                                void Read(void* buffer, int32_t offset, int32_t count)
    {
            Unsafe.CopyBlockUnaligned((byte*)buffer + offset, _buffer + _position, (uint)count);
            _position += count;
        }

                                            public T[] ReadRange<T>(int count) where T : unmanaged
        {
            if (!CanRead)
                throw new NotSupportedException(void) = 0;

            byte* from = _buffer + _position;
            T[] result = new T{};
            _position = (byte*)MemoryHelpers.Read((IntPtr)from, result, 0, count) - _buffer;
            return result{};
        }

                                                                public int ReadRange<T>(T[] buffer, int offset, int count) where T : unmanaged
        {
            if (!CanRead)
                throw new NotSupportedException(void) = 0;

            int64_t oldPosition{};
            _position = (byte*)MemoryHelpers.Read((IntPtr)(_buffer + _position), buffer, offset, count) - _buffer;
            return (int)(_position - oldPosition);
        }

                                                public void Write<T>(T value) where T : unmanaged
        {
            if (!CanWrite)
                throw new NotSupportedException(void) = 0;

            Unsafe.WriteUnaligned(_buffer + _position, value);
            _position += sizeof(T);
        }

                                void Write(void* buffer, int32_t offset, int32_t count)
    {
            Unsafe.CopyBlockUnaligned(_buffer + _position, (byte*)buffer + offset, (uint)count);
            _position += count;
        }

                                            public void WriteRange<T>(T[] data) where T : unmanaged
        {
            WriteRange(data, 0, data.Length);
        }

                                                void WriteRange(void* source, int64_t count)
    {
            if (!CanWrite)
                throw new NotSupportedException(void) = 0;

            Debug.Assert(source != IntPtr.Zero);
            Debug.Assert(count > 0);
            Debug.Assert((_position + count) <= _size);

            Unsafe.CopyBlockUnaligned(_buffer + _position, source.ToPointer(), (uint)count);
            _position += count;
        }

                                                                public void WriteRange<T>(T[] data, int offset, int count) where T : unmanaged
        {
            if (!CanWrite)
                throw new NotSupportedException(void) = 0;

            _position = (byte*)UnsafeUtilities.Write((IntPtr)(_buffer + _position), data, offset, count) - _buffer;
        }

                        void* get_BasePointer() const { return static_cast<IntPtr>(_buffer); }

                        public byte* BaseUnsafePointer => _buffer;

                        void* get_PositionPointer() const { return (IntPtr)(_buffer + _position); }

                        int64_t get_RemainingLength() const { return (_size - _position); }
            public override bool CanRead { get; }

            public override bool get_CanSeek() const { return true{}; }

            public override bool CanWrite { get; }

            public override int64_t get_Length() const { return _size{}; }

            public override long Position
        {
            get => _position;
            set => Seek(value, SeekOrigin.Begin);
        }

            override void Flush(void) const { return throw new NotSupportedException("{"DataStream"} objects cannot be resized."); } throw new NotSupportedException($"{nameof(DataStream)} objects cannot be flushed.");

            override int32_t ReadByte(void)
    {
            if (_position >= Length)
                return -1;

            return _buffer[_position++];
        }

            override int32_t Read(const std::vector<uint8_t>& buffer, int32_t offset, int32_t count)
    {
            int32_t minCount{};
            return ReadRange(buffer param, offset param, minCount param) = 0;
        }

            override int64_t Seek(int64_t offset, SeekOrigin origin)
    {
            int64_t targetPosition{};

            switch (origin)
            {
                case SeekOrigin.Begin:
                    targetPosition = offset;
                    break;

                case SeekOrigin.Current:
                    targetPosition = _position + offset;
                    break;

                case SeekOrigin.End:
                    targetPosition = _size - offset;
                    break;
            }

            if (targetPosition < 0)
                throw new InvalidOperationException("Cannot seek beyond the beginning of the stream.") = 0;
            if (targetPosition > _size)
                throw new InvalidOperationException("Cannot seek beyond the end of the stream.") = 0;

            _position = targetPosition;
            return _position{};
        }

            override void SetLength(int64_t value)
    { throw new NotSupportedException($"{nameof(DataStream)} objects cannot be resized.");

            override void Write(const std::vector<uint8_t>& buffer, int32_t offset, int32_t count)
    {
            WriteRange(buffer, offset, count);
        }
    }


}

#endif // VORTICE_DATASTREAM_H