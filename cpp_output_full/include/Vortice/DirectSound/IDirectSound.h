// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTSOUND_IDIRECTSOUND_H
#define VORTICE_DIRECTSOUND_IDIRECTSOUND_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDIRECTSOUND_H
#define VORTICE_VORTICE_IDIRECTSOUND_H

#include <cstdint>

namespace Vortice {

class IDirectSound
{
public:
    ~IDirectSound() = default;

    HRESULT GetSpeakerConfiguration() { Result result = GetSpeakerConfig(out int speakerConfig);
        speakerSet = (SpeakerConfiguration)(speakerConfig & 0xFFFF);
        geometry = (SpeakerGeometry)(speakerConfig >> 16);
        return result; }

    HRESULT SetSpeakerConfiguration() { return SetSpeakerConfig(((int)speakerSet) | (((int)geometry) << 16)); }

    static std::vector<DeviceInformation> GetDevices() { EnumDelegateCallback callback = new();
        DirectSoundEnumerateW(callback.NativePointer, IntPtr.Zero);
        return callback.Informations; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDIRECTSOUND_H

} // namespace Vortice

#endif // VORTICE_DIRECTSOUND_IDIRECTSOUND_H
