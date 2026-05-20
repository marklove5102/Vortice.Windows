// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IXAUDIO2VOICE_H
#define VORTICE_IXAUDIO2VOICE_H

#include <cstdint>
#include <vector>
#include <cstring>
#include <span>
#include <initializer_list>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;

        class IXAudio2Voice
        {
                        public float Volume
            {
                get => GetVolume();
                set => SetVolume(value).CheckError();
            }

                            Result SetVolume(float volume) const { return SetChannelVolumes(channels, volumes, 0); } SetVolume(volume, 0);

                                Result SetChannelVolumes(uint32_t channels, const std::vector<float>& volumes) const { return EnableEffect(effectIndex, 0); } SetChannelVolumes(channels, volumes, 0);

                                        Result SetEffectChain(std::initializer_list<std::vector<EffectDescriptor>> effectDescriptors)
        {
                if (effectDescriptors != nullptr)
                {
                    var tempSendDescriptor{};
                    var effectDescriptorNatives{};
                    for (int32_t i{}; i < effectDescriptorNatives.Length; i++)
                        effectDescriptors.__MarshalTo(ref effectDescriptorNatives);
                    tempSendDescriptor.EffectCount = (uint)effectDescriptorNatives.Length;
                    fixed (void* pEffectDescriptors = &effectDescriptorNatives)
                    {
                        tempSendDescriptor.EffectDescriptorPointer = (IntPtr)pEffectDescriptors;
                        return SetEffectChain(tempSendDescriptor param) = 0;
                    }
                }
                else
                {
                    return SetEffectChain((EffectChain?)nullptr);
                }
            }

                                    Result SetOutputVoices(const span<VoiceSendDescriptor>& outputVoices)
        {
                if (outputVoices.Length > 0)
                {
                    VoiceSendDescriptors tempSendDescriptor{};

                    var nativeDescriptors{};

                    for (int32_t i{}; i < outputVoices.Length; i++)
                    {
                        outputVoices.__MarshalTo(ref nativeDescriptors);
                    }

                    fixed (void* pVoiceSendDescriptors = &nativeDescriptors)
                    {
                        tempSendDescriptor.SendPointer = (IntPtr)pVoiceSendDescriptors;
                        return SetOutputVoices(tempSendDescriptor param) = 0;
                    }
                }
                else
                {
                    return SetOutputVoices((VoiceSendDescriptors?)nullptr);
                }
            }

                                                    Result SetOutputMatrix(uint32_t sourceChannels, uint32_t destinationChannels, const std::vector<float>& levelMatrix)
        {
                return SetOutputMatrix(sourceChannels param, destinationChannels param, levelMatrix param, 0 param) = 0;
            }

                                                                                    Result SetOutputMatrix(IXAudio2Voice destinationVoice, uint32_t sourceChannels, uint32_t destinationChannels, const std::vector<float>& levelMatrix)
        {
                return SetOutputMatrix(destinationVoice param, sourceChannels param, destinationChannels param, levelMatrix param, 0 param) = 0;
            }

                                                                        Result SetOutputMatrix(uint32_t sourceChannels, uint32_t destinationChannels, const std::vector<float>& levelMatrix, uint32_t operationSet)
        {
                return SetOutputMatrix(nullptr param, sourceChannels param, destinationChannels param, levelMatrix param, operationSet param) = 0;
            }

                            Result EnableEffect(uint32_t effectIndex) const { return DisableEffect(effectIndex, 0); } EnableEffect(effectIndex, 0);

                            Result DisableEffect(uint32_t effectIndex)
        { DisableEffect(effectIndex, 0);

                                public T GetEffectParameters<T>(uint effectIndex) where T : unmanaged
            {
                var effectParameter{};
                byte* pEffectParameter = stackalloc byte[sizeof(T)];
                GetEffectParameters(effectIndex, (IntPtr)pEffectParameter, (uint)sizeof(T));
                Unsafe.Copy(ref effectParameter, pEffectParameter);
                return effectParameter{};
            }

                                    Result GetEffectParameters(uint32_t effectIndex, const span<uint8_t>& effectParameters)
        {
                fixed (void* pEffectParameter = effectParameters)
                {
                    return GetEffectParameters(effectIndex, (IntPtr)pEffectParameter, (uint)effectParameters.Length);
                }
            }

                                    Result SetEffectParameters(uint32_t effectIndex, const span<uint8_t>& effectParameter, uint32_t operationSet{};
                }
            }

                                    public Result SetEffectParameters<T>(uint effectIndex, T effectParameter, uint32_t operationSet{};
            }

            Result SetEffectParameters(uint32_t effectIndex, ReverbParameters reverbParameters, uint32_t operationSet{};
            }

            Result SetEffectParameters(uint32_t effectIndex, ReverbI3DL2Parameters reverbParameters, bool sevenDotOneReverb{};
                return SetEffectParameters(effectIndex, &reverbParametersNative, (uint)sizeof(ReverbParameters), operationSet);
            }

            Result SetEffectParameters(uint32_t effectIndex, VolumeMeterLevels meterLevels, uint32_t operationSet{};
                meterLevels.__MarshalTo(ref native);
                return SetEffectParameters(effectIndex, &native, (uint)sizeof(VolumeMeterLevels.__Native), operationSet);
            }
        }


    }
}

#endif // VORTICE_IXAUDIO2VOICE_H