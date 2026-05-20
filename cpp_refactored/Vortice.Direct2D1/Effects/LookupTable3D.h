// Copyright (c) Contributors.

#ifndef VORTICE_LOOKUPTABLE3D_H
#define VORTICE_LOOKUPTABLE3D_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct2D1.Effects;

            class LookupTable3D : public : ID2D1Effect
            {
                public LookupTable3D(ID2D1DeviceContext context)
                    : base(context.CreateEffect(EffectGuids.LookupTable3D))
                {
                }

                public LookupTable3D(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.LookupTable3D))
                {
                }

                public ID2D1LookupTable3D? LUT
                {
                    get => GetIUnknownValue<ID2D1LookupTable3D>((int)LookupTable3DProperties.Lut);
                    set => SetValue((int)LookupTable3DProperties.Lut, value);
                }

                public AlphaMode AlphaMode
                {
                    get => GetEnumValue<AlphaMode>((int)LookupTable3DProperties.Lut);
                    set => SetValue((int)LookupTable3DProperties.AlphaMode, value);
                }
            }


        }
    }
}

#endif // VORTICE_LOOKUPTABLE3D_H