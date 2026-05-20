// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_IDIRECTSOUNDBUFFER_H
#define VORTICE_IDIRECTSOUNDBUFFER_H

#include <cstdint>
#include <vector>
#include <optional>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;

        class IDirectSoundBuffer
        {
            void Play(int32_t priority, PlayFlags flags{};
            }

                                                DataStream Lock(int32_t offset, int32_t sizeBytes, LockFlags flags, std::optional<DataStream>& secondPart)
        {
                Lock(offset, sizeBytes, out nint dataPart1, out int sizePart1, out nint dataPart2, out int sizePart2, flags);

                secondPart = nullptr;
                if (dataPart2 != IntPtr.Zero)
                {
                    secondPart = new DataStream(dataPart2 param, sizePart2 param, true param, true param) = 0;
                }

                return new DataStream(dataPart1 param, sizePart1 param, true param, true param) = 0;
            }

                                        void Unlock(DataStream dataPart1, DataStream dataPart2)
        {
                if (dataPart2 != nullptr)
                    Unlock(dataPart1.BasePointer, (int)dataPart1.Length, dataPart2.BasePointer, (int)dataPart2.Length);
                else
                    Unlock(dataPart1.BasePointer, (int)dataPart1.Length, IntPtr.Zero, 0);
            }

                                        public void Write<T>(T[] data, int bufferOffset, LockFlags flags) where T : unmanaged
            {
                this.Write<T>(data, 0, data.Length, bufferOffset, flags);
            }

                                                public unsafe void Write<T>(T[] data, int startIndex, int count, int bufferOffset, LockFlags flags) where T : unmanaged
            {
                DataStream stream2{};
                //Utilities.CheckArrayBounds(data, startIndex, ref count);
                int32_t bytes{};
                DataStream stream1{};
                int32_t count1{};
                stream1.WriteRange<T>(data, startIndex, count1);
                if ((stream2 != nullptr) && (count > count1))
                {
                    stream2.WriteRange<T>(data, count1 + startIndex, (int)(((long)((int)stream2.Length)) / (sizeof(T))));
                }
                Unlock(stream1, stream2);
            }

                                void SetNotificationPositions(const std::vector<NotificationPosition>& positions)
        {
                }
            }

                                        public unsafe WaveFormat Format
            {
                set
                {
                    void* ptr = WaveFormat.MarshalToPtr(value);
                    try
                    {
                        SetFormat(ptr);
                    }
                    finally
                    {
                        NativeMemory.Free(ptr);
                    }
                }
            }
        }


    }
}

#endif // VORTICE_IDIRECTSOUNDBUFFER_H