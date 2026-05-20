// Copyright (c) Contributors.

#ifndef VORTICE_UNPREMULTIPLY_H
#define VORTICE_UNPREMULTIPLY_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Unpremultiply : public : ID2D1Effect
            {
                public Unpremultiply(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.UnPremultiply))
                {
                }

                public Unpremultiply(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.UnPremultiply))
                {
                }
            }


        }
    }
}

#endif // VORTICE_UNPREMULTIPLY_H