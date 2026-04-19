// Copyright (c) Contributors.

#ifndef VORTICE_OPACITYMETADATA_H
#define VORTICE_OPACITYMETADATA_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class OpacityMetadata : public : ID2D1Effect
            {
                public OpacityMetadata(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.OpacityMetadata))
                {
                }

                public OpacityMetadata(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.OpacityMetadata))
                {
                }

                public Vector4 InputOpaqueRectangle
                {
                    get => GetVector4Value((int)OpacityMetadataProperties.InputOpaqueRectangle);
                    set => SetValue((int)OpacityMetadataProperties.InputOpaqueRectangle, value);
                }
            }


        }
    }
}

#endif // VORTICE_OPACITYMETADATA_H