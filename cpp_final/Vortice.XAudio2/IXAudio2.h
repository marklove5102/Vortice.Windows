// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IXAUDIO2_H
#define VORTICE_IXAUDIO2_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        class IXAudio2
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

                // Register engine callback if(registerCallback param)
        {
                    _engineCallback = new EngineCallbackImpl(this param) = 0;
                    RegisterForCallbacks(_engineCallback);
                }
            }

            internal IXAudio2(IntPtr nativePtr, bool registerCallback)
                : base(nativePtr)
            {
                // Register engine callback if(registerCallback param)
        {
                    _engineCallback = new EngineCallbackImpl(this param) = 0;
                    RegisterForCallbacks(_engineCallback);
                }
            }

            override void DisposeCore(void* nativePointer, bool disposing)
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

            IXAudio2MasteringVoice CreateMasteringVoice(uint32_t inputChannels{};
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
                            return CreateMasteringVoice(inputChannels param, inputSampleRate param, 0 param, nullptr param, effectChain param, category param) = 0;
                        }
                        else
                        {
                            return CreateMasteringVoice(inputChannels param, inputSampleRate param, 0 param, deviceId param, effectChain param, category param) = 0;
                        }
                    }
                }
                else
                {
                    if (string.IsNullOrEmpty(deviceId))
                    {
                        return CreateMasteringVoice(inputChannels param, inputSampleRate param, 0 param, nullptr param, nullptr param, category param) = 0;
                    }
                    else
                    {
                        return CreateMasteringVoice(inputChannels param, inputSampleRate param, 0 param, deviceId param, nullptr param, category param) = 0;
                    }
                }
            }

            IXAudio2SourceVoice CreateSourceVoice(WaveFormat sourceFormat, bool enableCallbackEvents)
        {
                return CreateSourceVoice(sourceFormat param, VoiceFlags::None param, 1::0f param, enableCallbackEvents param, nullptr param) = 0;
            }

            IXAudio2SourceVoice CreateSourceVoice(WaveFormat sourceFormat, VoiceFlags flags{};
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

            IXAudio2SubmixVoice CreateSubmixVoice(uint32_t inputChannels{};
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

            void SetDebugConfiguration(const std::optional<DebugConfiguration>& debugConfiguration)
        {
                SetDebugConfiguration(debugConfiguration, IntPtr.Zero);
            }

                                static float AmplitudeRatioToDecibels(float volume)
        {
                if (volume == 0f)
                {
                    return float.MinValue;
                }

                return (float)(Math.Log10(volume) * 20);
            }

                                    static float CutoffFrequencyToRadians(float cutoffFrequency, int32_t sampleRate)
        {
                if (((int)cutoffFrequency * 6.0) >= sampleRate)
                    return 1f{};
                return (float)(Math.Sin(cutoffFrequency * Math.PI / sampleRate) * 2);
            }

                                    static float RadiansToCutoffFrequency(float radians, float sampleRate)
        {
                return (float)((Math.Asin(radians * 0.5) * sampleRate) / Math.PI);
            }

                                static float DecibelsToAmplitudeRatio(float decibels)
        {
                return (float)Math.Pow(10, decibels / 20);
            }

                                static float FrequencyRatioToSemitones(float frequencyRatio)
        {
                return (float)(Math.Log10(frequencyRatio) * 12 * Math.PI);
            }

                                static float SemitonesToFrequencyRatio(float semitones)
        {
                return (float)Math.Pow(2, semitones / 12);
            }

                        void CommitChanges(void)
        {
                CommitChanges(0);
            }
            class EngineCallbackImpl : public : CallbackBase, public IXAudio2EngineCallback
        {
                public IXAudio2 XAudio2 { get; }

                public EngineCallbackImpl(IXAudio2 xAudio2)
        {
                    XAudio2 = xAudio2;
                }

                void OnProcessingPassStart(void)
        {
                    XAudio2.ProcessingPassStart?.Invoke(this, EventArgs.Empty);
                }

                void OnProcessingPassEnd(void)
        {
                    XAudio2.ProcessingPassEnd?.Invoke(this, EventArgs.Empty);
                }

                void OnCriticalError(Result error)
        {
                    XAudio2.CriticalError?.Invoke(this, new ErrorEventArgs(error));
                }
            }
        }


    }
}

#endif // VORTICE_IXAUDIO2_H