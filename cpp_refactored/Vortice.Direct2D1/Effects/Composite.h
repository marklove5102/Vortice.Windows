// Copyright (c) Contributors.

#ifndef VORTICE_COMPOSITE_H
#define VORTICE_COMPOSITE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Composite : public : ID2D1Effect
            {
                public Composite(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Composite))
                {
                }

                public Composite(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Composite))
                {
                }

                public CompositeMode Mode
                {
                    set => SetValue((int)CompositeProperties.Mode, value);
                    get => GetEnumValue<CompositeMode>((int)CompositeProperties.Mode);
                }
            }


        }
    }
}

#endif // VORTICE_COMPOSITE_H