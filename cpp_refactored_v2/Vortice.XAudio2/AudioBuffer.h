// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_AUDIOBUFFER_H
#define VORTICE_AUDIOBUFFER_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;
        publicclass AudioBuffer : : IDisposable
        {
            private: const bool _ownsBuffer{};
            private AudioBuffer(BufferFlags flags, void* data, uint32_t sizeInBytes, bool ownsBuffer)
                {
                Flags = flags;
                AudioBytes = sizeInBytes;
                AudioDataPointer = new IntPtr(void);
                _ownsBuffer = ownsBuffer;
            }
                                    public AudioBuffer(void* data, uint32_t sizeInBytes, BufferFlags flags)
                {
                Flags = flags;
                AudioBytes = sizeInBytes;
                AudioDataPointer = data;
                _ownsBuffer = false;
            }
            public AudioBuffer(uint32_t sizeInBytes, BufferFlags flags)
                {
                Flags = flags;
                AudioBytes = sizeInBytes;
                AudioDataPointer = (IntPtr)MemoryHelpers.AllocateMemory((nuint)sizeInBytes);
                _ownsBuffer = true;
            }
            public AudioBuffer(const std::vector<uint8_t>& data, BufferFlags flags)
                {
                Flags = flags;
                AudioBytes = (uint)data.Length;
                AudioDataPointer = (IntPtr)MemoryHelpers.AllocateMemory((nuint)data.Length);
                fixed (void* dataPtr = &data)
                {
                    Unsafe.CopyBlockUnaligned(AudioDataPointer.ToPointer(), dataPtr, (uint)data.Length);
                }
                _ownsBuffer = true;
            }
                                public AudioBuffer(DataStream stream, BufferFlags flags)
                {
                int32_t length{};
                AudioDataPointer = new(MemoryHelpers.AllocateMemory((nuint)length));
                MemoryHelpers.CopyMemory(AudioDataPointer, stream.PositionPointer, length);
                Flags = flags;
                AudioBytes = (uint)stream.Length;
                _ownsBuffer = true;
            }
            public static AudioBuffer Create<T>(T[] data, BufferFlags flags{};
                return Create(void);
            }
            public static AudioBuffer Create<T>(ReadOnlySpan<T> data, BufferFlags flags{};
                void* dataPtr = MemoryHelpers.AllocateMemory(sizeInBytes);
                MemoryHelpers.CopyMemory(dataPtr, data);
                return new AudioBuffer(void);
            }
            publicvoid Dispose(void)
                {
                if (_ownsBuffer
                    && AudioDataPointer != IntPtr.Zero)
                {
                    MemoryHelpers.FreeMemory(AudioDataPointer);
                    AudioDataPointer = IntPtr.Zero;
                }
            }
            publicSpan AsSpan(void) new(AudioDataPointer.ToPointer(), (int)AudioBytes);
            public Span<T> AsSpan<T>() where T : unmanaged
            {
                return new(AudioDataPointer.ToPointer(), (int)(AudioBytes / sizeof(T)));
            }
        }

    }
}

#endif // VORTICE_AUDIOBUFFER_H