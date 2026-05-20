// Copyright (c) Contributors.

#ifndef VORTICE_TEMPERATUREANDTINT_H
#define VORTICE_TEMPERATUREANDTINT_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class TemperatureAndTint : public : ID2D1Effect
            {
                public TemperatureAndTint(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.TemperatureTint))
                {
                }

                public TemperatureAndTint(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.TemperatureTint))
                {
                }

                public float Temperature
                {
                    get => GetFloatValue((int)TemperatureAndTintProperties.Temperature);
                    set => SetValue((int)TemperatureAndTintProperties.Temperature, value);
                }

                public float Tint
                {
                    get => GetFloatValue((int)TemperatureAndTintProperties.Tint);
                    set => SetValue((int)TemperatureAndTintProperties.Tint, value);
                }
            }


        }
    }
}

#endif // VORTICE_TEMPERATUREANDTINT_H