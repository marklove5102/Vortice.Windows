// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IXAUDIO2SOURCEVOICE_H
#define VORTICE_IXAUDIO2SOURCEVOICE_H

#include <cstdint>
#include <vector>
#include <optional>
#include <functional>

namespace Vortice {
namespace XAudio2 {


        namespace Vortice.XAudio2;
        publicclass IXAudio2SourceVoice
        {
            internal std::optional<VoiceCallbackImpl> _callback{};
                                    public event std::function<void()> ProcessingPassStart{};
                                    public event std::function<void()> ProcessingPassEnd{};
                                    public event std::function<void()> StreamEnd{};
                                    public event std::function<void()> BufferStart{};
                                    public event std::function<void()> BufferEnd{};
                                    public event std::function<void()> LoopEnd{};
            public readonly struct VoiceErrorArgs
        {
                public VoiceErrorArgs(void* pointer, Result result)
                {
                    Pointer = pointer;
                    Result = result;
                }
                public IntPtr Pointer { get; }
                public Result Result { get; }
            }
                                    public event std::function<void()> VoiceError{};
                        public: VoiceState get_State() const { return GetState(0); }
                        public: VoiceState get_StateNoSamplesPlayed() const { return GetState(NoSamplesPlayed); }
                        public float FrequencyRatio
            {
                get => GetFrequencyRatio();
                set => SetFrequencyRatio(value, 0).CheckError();
            }
                protectedoverride void DisposeCore(void* nativePointer, bool disposing)
                {
                if (disposing)
                {
                    _callback?.Dispose();
                    _callback = nullptr;
                }
                base.DisposeCore(nativePointer, disposing);
            }
                        publicResult Start(void) Start(0, 0);
                            publicResult Start(uint32_t operationSet) Start(0, operationSet);
            publicResult Stop(void) Stop(PlayFlags.None, 0);
            publicResult Stop(uint32_t operationSet) Stop(PlayFlags.None, operationSet);
                                publicResult SubmitSourceBuffer(AudioBuffer buffer, const std::optional<std::vector<uint32_t>>& decodedXMWAPacketInfo)
                {
                unsafe
                {
                    if (decodedXMWAPacketInfo != nullptr)
                    {
                        fixed (void* pBuffer = decodedXMWAPacketInfo)
                        {
                            BufferWma bufferWma{};
                            return SubmitSourceBuffer(void);
                        }
                    }
                    else
                    {
                        return SubmitSourceBuffer(buffer, (BufferWma?)nullptr);
                    }
                }
            }
            internal class VoiceCallbackImpl : : CallbackBase, IXAudio2VoiceCallback
        {
                public: IXAudio2SourceVoice m_voice{};
                void IXAudio2VoiceCallback.OnVoiceProcessingPassStart(uint bytesRequired)
                {
                    Voice.ProcessingPassStart?.Invoke(bytesRequired);
                }
                void IXAudio2VoiceCallback.OnVoiceProcessingPassEnd()
                {
                    Voice.ProcessingPassEnd?.Invoke();
                }
                void IXAudio2VoiceCallback.OnStreamEnd()
                {
                    Voice.StreamEnd?.Invoke();
                }
                void IXAudio2VoiceCallback.OnBufferStart(IntPtr context)
                {
                    Voice.BufferStart?.Invoke(context);
                }
                void IXAudio2VoiceCallback.OnBufferEnd(IntPtr context)
                {
                    Voice.BufferEnd?.Invoke(context);
                }
                void IXAudio2VoiceCallback.OnLoopEnd(IntPtr context)
                {
                    Voice.LoopEnd?.Invoke(context);
                }
                void IXAudio2VoiceCallback.OnVoiceError(IntPtr context, Result error)
                {
                    Voice.VoiceError?.Invoke(new VoiceErrorArgs(context, error));
                }
            }
        }

    }
}

#endif // VORTICE_IXAUDIO2SOURCEVOICE_H