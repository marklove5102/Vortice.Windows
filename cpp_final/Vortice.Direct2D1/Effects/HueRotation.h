// Copyright (c) Contributors.

#ifndef VORTICE_HUEROTATION_H
#define VORTICE_HUEROTATION_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class HueRotation : public : ID2D1Effect
            {
                public HueRotation(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.HueRotation))
                {
                }

                public HueRotation(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.HueRotation))
                {
                }

                public float Angle
                {
                    get => GetFloatValue((int)HueRotationProperties.Angle);
                    set => SetValue((int)HueRotationProperties.Angle, value);
                }
            }


        }
    }
}

#endif // VORTICE_HUEROTATION_H