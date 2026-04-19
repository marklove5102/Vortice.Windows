// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_ID3D11VIDEODEVICE_H
#define VORTICE_DIRECT3D11_ID3D11VIDEODEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID3D11VIDEODEVICE_H
#define VORTICE_VORTICE_ID3D11VIDEODEVICE_H

#include <cstdint>

namespace Vortice {

class ID3D11VideoDevice
{
public:
    ~ID3D11VideoDevice() = default;

    GUID CheckCryptoKeyExchange() { CheckCryptoKeyExchange(cryptoType, decoderProfile, index, out Guid keyExchangeType).CheckError();
        return keyExchangeType; }

    bool CheckVideoDecoderFormat() { CheckVideoDecoderFormat(decoderProfile, format, out RawBool supported).CheckError();
        return supported; }

    ID3D11AuthenticatedChannel CreateAuthenticatedChannel() { CreateAuthenticatedChannel(channelType, out ID3D11AuthenticatedChannel authenticatedChannel).CheckError();
        return authenticatedChannel; }

    ID3D11CryptoSession CreateCryptoSession() { CreateCryptoSession(cryptoType, decoderProfile, keyExchangeType, out ID3D11CryptoSession cryptoSession).CheckError();
        return cryptoSession; }

    ID3D11VideoDecoder CreateVideoDecoder() { CreateVideoDecoder(description, config, out ID3D11VideoDecoder decoder).CheckError();
        return decoder; }

    ID3D11VideoDecoderOutputView CreateVideoDecoderOutputView() { CreateVideoDecoderOutputView(resource, description, out ID3D11VideoDecoderOutputView view).CheckError();
        return view; }

    ID3D11VideoProcessor CreateVideoProcessor() { CreateVideoProcessor(enumerator, rateConversionIndex, out ID3D11VideoProcessor videoProcessor).CheckError();
        return videoProcessor; }

    ID3D11VideoProcessorEnumerator CreateVideoProcessorEnumerator() { CreateVideoProcessorEnumerator(ref description, out ID3D11VideoProcessorEnumerator enumerator).CheckError();
        return enumerator; }

    HRESULT CreateVideoProcessorEnumerator() { return CreateVideoProcessorEnumerator(ref description, out enumerator); }

    ID3D11VideoProcessorInputView CreateVideoProcessorInputView() { CreateVideoProcessorInputView(resource, enumerator, description, out ID3D11VideoProcessorInputView view).CheckError();
        return view; }

    ID3D11VideoProcessorOutputView CreateVideoProcessorOutputView() { CreateVideoProcessorOutputView(resource, enumerator, description, out ID3D11VideoProcessorOutputView view).CheckError();
        return view; }

    VideoContentProtectionCaps GetContentProtectionCaps() { GetContentProtectionCaps(cryptoType, decoderProfile, out VideoContentProtectionCaps caps).CheckError();
        return caps; }

    VideoDecoderConfig GetVideoDecoderConfig() { GetVideoDecoderConfig(ref description, index, out VideoDecoderConfig config).CheckError();
        return config; }

    HRESULT GetVideoDecoderConfig() { return GetVideoDecoderConfig(ref description, index, out config); }

    uint32_t GetVideoDecoderConfigCount() { GetVideoDecoderConfigCount(ref description, out uint count).CheckError();
        return count; }

    HRESULT GetVideoDecoderConfigCount() { return GetVideoDecoderConfigCount(ref description, out count); }

    GUID GetVideoDecoderProfile() { GetVideoDecoderProfile(index, out Guid decoderProfile).CheckError();
        return decoderProfile; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID3D11VIDEODEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_ID3D11VIDEODEVICE_H
