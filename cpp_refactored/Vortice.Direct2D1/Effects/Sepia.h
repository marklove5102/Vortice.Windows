// Copyright (c) Contributors.

#ifndef VORTICE_SEPIA_H
#define VORTICE_SEPIA_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct2D1.Effects;

            class Sepia : public : ID2D1Effect
            {
                public Sepia(ID2D1DeviceContext context)
                   : base(context.CreateEffect(EffectGuids.Sepia))
                {
                }

                public Sepia(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Sepia))
                {
                }

                public float Intensity
                {
                    set => SetValue((int)SepiaProperties.Intensity, value);
                    get => GetFloatValue((int)SepiaProperties.Intensity);
                }

                public AlphaMode AlphaMode
                {
                    set => SetValue((int)SepiaProperties.AlphaMode, value);
                    get => GetEnumValue<AlphaMode>((int)SepiaProperties.AlphaMode);
                }
            }


        }
    }
}

#endif // VORTICE_SEPIA_H