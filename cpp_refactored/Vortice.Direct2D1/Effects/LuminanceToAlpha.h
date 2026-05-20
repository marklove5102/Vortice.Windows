// Copyright (c) Contributors.

#ifndef VORTICE_LUMINANCETOALPHA_H
#define VORTICE_LUMINANCETOALPHA_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class LuminanceToAlpha : public : ID2D1Effect
            {
                public LuminanceToAlpha(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.LuminanceToAlpha))
                {
                }

                public LuminanceToAlpha(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.LuminanceToAlpha))
                {
                }
            }


        }
    }
}

#endif // VORTICE_LUMINANCETOALPHA_H