// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_WAVEFORMAT_H
#define VORTICE_DIRECTX_WAVEFORMAT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WAVEFORMAT_H
#define VORTICE_VORTICE_WAVEFORMAT_H

#include <cstdint>

namespace Vortice {

class WaveFormat
{
public:
    constexpr WaveFormat()
    {}

    constexpr WaveFormat(int32_t sampleRate, int32_t channels)
    {}

    constexpr WaveFormat(int32_t rate, int32_t bits, int32_t channels)
    if (channels < 1)
        {
            throw ArgumentOutOfRangeException("channels", "Channels must be 1 or greater");
        }

        // minimum 16 bytes, sometimes 18 for PCM
        waveFormatTag = bits < 32 ? WaveFormatEncoding.Pcm : WaveFormatEncoding.IeeeFloat;
        this.channels = (short)channels;
        sampleRate = rate;
        bitsPerSample = (short)bits;
        extraSize = 0;

        blockAlign = (short)(channels * (bits / 8));
        averageBytesPerSecond = sampleRate * blockAlign;
    constexpr WaveFormat(int32_t sampleRate, int32_t channels)
    WaveFormat format = new()
        {
            waveFormatTag = WaveFormatEncoding.IeeeFloat,
            channels = (short)channels,
            bitsPerSample = 32,
            sampleRate = sampleRate,
            blockAlign = (short)(4 * channels),
            averageBytesPerSecond = sampleRate * channels * 4,
            extraSize = 0,
        };

        return format;
    constexpr WaveFormat(BinaryReader reader)
    int formatChunkLength = reader.ReadInt32();
        ReadWaveFormat(reader, formatChunkLength);
    ~WaveFormat() = default;

    __PcmNative pcmWaveFormat;
    int16_t extraSize;
    WaveFormatEncoding waveFormatTag;
    int16_t channels;
    int32_t sampleRate;
    int32_t averageBytesPerSecond;
    int16_t blockAlign;
    int16_t bitsPerSample;

    WaveFormatEncoding get_Encoding() const { return waveFormatTag; }
    int32_t get_Channels() const { return channels; }
    int32_t get_SampleRate() const { return sampleRate; }
    int32_t get_AverageBytesPerSecond() const { return averageBytesPerSecond; }
    int32_t get_BlockAlign() const { return blockAlign; }
    int32_t get_BitsPerSample() const { return bitsPerSample; }
    int32_t get_ExtraSize() const { return extraSize; }

    static WaveFormat CreateALawFormat() { return CreateCustomFormat(WaveFormatEncoding.ALaw, sampleRate, channels, sampleRate * channels, channels, 8); }

    static WaveFormat CreateMuLawFormat() { return CreateCustomFormat(WaveFormatEncoding.MuLaw, sampleRate, channels, sampleRate * channels, channels, 8); }

    bool Equals() override { if (dynamic_cast<not>(obj) != nullptr WaveFormat)
            return false;

        WaveFormat other = (WaveFormat)obj;
        return waveFormatTag == other.waveFormatTag &&
            channels == other.channels &&
            sampleRate == other.sampleRate &&
            averageBytesPerSecond == other.averageBytesPerSecond &&
            blockAlign == other.blockAlign &&
            bitsPerSample == other.bitsPerSample; }

    int32_t GetHashCode() override { return (int)waveFormatTag ^
            (int)channels ^
            sampleRate ^
            averageBytesPerSecond ^
            (int)blockAlign ^
            (int)bitsPerSample; }


private:
    WaveFormatEncoding waveFormatTag;
    int16_t channels;
    int32_t sampleRate;
    int32_t averageBytesPerSecond;
    int16_t blockAlign;
    int16_t bitsPerSample;
    int16_t extraSize;
    struct __Native_value{};
    struct __PcmNative_value{};
};

} // namespace Vortice

#endif // VORTICE_VORTICE_WAVEFORMAT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    __PcmNative pcmWaveFormat;
    int16_t extraSize;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INTERNAL_H
#define VORTICE_VORTICE_INTERNAL_H

#include <cstdint>

namespace Vortice {

struct internal
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INTERNAL_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___PCMNATIVE_H
#define VORTICE_VORTICE___PCMNATIVE_H

#include <cstdint>

namespace Vortice {

struct __PcmNative
{
public:
    WaveFormatEncoding waveFormatTag;
    int16_t channels;
    int32_t sampleRate;
    int32_t averageBytesPerSecond;
    int16_t blockAlign;
    int16_t bitsPerSample;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___PCMNATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INTERNAL_H
#define VORTICE_VORTICE_INTERNAL_H

#include <cstdint>

namespace Vortice {

struct internal
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INTERNAL_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_WAVEFORMAT_H
