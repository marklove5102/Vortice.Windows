// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_WAVEFORMATEXTENSIBLE_H
#define VORTICE_DIRECTX_WAVEFORMATEXTENSIBLE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WAVEFORMATEXTENSIBLE_H
#define VORTICE_VORTICE_WAVEFORMATEXTENSIBLE_H

#include <cstdint>

namespace Vortice {

class WaveFormatExtensible : public WaveFormat
{
public:
    constexpr WaveFormatExtensible()
    {}

    constexpr WaveFormatExtensible(int32_t rate, int32_t bits, int32_t channels)
    waveFormatTag = WaveFormatEncoding.Extensible;
        extraSize = 22;
        _wValidBitsPerSample = (short)bits;
        int dwChannelMask = 0;
        for (int n = 0; n < channels; n++)
            dwChannelMask |= (1 << n);
        ChannelMask = dwChannelMask;

        // KSDATAFORMAT_SUBTYPE_IEEE_FLOAT // AudioMediaSubtypes.MEDIASUBTYPE_IEEE_FLOAT
        // KSDATAFORMAT_SUBTYPE_PCM // AudioMediaSubtypes.MEDIASUBTYPE_PCM;
        GuidSubFormat = bits == 32 ? new Guid("00000003-0000-0010-8000-00aa00389b71") : new Guid("00000001-0000-0010-8000-00aa00389b71");
    ~WaveFormatExtensible() = default;

    GUID GuidSubFormat;
    int32_t ChannelMask;
    int16_t wValidBitsPerSample;
    int32_t dwChannelMask;
    GUID subFormat;


private:
    int16_t _wValidBitsPerSample;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_WAVEFORMATEXTENSIBLE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    int16_t wValidBitsPerSample;
    int32_t dwChannelMask;
    GUID subFormat;

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

#ifndef VORTICE_VORTICE_TOT_H
#define VORTICE_VORTICE_TOT_H

#include <cstdint>

namespace Vortice {

struct tot
{
public:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_TOT_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_WAVEFORMATEXTENSIBLE_H
