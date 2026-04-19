// Copyright (c) Contributors.

#ifndef VORTICE_BRIGHTNESS_H
#define VORTICE_BRIGHTNESS_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Brightness : public : ID2D1Effect
            {
                public Brightness(ID2D1DeviceContext context)
                   : base(context.CreateEffect(EffectGuids.Brightness))
                {
                }

                public Brightness(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Brightness))
                {
                }

                public Vector2 WhitePoint
                {
                    set => SetValue((int)BrightnessProperties.WhitePoint, value);
                    get => GetVector2Value((int)BrightnessProperties.WhitePoint);
                }

                public Vector2 BlackPoint
                {
                    set => SetValue((int)BrightnessProperties.BlackPoint, value);
                    get => GetVector2Value((int)BrightnessProperties.BlackPoint);
                }
            }


        }
    }
}

#endif // VORTICE_BRIGHTNESS_H