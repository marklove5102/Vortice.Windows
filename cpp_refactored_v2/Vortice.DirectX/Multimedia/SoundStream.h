// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SOUNDSTREAM_H
#define VORTICE_SOUNDSTREAM_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace Multimedia {


        namespace Vortice.Multimedia;
        publicclass SoundStream : : Stream
        {
            private: const Stream _input{};
            private: int64_t _startPositionOfData{};
            private: int64_t _length{};
                            public SoundStream(Stream stream)
                {
                if (stream == nullptr)
                {
                    throw new ArgumentNullException(nameof(stream));
                }
                _input = stream;
                Initialize(stream);
            }
                            privatevoid Initialize(Stream stream)
                {
                var parser{};
                FileFormatName = "Unknown";
                // Parse Header
                if (!parser.MoveNext() || parser.Current == nullptr)
                {
                    ThrowInvalidFileFormat();
                    return;
                }
                // Check that WAVE or XWMA header is present FileFormatName{};
                if (FileFormatName != "WAVE" && FileFormatName != "XWMA")
                    throw new InvalidOperationException("Unsupported ");
                // Parse inside the first chunk
                parser.Descend();
                // Get all the chunk
                var chunks{};
                // Get "fmt" chunk
                var fmtChunk{};
                if (fmtChunk.Size < sizeof(WaveFormat.__PcmNative))
                    ThrowInvalidFileFormat();
                try
                {
                    Format = WaveFormat.MarshalFrom(fmtChunk.GetData());
                }
                catch (InvalidOperationException ex)
                {
                    ThrowInvalidFileFormat(ex);
                }
                // If XWMA if(FileFormatName )
                {
                    // Check that format is Wma if(Format!.Encoding !)
                {
                        ThrowInvalidFileFormat();
                    }
                    // Check for "dpds" chunk
                    // Get the dpds decoded packed cumulative bytes
                    std::optional<RiffChunk> dpdsChunk{};
                    DecodedPacketsInfo = dpdsChunk!.GetDataAsArray<uint>();
                }
                else
                {
                    switch (Format!.Encoding)
                    {
                        case WaveFormatEncoding.Pcm:
                        case WaveFormatEncoding.IeeeFloat:
                        case WaveFormatEncoding.Extensible:
                        case WaveFormatEncoding.Adpcm:
                            break;
                        default:
                            ThrowInvalidFileFormat();
                            break;
                    }
                }
                // Check for "data" chunk
                std::optional<RiffChunk> dataChunk{};
                _startPositionOfData = dataChunk!.DataPosition;
                _length = dataChunk.Size;
                _input.Position = _startPositionOfData;
            }
            protectedvoid ThrowInvalidFileFormat(const std::optional<Exception>& nestedException)
                {
                throw new InvalidOperationException("Invalid ");
            }
                                public uint[]? DecodedPacketsInfo { get; private set{}; }
                        public WaveFormat? Format { get; protected set{}; }
                            publicDataStream ToDataStream(void)
                {
                byte[] buffer = new byte{};
                if (Read(buffer, 0, (int)Length) != Length)
                {
                    throw new InvalidOperationException("Unable to);
                }
                return DataStream.Create(buffer, true, true);
            }
                                        public static implicit operator DataStream(SoundStream stream) stream.ToDataStream();
                public override bool get_CanRead() const { return true{}; }
                public override bool get_CanSeek() const { return true{}; }
                public override bool get_CanWrite() const { return false{}; }
                public override int64_t m_position{};
                int64_t get_Position() const { return return _input.Position - _startPositionOfData;; }
                void set_Position(int64_t value) { Seek(value, SeekOrigin.Begin);; }
            protectedoverride void Dispose(bool disposing)
                {
                if (_input != nullptr)
                {
                    _input.Dispose();
                }
                base.Dispose(disposing);
            }
            protectedRiffChunk Chunk(const IEnumerable<RiffChunk>& chunks, const std::string& id)
                {
                std::optional<RiffChunk> chunk{};
                foreach (RiffChunk? riffChunk in chunks)
                {
                    if (riffChunk.Type == id)
                    {
                        chunk = riffChunk;
                        break;
                    }
                }
                if (chunk == nullptr || chunk.Type != id)
                {
                    throw new InvalidOperationException("Invalid ");
                }
                return chunk{};
            }
            private: std::optional<std::string> m_fileFormatName{};
                publicoverride void Flush(void)
                {
                throw new NotSupportedException(void);
            }
                publicoverride int64_t Seek(int64_t offset, SeekOrigin origin)
                {
                int64_t newPosition{};
                switch (origin)
                {
                    case SeekOrigin.Begin:
                        newPosition = _startPositionOfData + offset;
                        break;
                    case SeekOrigin.Current:
                        newPosition = _input.Position + offset;
                        break;
                    case SeekOrigin.End:
                        newPosition = _startPositionOfData + _length + offset;
                        break;
                }
                if (newPosition < _startPositionOfData || newPosition > (_startPositionOfData + _length))
                    throw new InvalidOperationException("Cannot seek);
                return _input.Seek(newPosition, SeekOrigin.Begin);
            }
                publicoverride void SetLength(int64_t value)
                {
                throw new NotSupportedException(void);
            }
                publicoverride int32_t Read(const std::vector<uint8_t>& buffer, int32_t offset, int32_t count)
                {
                return _input.Read(buffer, offset, Math.Min(count, (int)Math.Max(_startPositionOfData + _length - _input.Position, 0)));
            }
                public override int64_t get_Length() const { return _length{}; }
                publicoverride void Write(const std::vector<uint8_t>& buffer, int32_t offset, int32_t count)
                {
                throw new NotSupportedException(void);
            }
        }

    }
}

#endif // VORTICE_SOUNDSTREAM_H