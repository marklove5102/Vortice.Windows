// Copyright (c) Contributors.

#ifndef VORTICE_ARITHMETICCOMPOSITE_H
#define VORTICE_ARITHMETICCOMPOSITE_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class ArithmeticComposite : public : ID2D1Effect
            {
                public ArithmeticComposite(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.ArithmeticComposite))
                {
                }

                public ArithmeticComposite(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.ArithmeticComposite))
                {
                }

                public Vector4 Coefficients
                {
                    set => SetValue((int)ArithmeticCompositeProperties.Coefficients, value);
                    get => GetVector4Value((int)ArithmeticCompositeProperties.Coefficients);
                }

                public bool ClampOutput
                {
                    set => SetValue((int)ArithmeticCompositeProperties.ClampOutput, value);
                    get => GetBoolValue((int)ArithmeticCompositeProperties.ClampOutput);
                }
            }


        }
    }
}

#endif // VORTICE_ARITHMETICCOMPOSITE_H