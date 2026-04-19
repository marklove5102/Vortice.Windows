// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_WAVEFORMATADPCM_H
#define VORTICE_DIRECTX_WAVEFORMATADPCM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WAVEFORMATADPCM_H
#define VORTICE_VORTICE_WAVEFORMATADPCM_H

#include <cstdint>

namespace Vortice {

class WaveFormatAdpcm : public WaveFormat
{
public:
    constexpr WaveFormatAdpcm()
    {}

    constexpr WaveFormatAdpcm(int32_t rate, int32_t channels, int32_t 0)
    if (blockAlign == 0)
        {
            if (rate <= 11025)
                blockAlign = 256;
            else if (rate <= 22050)
                blockAlign = 512;
            else
                blockAlign = 1024;
        }

        if (rate <= 0)
            throw ArgumentOutOfRangeException("rate", "Must be > 0");
        if (channels <= 0)
            throw ArgumentOutOfRangeException("channels", "Must be > 0");
        if (blockAlign <= 0)
            throw ArgumentOutOfRangeException("blockAlign", "Must be > 0");
        if (blockAlign > short.MaxValue)
            throw ArgumentOutOfRangeException("blockAlign", "Must be < 32767");

        waveFormatTag = WaveFormatEncoding.Adpcm;
        this.blockAlign = (short)blockAlign;

        SamplesPerBlock = (ushort)(blockAlign * 2 / channels - 12);
        averageBytesPerSecond = (SampleRate * blockAlign) / SamplesPerBlock;

        // Default Microsoft ADPCM coefficients
        Coefficients1 = new short[] { 256, 512, 0, 192, 240, 460, 392 };
        Coefficients2 = new short[] { 0, -256, 0, 64, 0, -208, -232 };
        extraSize = 32;
    ~WaveFormatAdpcm() = default;

    uint16_t samplesPerBlock;
    uint16_t numberOfCoefficients;
    int16_t coefficients;

    uint16_t SamplesPerBlock{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WAVEFORMATADPCM_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    uint16_t samplesPerBlock;
    uint16_t numberOfCoefficients;
    int16_t coefficients;

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

} // namespace Vortice

#endif // VORTICE_DIRECTX_WAVEFORMATADPCM_H
