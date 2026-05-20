// Copyright (c) Contributors.

#ifndef VORTICE_GRAYSCALE_H
#define VORTICE_GRAYSCALE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Grayscale : public : ID2D1Effect
            {
                public Grayscale(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Grayscale))
                {
                }

                public Grayscale(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Grayscale))
                {
                }
            }


        }
    }
}

#endif // VORTICE_GRAYSCALE_H