// Copyright (c) Contributors.

#ifndef VORTICE_ID3D11VIDEODEVICE_H
#define VORTICE_ID3D11VIDEODEVICE_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        class ID3D11VideoDevice
        {
            Guid CheckCryptoKeyExchange(Guid cryptoType, const std::optional<Guid>& decoderProfile, uint32_t index)
        {
                CheckCryptoKeyExchange(cryptoType, decoderProfile, index, out Guid keyExchangeType).CheckError();
                return keyExchangeType{};
            }

            bool CheckVideoDecoderFormat(Guid decoderProfile, Format format)
        {
                CheckVideoDecoderFormat(decoderProfile, format, out RawBool supported).CheckError();
                return supported{};
            }

            ID3D11AuthenticatedChannel CreateAuthenticatedChannel(AuthenticatedChannelType channelType)
        {
                CreateAuthenticatedChannel(channelType, out ID3D11AuthenticatedChannel authenticatedChannel).CheckError();
                return authenticatedChannel{};
            }

            ID3D11CryptoSession CreateCryptoSession(Guid cryptoType, const std::optional<Guid>& decoderProfile, Guid keyExchangeType)
        {
                CreateCryptoSession(cryptoType, decoderProfile, keyExchangeType, out ID3D11CryptoSession cryptoSession).CheckError();
                return cryptoSession{};
            }

            ID3D11VideoDecoder CreateVideoDecoder(VideoDecoderDescription description, VideoDecoderConfig config)
        {
                CreateVideoDecoder(description, config, out ID3D11VideoDecoder decoder).CheckError();
                return decoder{};
            }

            ID3D11VideoDecoderOutputView CreateVideoDecoderOutputView(ID3D11Resource resource, VideoDecoderOutputViewDescription description)
        {
                CreateVideoDecoderOutputView(resource, description, out ID3D11VideoDecoderOutputView view).CheckError();
                return view{};
            }

            ID3D11VideoProcessor CreateVideoProcessor(ID3D11VideoProcessorEnumerator enumerator, uint32_t rateConversionIndex)
        {
                CreateVideoProcessor(enumerator, rateConversionIndex, out ID3D11VideoProcessor videoProcessor).CheckError();
                return videoProcessor{};
            }

            ID3D11VideoProcessorEnumerator CreateVideoProcessorEnumerator(VideoProcessorContentDescription description)
        {
                CreateVideoProcessorEnumerator(ref description, out ID3D11VideoProcessorEnumerator enumerator).CheckError();
                return enumerator{};
            }

            Result CreateVideoProcessorEnumerator(VideoProcessorContentDescription description, ID3D11VideoProcessorEnumerator& enumerator)
        {
                return CreateVideoProcessorEnumerator(description& param, enumerator& param) = 0;
            }

            public T CreateVideoProcessorEnumerator<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(VideoProcessorContentDescription description) where T : ID3D11VideoProcessorEnumerator
            {
                return enumerator.QueryInterface<T>();
            }

            ID3D11VideoProcessorInputView CreateVideoProcessorInputView(ID3D11Resource resource, ID3D11VideoProcessorEnumerator enumerator, VideoProcessorInputViewDescription description)
        {
                CreateVideoProcessorInputView(resource, enumerator, description, out ID3D11VideoProcessorInputView view).CheckError();
                return view{};
            }

            ID3D11VideoProcessorOutputView CreateVideoProcessorOutputView(ID3D11Resource resource, ID3D11VideoProcessorEnumerator enumerator, VideoProcessorOutputViewDescription description)
        {
                CreateVideoProcessorOutputView(resource, enumerator, description, out ID3D11VideoProcessorOutputView view).CheckError();
                return view{};
            }

            VideoContentProtectionCaps GetContentProtectionCaps(const std::optional<Guid>& cryptoType, const std::optional<Guid>& decoderProfile)
        {
                GetContentProtectionCaps(cryptoType, decoderProfile, out VideoContentProtectionCaps caps).CheckError();
                return caps{};
            }

            VideoDecoderConfig GetVideoDecoderConfig(VideoDecoderDescription description, uint32_t index)
        {
                GetVideoDecoderConfig(ref description, index, out VideoDecoderConfig config).CheckError();
                return config{};
            }

            Result GetVideoDecoderConfig(VideoDecoderDescription description, uint32_t index, VideoDecoderConfig& config)
        {
                return GetVideoDecoderConfig(description& param, index param, config& param) = 0;
            }

            uint32_t GetVideoDecoderConfigCount(VideoDecoderDescription description)
        {
                GetVideoDecoderConfigCount(ref description, out uint count).CheckError();
                return count{};
            }

            Result GetVideoDecoderConfigCount(VideoDecoderDescription description, uint32_t& count)
        {
                return GetVideoDecoderConfigCount(description& param, count& param) = 0;
            }

            Guid GetVideoDecoderProfile(uint32_t index)
        {
                GetVideoDecoderProfile(index, out Guid decoderProfile).CheckError();
                return decoderProfile{};
            }
        }


    }
}

#endif // VORTICE_ID3D11VIDEODEVICE_H