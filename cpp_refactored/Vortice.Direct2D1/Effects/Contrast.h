// Copyright (c) Contributors.

#ifndef VORTICE_CONTRAST_H
#define VORTICE_CONTRAST_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Contrast : public : ID2D1Effect
            {
                public Contrast(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Contrast))
                {
                }

                public Contrast(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Contrast))
                {
                }

                public float Value
                {
                    set => SetValue((int)ContrastProperties.Contrast, value);
                    get => GetFloatValue((int)ContrastProperties.Contrast);
                }

                public bool ClampInput
                {
                    set => SetValue((int)ContrastProperties.ClampInput, value);
                    get => GetBoolValue((int)ContrastProperties.ClampInput);
                }
            }


        }
    }
}

#endif // VORTICE_CONTRAST_H