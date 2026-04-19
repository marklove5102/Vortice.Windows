// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_IXAUDIO2SOURCEVOICE_H
#define VORTICE_XAUDIO2_IXAUDIO2SOURCEVOICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IXAUDIO2SOURCEVOICE_H
#define VORTICE_VORTICE_IXAUDIO2SOURCEVOICE_H

#include <cstdint>

namespace Vortice {

class IXAudio2SourceVoice
{
public:
    ~IXAudio2SourceVoice() = default;

    VoiceState State{> GetState(0)};
    VoiceState StateNoSamplesPlayed{> GetState(NoSamplesPlayed)};

    void* Pointer{};
    HRESULT Result{};
    float get_FrequencyRatio() const { GetFrequencyRatio() }
    IXAudio2SourceVoice Voice{};

    // Event: Action<uint32_t> ProcessingPassStart
    // Event: Action ProcessingPassEnd
    // Event: Action StreamEnd
    // Event: Action<void*> BufferStart
    // Event: Action<void*> BufferEnd
    // Event: Action<void*> LoopEnd
    // Event: Action<VoiceErrorArgs> VoiceError
};

} // namespace Vortice

#endif // VORTICE_VORTICE_IXAUDIO2SOURCEVOICE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VOICEERRORARGS_H
#define VORTICE_VORTICE_VOICEERRORARGS_H

#include <cstdint>

namespace Vortice {

struct VoiceErrorArgs
{
public:
    constexpr VoiceErrorArgs(void* pointer, HRESULT result)
    Pointer = pointer;
            Result = result;
    void* Pointer{};
    HRESULT Result{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VOICEERRORARGS_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_VOICECALLBACKIMPL_H
#define VORTICE_VORTICE_VOICECALLBACKIMPL_H

#include <cstdint>

namespace Vortice {

class VoiceCallbackImpl : public CallbackBase, public IXAudio2VoiceCallback
{
public:
    ~VoiceCallbackImpl() = default;

    IXAudio2SourceVoice Voice{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_VOICECALLBACKIMPL_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_IXAUDIO2SOURCEVOICE_H
