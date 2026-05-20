// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IXAUDIO2SOURCEVOICE_H
#define VORTICE_IXAUDIO2SOURCEVOICE_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace XAudio2 {


        namespace Vortice.XAudio2;

        class IXAudio2SourceVoice
        {
            internal std::optional<VoiceCallbackImpl> _callback{};

                                    public event Action ProcessingPassStart{};

                                    public event Action ProcessingPassEnd{};

                                    public event Action StreamEnd{};

                                    public event Action BufferStart{};

                                    public event Action BufferEnd{};

                                    public event Action LoopEnd{};

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

                                    public event Action VoiceError{};

                        VoiceState get_State() const { return GetState(0); }

                        VoiceState get_StateNoSamplesPlayed() const { return GetState(NoSamplesPlayed); }

                        public float FrequencyRatio
            {
                get => GetFrequencyRatio();
                set => SetFrequencyRatio(value, 0).CheckError();
            }

                override void DisposeCore(void* nativePointer, bool disposing)
        {
                if (disposing)
                {
                    _callback?.Dispose();
                    _callback = nullptr;
                }

                base.DisposeCore(nativePointer, disposing);
            }

                        Result Start(void) const { return Start(0, operationSet); } Start(0, 0);

                            Result Start(uint32_t operationSet) const { return Stop(PlayFlags.None, 0); } Start(0, operationSet);

            Result Stop(void) const { return Stop(PlayFlags.None, operationSet); } Stop(PlayFlags.None, 0);

            Result Stop(uint32_t operationSet)
        { Stop(PlayFlags.None, operationSet);

                                Result SubmitSourceBuffer(AudioBuffer buffer, uint[]? decodedXMWAPacketInfo = nullptr)
        {
                unsafe
                {
                    if (decodedXMWAPacketInfo != nullptr)
                    {
                        fixed (void* pBuffer = decodedXMWAPacketInfo)
                        {
                            BufferWma bufferWma{};
                            return SubmitSourceBuffer(buffer param, bufferWma param) = 0;
                        }
                    }
                    else
                    {
                        return SubmitSourceBuffer(buffer, (BufferWma?)nullptr);
                    }
                }
            }

            internal class VoiceCallbackImpl : public : CallbackBase, public IXAudio2VoiceCallback
        {
                IXAudio2SourceVoice m_voice{};

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