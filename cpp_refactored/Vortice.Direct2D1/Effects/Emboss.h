// Copyright (c) Contributors.

#ifndef VORTICE_EMBOSS_H
#define VORTICE_EMBOSS_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Emboss : public : ID2D1Effect
            {
                public Emboss(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.Emboss))
                {
                }

                public Emboss(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Emboss))
                {
                }

                public float Height
                {
                    get => GetFloatValue((int)EmbossProperties.Height);
                    set => SetValue((int)EmbossProperties.Height, value);
                }

                public float Direction
                {
                    get => GetFloatValue((int)EmbossProperties.Direction);
                    set => SetValue((int)EmbossProperties.Direction, value);
                }
            }


        }
    }
}

#endif // VORTICE_EMBOSS_H