// Copyright (c) Contributors.

#ifndef VORTICE_ALPHAMASK_H
#define VORTICE_ALPHAMASK_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class AlphaMask : public : ID2D1Effect
            {
                public AlphaMask(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.AlphaMask))
                {
                }

                public AlphaMask(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.AlphaMask))
                {
                }
            }


        }
    }
}

#endif // VORTICE_ALPHAMASK_H