// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XAUDIO2_IXAUDIO2_H
#define VORTICE_XAUDIO2_IXAUDIO2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IXAUDIO2_H
#define VORTICE_VORTICE_IXAUDIO2_H

#include <cstdint>

namespace Vortice {

class IXAudio2
{
public:
    constexpr IXAudio2(ProcessorSpecifier processorSpecifier, bool registerCallback)
    XAudio2Native.XAudio2Create(processorSpecifier, out IntPtr nativePtr).CheckError();
        NativePointer = nativePtr;

        // Register engine callback
        if (registerCallback)
        {
            _engineCallback = new EngineCallbackImpl(this);
            RegisterForCallbacks(_engineCallback);
        }
    constexpr IXAudio2(void* nativePtr, bool registerCallback)
    // Register engine callback
        if (registerCallback)
        {
            _engineCallback = new EngineCallbackImpl(this);
            RegisterForCallbacks(_engineCallback);
        }
    ~IXAudio2() = default;

    IXAudio2 XAudio2{};

    IXAudio2SourceVoice CreateSourceVoice() { return CreateSourceVoice(sourceFormat, VoiceFlags.None, 1.0f, enableCallbackEvents, nullptr); }

    void SetDebugConfiguration() { SetDebugConfiguration(debugConfiguration, IntPtr.Zero); }

    static float CutoffFrequencyToRadians() { if (((int)cutoffFrequency * 6.0) >= sampleRate)
            return 1f;
        return (float)(Math.Sin(cutoffFrequency * Math.PI / sampleRate) * 2); }

    static float RadiansToCutoffFrequency() { return (float)((Math.Asin(radians * 0.5) * sampleRate) / Math.PI); }

    static float DecibelsToAmplitudeRatio() { return (float)Math.Pow(10, decibels / 20); }

    static float FrequencyRatioToSemitones() { return (float)(Math.Log10(frequencyRatio) * 12 * Math.PI); }

    static float SemitonesToFrequencyRatio() { return (float)Math.Pow(2, semitones / 12); }

    void CommitChanges() { CommitChanges(0); }

    void OnProcessingPassStart() { XAudio2.ProcessingPassStart?.Invoke(this, EventArgs.Empty); }

    void OnProcessingPassEnd() { XAudio2.ProcessingPassEnd?.Invoke(this, EventArgs.Empty); }

    void OnCriticalError() { XAudio2.CriticalError?.Invoke(this, new ErrorEventArgs(error)); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IXAUDIO2_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ENGINECALLBACKIMPL_H
#define VORTICE_VORTICE_ENGINECALLBACKIMPL_H

#include <cstdint>

namespace Vortice {

class EngineCallbackImpl : public CallbackBase, public IXAudio2EngineCallback
{
public:
    constexpr EngineCallbackImpl(IXAudio2 xAudio2)
    XAudio2 = xAudio2;
    ~EngineCallbackImpl() = default;

    IXAudio2 XAudio2{};

    void OnProcessingPassStart() { XAudio2.ProcessingPassStart?.Invoke(this, EventArgs.Empty); }

    void OnProcessingPassEnd() { XAudio2.ProcessingPassEnd?.Invoke(this, EventArgs.Empty); }

    void OnCriticalError() { XAudio2.CriticalError?.Invoke(this, new ErrorEventArgs(error)); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ENGINECALLBACKIMPL_H

} // namespace Vortice

#endif // VORTICE_XAUDIO2_IXAUDIO2_H
