// Copyright (c) Contributors.

#ifndef VORTICE_CROP_H
#define VORTICE_CROP_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class Crop : public : ID2D1Effect
            {
                public Crop(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.Crop))
                {
                }

                public Crop(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.Crop))
                {
                }

                public Vector4 Rectangle
                {
                    set => SetValue((int)CropProperties.Rectangle, value);
                    get => GetVector4Value((int)CropProperties.Rectangle);
                }

                public BorderMode BorderMode
                {
                    set => SetValue((int)CropProperties.BorderMode, value);
                    get => GetEnumValue<BorderMode>((int)CropProperties.BorderMode);
                }
            }


        }
    }
}

#endif // VORTICE_CROP_H