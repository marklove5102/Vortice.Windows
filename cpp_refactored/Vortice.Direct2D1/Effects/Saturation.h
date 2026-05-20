// Copyright (c) Contributors.

#ifndef VORTICE_SATURATION_H
#define VORTICE_SATURATION_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;
            class Saturation : public : ID2D1Effect
            {
                public Saturation(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Saturation))
                {
                }

                public Saturation(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Saturation))
                {
                }

                public float Value
                {
                    set => SetValue((int)Props.Saturation, value);
                    get => GetFloatValue((int)Props.Saturation);
                }
            }


        }
    }
}

#endif // VORTICE_SATURATION_H