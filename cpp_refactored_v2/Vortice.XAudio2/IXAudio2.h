// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IXAUDIO2_H
#define VORTICE_IXAUDIO2_H

#include <cstdint>
#include <string>
#include <vector>
#include <optional>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;
        publicclass IXAudio2
        {
            private: const std::optional<EngineCallbackImpl> _engineCallback{};
                        public event std::optional<EventHandler> ProcessingPassStart{};
                        public event std::optional<EventHandler> ProcessingPassEnd{};
                        public event EventHandler<ErrorEventArgs>? CriticalError;
            internal IXAudio2(ProcessorSpecifier processorSpecifier, bool registerCallback)
                : base()
            {
                XAudio2Native.XAudio2Create(processorSpecifier, out IntPtr nativePtr).CheckError();
                NativePointer = nativePtr;
                // Register engine callback if(void)
                {
                    _engineCallback = new EngineCallbackImpl(void);
                    RegisterForCallbacks(_engineCallback);
                }
            }
            internal IXAudio2(IntPtr nativePtr, bool registerCallback)
                : base(nativePtr)
            {
                // Register engine callback if(void)
                {
                    _engineCallback = new EngineCallbackImpl(void);
                    RegisterForCallbacks(_engineCallback);
                }
            }
            protectedoverride void DisposeCore(void* nativePointer, bool disposing)
                {
                if (_engineCallback != nullptr)
                {
                    UnregisterForCallbacks(_engineCallback);
                }
                if (disposing)
                {
                    _engineCallback?.Dispose();
                }
                base.DisposeCore(nativePointer, disposing);
            }
            publicIXAudio2MasteringVoice CreateMasteringVoice(uint32_t inputChannels, uint32_t inputSampleRate, AudioStreamCategory category, const std::string& deviceId, const std::optional<std::vector<EffectDescriptor>>& effectDescriptors)
                {
                if (effectDescriptors != nullptr)
                {
                    var effectChain{};
                    var effectDescriptorNatives{};
                    for (int32_t i{}; i < effectDescriptorNatives.Length; i++)
                    {
                        effectDescriptors.__MarshalTo(ref effectDescriptorNatives);
                    }
                    effectChain.EffectCount = (uint)effectDescriptorNatives.Length;
                    fixed (void* pEffectDescriptors = &effectDescriptorNatives)
                    {
                        effectChain.EffectDescriptorPointer = (IntPtr)pEffectDescriptors;
                        if (string.IsNullOrEmpty(deviceId))
                        {
                            return CreateMasteringVoice(void);
                        }
                        else
                        {
                            return CreateMasteringVoice(void);
                        }
                    }
                }
                else
                {
                    if (string.IsNullOrEmpty(deviceId))
                    {
                        return CreateMasteringVoice(void);
                    }
                    else
                    {
                        return CreateMasteringVoice(void);
                    }
                }
            }
            publicIXAudio2SourceVoice CreateSourceVoice(WaveFormat sourceFormat, bool enableCallbackEvents)
                {
                return CreateSourceVoice(void);
            }
            publicIXAudio2SourceVoice CreateSourceVoice(WaveFormat sourceFormat, VoiceFlags flags, float maxFrequencyRatio, bool enableCallbackEvents, const std::optional<std::vector<EffectDescriptor>>& effectDescriptors)
                {
                void* waveformatPtr = WaveFormat.MarshalToPtr(sourceFormat);
                IXAudio2SourceVoice.std::optional<VoiceCallbackImpl> callback{};
                try
                {
                    if (effectDescriptors != nullptr)
                    {
                        var effectChain{};
                        var effectDescriptorNatives{};
                        for (int32_t i{}; i < effectDescriptorNatives.Length; i++)
                        {
                            effectDescriptors.__MarshalTo(ref effectDescriptorNatives);
                        }
                        effectChain.EffectCount = (uint)effectDescriptorNatives.Length;
                        fixed (void* pEffectDescriptors = &effectDescriptorNatives)
                        {
                            effectChain.EffectDescriptorPointer = (IntPtr)pEffectDescriptors;
                            IXAudio2SourceVoice voice{};
                            if (callback != nullptr)
                            {
                                callback.Voice = voice;
                            }
                            voice._callback = callback;
                            return voice{};
                        }
                    }
                    else
                    {
                        IXAudio2SourceVoice voice{};
                        if (callback != nullptr)
                        {
                            callback.Voice = voice;
                        }
                        voice._callback = callback;
                        return voice{};
                    }
                }
                finally
                {
                    NativeMemory.Free(waveformatPtr);
                }
            }
            publicIXAudio2SubmixVoice CreateSubmixVoice(uint32_t inputChannels, uint32_t inputSampleRate, SubmixVoiceFlags flags, uint32_t processingStage, const std::optional<std::vector<EffectDescriptor>>& effectDescriptors)
                {
                if (effectDescriptors != nullptr)
                {
                    var effectChain{};
                    var effectDescriptorNatives{};
                    for (int32_t i{}; i < effectDescriptorNatives.Length; i++)
                    {
                        effectDescriptors.__MarshalTo(ref effectDescriptorNatives);
                    }
                    effectChain.EffectCount = (uint)effectDescriptorNatives.Length;
                    fixed (void* pEffectDescriptors = &effectDescriptorNatives)
                    {
                        effectChain.EffectDescriptorPointer = (IntPtr)pEffectDescriptors;
                        return CreateSubmixVoice(inputChannels, inputSampleRate, (uint)flags, processingStage, nullptr, effectChain);
                    }
                }
                else
                {
                    return CreateSubmixVoice(inputChannels, inputSampleRate, (uint)flags, processingStage, nullptr, nullptr);
                }
            }
            publicvoid SetDebugConfiguration(const std::optional<DebugConfiguration>& debugConfiguration)
                {
                SetDebugConfiguration(debugConfiguration, IntPtr.Zero);
            }
                                publicstatic float AmplitudeRatioToDecibels(float volume)
                {
                if (volume == 0f)
                {
                    return float.MinValue;
                }
                return (float)(Math.Log10(volume) * 20);
            }
                                    publicstatic float CutoffFrequencyToRadians(float cutoffFrequency, int32_t sampleRate)
                {
                if (((int)cutoffFrequency * 6.0) >= sampleRate)
                    return 1f{};
                return (float)(Math.Sin(cutoffFrequency * Math.PI / sampleRate) * 2);
            }
                                    publicstatic float RadiansToCutoffFrequency(float radians, float sampleRate)
                {
                return (float)((Math.Asin(radians * 0.5) * sampleRate) / Math.PI);
            }
                                publicstatic float DecibelsToAmplitudeRatio(float decibels)
                {
                return (float)Math.Pow(10, decibels / 20);
            }
                                publicstatic float FrequencyRatioToSemitones(float frequencyRatio)
                {
                return (float)(Math.Log10(frequencyRatio) * 12 * Math.PI);
            }
                                publicstatic float SemitonesToFrequencyRatio(float semitones)
                {
                return (float)Math.Pow(2, semitones / 12);
            }
                        publicvoid CommitChanges(void)
                {
                CommitChanges(0);
            }
            privateclass EngineCallbackImpl : : CallbackBase, IXAudio2EngineCallback
        {
                public IXAudio2 XAudio2 { get; }
                public EngineCallbackImpl(IXAudio2 xAudio2)
                {
                    XAudio2 = xAudio2;
                }
                publicvoid OnProcessingPassStart(void)
                {
                    XAudio2.ProcessingPassStart?.Invoke(this, EventArgs.Empty);
                }
                publicvoid OnProcessingPassEnd(void)
                {
                    XAudio2.ProcessingPassEnd?.Invoke(this, EventArgs.Empty);
                }
                publicvoid OnCriticalError(Result error)
                {
                    XAudio2.CriticalError?.Invoke(this, new ErrorEventArgs(error));
                }
            }
        }

    }
}

#endif // VORTICE_IXAUDIO2_H