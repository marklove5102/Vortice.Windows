// Copyright (c) Contributors.

#ifndef VORTICE_OPACITY_H
#define VORTICE_OPACITY_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Opacity : public : ID2D1Effect
            {
                public Opacity(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Opacity))
                {
                }

                public Opacity(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Opacity))
                {
                }

                public float Value
                {
                    get => GetFloatValue((int)OpacityProperties.Opacity);
                    set => SetValue((int)OpacityProperties.Opacity, value);
                }
            }


        }
    }
}

#endif // VORTICE_OPACITY_H