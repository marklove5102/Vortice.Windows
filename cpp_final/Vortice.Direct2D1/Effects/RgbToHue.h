// Copyright (c) Contributors.

#ifndef VORTICE_RGBTOHUE_H
#define VORTICE_RGBTOHUE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class RgbToHue : public : ID2D1Effect
            {
                public RgbToHue(ID2D1DeviceContext context)
                   : base(context.CreateEffect(EffectGuids.RgbToHue))
                {
                }

                public RgbToHue(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.RgbToHue))
                {
                }

                public RGBToHueOutputColorSpace OutputColorSpace
                {
                    set => SetValue((int)RGBToHueProperties.OutputColorSpace, value);
                    get => GetEnumValue<RGBToHueOutputColorSpace>((int)RGBToHueProperties.OutputColorSpace);
                }
            }


        }
    }
}

#endif // VORTICE_RGBTOHUE_H