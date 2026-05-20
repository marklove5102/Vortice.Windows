// Copyright (c) Contributors.

#ifndef VORTICE_BORDER_H
#define VORTICE_BORDER_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Border : public : ID2D1Effect
            {
                public Border(ID2D1DeviceContext context)
                   : base(context.CreateEffect(EffectGuids.Border))
                {
                }

                public Border(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Border))
                {
                }

                public BorderEdgeMode EdgeModeX
                {
                    set => SetValue((int)BorderProperties.EdgeModeX, value);
                    get => GetEnumValue<BorderEdgeMode>((int)BorderProperties.EdgeModeX);
                }

                public BorderEdgeMode EdgeModeY
                {
                    set => SetValue((int)BorderProperties.EdgeModeY, value);
                    get => GetEnumValue<BorderEdgeMode>((int)BorderProperties.EdgeModeY);
                }
            }


        }
    }
}

#endif // VORTICE_BORDER_H