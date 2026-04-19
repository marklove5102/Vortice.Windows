// Copyright (c) Contributors.

#ifndef VORTICE_TINT_H
#define VORTICE_TINT_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Tint : public : ID2D1Effect
            {
                public Tint(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Tint))
                {
                }

                public Tint(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Tint))
                {
                }

                public Vector4 Color
                {
                    set => SetValue((int)TintProperties.Color, value);
                    get => GetVector4Value((int)TintProperties.Color);
                }

                public bool ClampOutput
                {
                    set => SetValue((int)TintProperties.ClampOutput, value);
                    get => GetBoolValue((int)TintProperties.ClampOutput);
                }
            }


        }
    }
}

#endif // VORTICE_TINT_H