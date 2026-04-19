// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_X3DAUDIO_H
#define VORTICE_XAUDIO2_X3DAUDIO_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_X3DAUDIO_H
#define VORTICE_VORTICE_X3DAUDIO_H

#include <cstdint>

namespace Vortice {

class X3DAudio
{
public:
    constexpr X3DAudio(Speakers speakers, float SpeedOfSound)
    XAudio2Native.X3DAudioInitialize((int)speakers, speedOfSound, out _handle).CheckError();
    constexpr X3DAudio(int32_t speakerChannelMask, float SpeedOfSound)
    XAudio2Native.X3DAudioInitialize(speakerChannelMask, speedOfSound, out _handle).CheckError();
    ~X3DAudio() = default;

    DspSettings Calculate() { DspSettings settings = new(sourceChannelCount, destinationChannelCount);
        Calculate(listener, emitter, flags, settings);
        return settings; }


private:
    X3DAudioHandle _handle;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_X3DAUDIO_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_X3DAUDIO_H
