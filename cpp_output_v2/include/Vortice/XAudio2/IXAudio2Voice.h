// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_IXAUDIO2VOICE_H
#define VORTICE_XAUDIO2_IXAUDIO2VOICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IXAUDIO2VOICE_H
#define VORTICE_VORTICE_IXAUDIO2VOICE_H

#include <cstdint>

namespace Vortice {

class IXAudio2Voice
{
public:
    ~IXAudio2Voice() = default;

    float get_Volume() const { GetVolume() }

    HRESULT SetOutputMatrix() { return SetOutputMatrix(sourceChannels, destinationChannels, levelMatrix, 0); }

    HRESULT SetOutputMatrix() { return SetOutputMatrix(destinationVoice, sourceChannels, destinationChannels, levelMatrix, 0); }

    HRESULT SetOutputMatrix() { return SetOutputMatrix(nullptr, sourceChannels, destinationChannels, levelMatrix, operationSet); }

    HRESULT SetEffectParameters() { return SetEffectParameters(effectIndex, &reverbParameters, (uint)sizeof(ReverbParameters), operationSet); }

    HRESULT SetEffectParameters() { ReverbParameters reverbParametersNative = Fx.Fx.ReverbConvertI3DL2ToNative(reverbParameters, sevenDotOneReverb);
        return SetEffectParameters(effectIndex, &reverbParametersNative, (uint)sizeof(ReverbParameters), operationSet); }

    HRESULT SetEffectParameters() { VolumeMeterLevels.__Native native = default;
        meterLevels.__MarshalTo(ref native);
        return SetEffectParameters(effectIndex, &native, (uint)sizeof(VolumeMeterLevels.__Native), operationSet); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IXAUDIO2VOICE_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_IXAUDIO2VOICE_H
