// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IXAUDIO2VOICE_H
#define VORTICE_IXAUDIO2VOICE_H

#include <cstdint>
#include <vector>
#include <span>
#include <initializer_list>

namespace Vortice {
namespace XAudio2 {

        namespace Vortice.XAudio2;
        publicclass IXAudio2Voice
        {
                        public float Volume
            {
                get => GetVolume();
                set => SetVolume(value).CheckError();
            }
                            publicResult SetVolume(float volume) SetVolume(volume, 0);
                                publicResult SetChannelVolumes(uint32_t channels, const std::vector<float>& volumes) SetChannelVolumes(channels, volumes, 0);
                                        publicResult SetEffectChain(std::initializer_list<std::vector<EffectDescriptor>> effectDescriptors)
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
                        return SetEffectChain(void);
                    }
                }
                else
                {
                    return SetEffectChain((EffectChain?)nullptr);
                }
            }
                                    publicResult SetOutputVoices(const std::span<VoiceSendDescriptor>& outputVoices)
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
                        return SetOutputVoices(void);
                    }
                }
                else
                {
                    return SetOutputVoices((VoiceSendDescriptors?)nullptr);
                }
            }
                                                    publicResult SetOutputMatrix(uint32_t sourceChannels, uint32_t destinationChannels, const std::vector<float>& levelMatrix)
                {
                return SetOutputMatrix(void);
            }
                                                                                    publicResult SetOutputMatrix(IXAudio2Voice destinationVoice, uint32_t sourceChannels, uint32_t destinationChannels, const std::vector<float>& levelMatrix)
                {
                return SetOutputMatrix(void);
            }
                                                                        publicResult SetOutputMatrix(uint32_t sourceChannels, uint32_t destinationChannels, const std::vector<float>& levelMatrix, uint32_t operationSet)
                {
                return SetOutputMatrix(void);
            }
                            publicResult EnableEffect(uint32_t effectIndex) EnableEffect(effectIndex, 0);
                            publicResult DisableEffect(uint32_t effectIndex) DisableEffect(effectIndex, 0);
                                public T GetEffectParameters<T>(uint effectIndex) where T : unmanaged
            {
                var effectParameter{};
                byte* pEffectParameter = stackalloc byte[sizeof(T)];
                GetEffectParameters(effectIndex, (IntPtr)pEffectParameter, (uint)sizeof(T));
                Unsafe.Copy(ref effectParameter, pEffectParameter);
                return effectParameter{};
            }
                                    publicResult GetEffectParameters(uint32_t effectIndex, const std::span<uint8_t>& effectParameters)
                {
                fixed (void* pEffectParameter = effectParameters)
                {
                    return GetEffectParameters(effectIndex, (IntPtr)pEffectParameter, (uint)effectParameters.Length);
                }
            }
                                    publicResult SetEffectParameters(uint32_t effectIndex, const std::span<uint8_t>& effectParameter, uint32_t operationSet)
                {
                fixed (void* pEffectParameter = effectParameter)
                {
                    return SetEffectParameters(effectIndex, pEffectParameter, (uint)effectParameter.Length, operationSet);
                }
            }
                                    public Result SetEffectParameters<T>(uint effectIndex, T effectParameter, uint32_t operationSet{};
            }
            publicResult SetEffectParameters(uint32_t effectIndex, ReverbParameters reverbParameters, uint32_t operationSet)
                {
                return SetEffectParameters(effectIndex, &reverbParameters, (uint)sizeof(ReverbParameters), operationSet);
            }
            publicResult SetEffectParameters(uint32_t effectIndex, ReverbI3DL2Parameters reverbParameters, bool sevenDotOneReverb, uint32_t operationSet)
                {
                ReverbParameters reverbParametersNative{};
                return SetEffectParameters(effectIndex, &reverbParametersNative, (uint)sizeof(ReverbParameters), operationSet);
            }
            publicResult SetEffectParameters(uint32_t effectIndex, VolumeMeterLevels meterLevels, uint32_t operationSet)
                {
                VolumeMeterLevels.__Native native{};
                meterLevels.__MarshalTo(ref native);
                return SetEffectParameters(effectIndex, &native, (uint)sizeof(VolumeMeterLevels.__Native), operationSet);
            }
        }

    }
}

#endif // VORTICE_IXAUDIO2VOICE_H