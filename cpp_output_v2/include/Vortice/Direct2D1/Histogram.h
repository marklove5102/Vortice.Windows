// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_HISTOGRAM_H
#define VORTICE_DIRECT2D1_HISTOGRAM_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_HISTOGRAM_H
#define VORTICE_VORTICE_HISTOGRAM_H

#include <cstdint>

namespace Vortice {

class Histogram : public ID2D1Effect
{
public:
    constexpr Histogram(ID2D1DeviceContext context)
    {}

    constexpr Histogram(ID2D1EffectContext context)
    {}

    ~Histogram() = default;

    uint32_t get_NumBins() const { GetUIntValue((int)HistogramProperties.NumBins) }
    ChannelSelector get_ChannelSelect() const { GetEnumValue<ChannelSelector>((int)HistogramProperties.ChannelSelect) }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_HISTOGRAM_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_HISTOGRAM_H
