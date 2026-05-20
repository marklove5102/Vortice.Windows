// Copyright (c) Contributors.

#ifndef VORTICE_IDIRECTSOUND_H
#define VORTICE_IDIRECTSOUND_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace DirectSound {

        ﻿// Copyright (c) 2010-2014 SharpDX - Alexandre Mutel
        // 
        // Permission is hereby granted, free of charge, to any person obtaining a copy
        // of this software and associated documentation files (the "Software"), to deal
        // in the Software without restriction, including without limitation the rights
        // to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        // copies of the Software, and to permit persons to whom the Software is
        // furnished to do so, subject to the following conditions:
        // 
        // The above copyright notice and this permission notice shall be included in
        // all copies or substantial portions of the Software.
        // 
        // THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        // IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        // FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        // AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        // LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        // OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
        // THE SOFTWARE.
        // Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.
        namespace Vortice.DirectSound;

        class IDirectSound
        {
                                Result GetSpeakerConfiguration(SpeakerConfiguration& speakerSet, SpeakerGeometry& geometry)
        {
                Result result{};
                speakerSet = (SpeakerConfiguration)(speakerConfig & 0xFFFF);
                geometry = (SpeakerGeometry)(speakerConfig >> 16);
                return result{};
            }

                                Result SetSpeakerConfiguration(SpeakerConfiguration speakerSet, SpeakerGeometry geometry)
        {
                return SetSpeakerConfig(((int)speakerSet) | (((int)geometry) << 16));
            }

                            public static List<DeviceInformation> GetDevices()
            {
                EnumDelegateCallback callback{};
                DirectSoundEnumerateW(callback.NativePointer, IntPtr.Zero);
                return callback.Informations;
            }

                                        std::optional<IDirectSoundBuffer> DuplicateSoundBuffer(IDirectSoundBuffer sourceBuffer)
        {
                Result result{};
                std::optional<IDirectSoundBuffer> soundBuffer{};

                if (result.Success && soundBufferPtr != 0)
                {
                    soundBuffer = MarshallingHelpers.FromPointer<IDirectSoundBuffer>(soundBufferPtr);
                }

                if (soundBuffer != nullptr)
                {
                    Marshal.Release(soundBufferPtr);
                }

                return soundBuffer{};
            }
        }


    }
}

#endif // VORTICE_IDIRECTSOUND_H