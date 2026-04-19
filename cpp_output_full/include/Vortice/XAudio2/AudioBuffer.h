// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_AUDIOBUFFER_H
#define VORTICE_XAUDIO2_AUDIOBUFFER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_AUDIOBUFFER_H
#define VORTICE_VORTICE_AUDIOBUFFER_H

#include <cstdint>

namespace Vortice {

class AudioBuffer : public IDisposable
{
public:
    constexpr AudioBuffer(BufferFlags flags, void* data, uint32_t sizeInBytes, bool ownsBuffer)
    Flags = flags;
        AudioBytes = sizeInBytes;
        AudioDataPointer = new IntPtr(data);
        _ownsBuffer = ownsBuffer;
    constexpr AudioBuffer(void* data, uint32_t sizeInBytes, BufferFlags BufferFlags.None)
    Flags = flags;
        AudioBytes = sizeInBytes;
        AudioDataPointer = data;
        _ownsBuffer = false;
    constexpr AudioBuffer(uint32_t sizeInBytes, BufferFlags BufferFlags.EndOfStream)
    Flags = flags;
        AudioBytes = sizeInBytes;
        AudioDataPointer = (IntPtr)MemoryHelpers.AllocateMemory((nuint)sizeInBytes);
        _ownsBuffer = true;
    constexpr AudioBuffer(std::vector<uint8_t> data, BufferFlags BufferFlags.EndOfStream)
    Flags = flags;
        AudioBytes = (uint)data.Length;
        AudioDataPointer = (IntPtr)MemoryHelpers.AllocateMemory((nuint)data.Length);
        fixed (void* dataPtr = &data[0])
        {
            Unsafe.CopyBlockUnaligned(AudioDataPointer.ToPointer(), dataPtr, (uint)data.Length);
        }

        _ownsBuffer = true;
    constexpr AudioBuffer(DataStream stream, BufferFlags BufferFlags.EndOfStream)
    int length = (int)stream.Length - (int)stream.Position;

        AudioDataPointer = new(MemoryHelpers.AllocateMemory((nuint)length));
        MemoryHelpers.CopyMemory(AudioDataPointer, stream.PositionPointer, length);

        Flags = flags;
        AudioBytes = (uint)stream.Length;
        _ownsBuffer = true;
    ~AudioBuffer() = default;


private:
    const bool _ownsBuffer;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_AUDIOBUFFER_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_AUDIOBUFFER_H
