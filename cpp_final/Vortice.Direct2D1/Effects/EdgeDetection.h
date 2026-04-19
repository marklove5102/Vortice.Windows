// Copyright (c) Contributors.

#ifndef VORTICE_EDGEDETECTION_H
#define VORTICE_EDGEDETECTION_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
            namespace Vortice.Direct2D1.Effects;

            class EdgeDetection : public : ID2D1Effect
            {
                public EdgeDetection(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.EdgeDetection))
                {
                }

                public EdgeDetection(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.EdgeDetection))
                {
                }

                public float Strength
                {
                    get => GetFloatValue((int)EdgeDetectionProperties.Strength);
                    set => SetValue((int)EdgeDetectionProperties.Strength, value);
                }

                public float BlurRadius
                {
                    get => GetFloatValue((int)EdgeDetectionProperties.BlurRadius);
                    set => SetValue((int)EdgeDetectionProperties.BlurRadius, value);
                }

                public EdgeDetectionMode Mode
                {
                    get => GetEnumValue<EdgeDetectionMode>((int)EdgeDetectionProperties.Mode);
                    set => SetValue((int)EdgeDetectionProperties.Mode, value);
                }

                public bool OverlayEdges
                {
                    get => GetBoolValue((int)EdgeDetectionProperties.OverlayEdges);
                    set => SetValue((int)EdgeDetectionProperties.OverlayEdges, value);
                }

                public AlphaMode AlphaMode
                {
                    get => GetEnumValue<AlphaMode>((int)EdgeDetectionProperties.AlphaMode);
                    set => SetValue((int)EdgeDetectionProperties.AlphaMode, value);
                }
            }


        }
    }
}

#endif // VORTICE_EDGEDETECTION_H