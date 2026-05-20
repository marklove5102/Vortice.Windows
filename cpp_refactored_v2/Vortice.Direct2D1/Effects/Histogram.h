// Copyright (c) Contributors.

#ifndef VORTICE_HISTOGRAM_H
#define VORTICE_HISTOGRAM_H

#include <cstdint>
#include <vector>
#include <span>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct2D1.Effects;
            publicclass Histogram : : ID2D1Effect
            {
                public Histogram(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Histogram))
                {
                }
                public Histogram(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Histogram))
                {
                }
                public uint NumBins
                {
                    get => GetUIntValue((int)HistogramProperties.NumBins);
                    set => SetValue((int)HistogramProperties.NumBins, value);
                }
                public ChannelSelector ChannelSelect
                {
                    get => GetEnumValue<ChannelSelector>((int)HistogramProperties.ChannelSelect);
                    set => SetValue((int)HistogramProperties.ChannelSelect, value);
                }
                publicvoid GetHistogramOutput(const std::vector<float>& output)
                    {
                    uint32_t numBins{};
                    if (output.Length < numBins)
                    {
                        throw new ArgumentOutOfRangeException(nameof(NumBins));
                    }
                    fixed (float* outputPtr = output)
                    {
                        GetValue((int)HistogramProperties.HistogramOutput, PropertyType.Blob, outputPtr, sizeof(float) * numBins);
                    }
                }
                publicvoid GetHistogramOutput(const std::span<float>& output)
                    {
                    uint32_t numBins{};
                    if (output.Length < numBins)
                    {
                        throw new ArgumentOutOfRangeException(nameof(NumBins));
                    }
                    fixed (float* outputPtr = output)
                    {
                        GetValue((int)HistogramProperties.HistogramOutput, PropertyType.Blob, outputPtr, sizeof(float) * numBins);
                    }
                }
            }

        }
    }
}

#endif // VORTICE_HISTOGRAM_H