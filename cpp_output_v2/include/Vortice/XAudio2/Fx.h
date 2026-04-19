// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_FX_H
#define VORTICE_XAUDIO2_FX_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_FX_H
#define VORTICE_VORTICE_FX_H

#include <cstdint>

namespace Vortice {

class Fx
{
public:
    ~Fx() = default;

    static ComObject XAudio2CreateVolumeMeter() { IntPtr reverbPtr = default;
        XAudio2Native.CreateAudioVolumeMeter(0u, &reverbPtr).CheckError();
        return new(reverbPtr)!; }

    static ComObject XAudio2CreateReverb() { IntPtr reverbPtr = default;
        XAudio2Native.CreateAudioReverb(0u, &reverbPtr).CheckError();
        return new ComObject(reverbPtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_FX_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_FX_H
