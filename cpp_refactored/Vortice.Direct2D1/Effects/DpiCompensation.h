// Copyright (c) Contributors.

#ifndef VORTICE_DPICOMPENSATION_H
#define VORTICE_DPICOMPENSATION_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class DpiCompensation : public : ID2D1Effect
            {
                public DpiCompensation(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.DpiCompensation))
                {
                }

                public DpiCompensation(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.DpiCompensation))
                {
                }

                public DpiCompensationInterpolationMode InterpolationMode
                {
                    get => GetEnumValue<DpiCompensationInterpolationMode>((int)DpiCompensationProperties.InterpolationMode);
                    set => SetValue((int)DpiCompensationProperties.InterpolationMode, value);
                }

                public BorderMode BorderMode
                {
                    get => GetEnumValue<BorderMode>((int)DpiCompensationProperties.BorderMode);
                    set => SetValue((int)DpiCompensationProperties.BorderMode, value);
                }

                public float InputDpi
                {
                    get => GetFloatValue((int)DpiCompensationProperties.InputDpi);
                    set => SetValue((int)DpiCompensationProperties.InputDpi, value);
                }
            }


        }
    }
}

#endif // VORTICE_DPICOMPENSATION_H