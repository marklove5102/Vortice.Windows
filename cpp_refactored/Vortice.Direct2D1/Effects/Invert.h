// Copyright (c) Contributors.

#ifndef VORTICE_INVERT_H
#define VORTICE_INVERT_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Invert : public : ID2D1Effect
            {
                public Invert(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Invert))
                {
                }

                public Invert(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Invert))
                {
                }
            }


        }
    }
}

#endif // VORTICE_INVERT_H