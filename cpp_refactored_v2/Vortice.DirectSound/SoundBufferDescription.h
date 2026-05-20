// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
// 

#ifndef VORTICE_SOUNDBUFFERDESCRIPTION_H
#define VORTICE_SOUNDBUFFERDESCRIPTION_H

#include <cstdint>
#include <optional>
#include <guiddef.h>

namespace Vortice {
namespace DirectSound {

        namespace Vortice.DirectSound;
        publicclass SoundBufferDescription
        {
                        public SoundBufferDescription(void)
                {
            }
                        public: std::optional<WaveFormat> Format{};
            internal struct __Native
        {
                public: int32_t Size{};
                public: BufferFlags Flags{};
                public: int32_t BufferBytes{};
                public: int32_t Reserved{};
                public void* pFormat;
                public: GUID AlgorithmFor3D{};
                // Method to free native struct
                internalvoid __MarshalFree(void)
                {
                    if (pFormat != nullptr)
                        NativeMemory.Free(pFormat);
                }
            }
            internalvoid __MarshalFree(__Native& @ref)
                {
                @ref.__MarshalFree();
            }
            // Method to marshal from managed struct tot native
            internalvoid __MarshalTo(__Native& @ref)
                {
                @ref.Size = sizeof(__Native);
                @ref.Flags = Flags;
                @ref.BufferBytes = BufferBytes;
                @ref.Reserved = Reserved;
                @ref.pFormat = WaveFormat.MarshalToPtr(Format);
                @ref.AlgorithmFor3D = AlgorithmFor3D;
            }
            internalstatic __Native __NewNative(void)
                {
                __Native temp{};
                temp.Size = sizeof(__Native);
                return temp{};
            }
        }

    }
}

#endif // VORTICE_SOUNDBUFFERDESCRIPTION_H