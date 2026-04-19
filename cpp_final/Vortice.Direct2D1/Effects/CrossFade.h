// Copyright (c) Contributors.

#ifndef VORTICE_CROSSFADE_H
#define VORTICE_CROSSFADE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class CrossFade : public : ID2D1Effect
            {
                public CrossFade(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.CrossFade))
                {
                }

                public CrossFade(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.CrossFade))
                {
                }

                public float Weight
                {
                    set => SetValue((int)CrossFadeProperties.Weight, value);
                    get => GetFloatValue((int)CrossFadeProperties.Weight);
                }
            }


        }
    }
}

#endif // VORTICE_CROSSFADE_H