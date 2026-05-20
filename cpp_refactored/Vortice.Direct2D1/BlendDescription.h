// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BLENDDESCRIPTION_H
#define VORTICE_BLENDDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {

        namespace Vortice.Direct2D1;

        struct BlendDescription
        {
                        public static BlendDescription get_Opaque() const { return new(Blend.One, Blend.Zero); }

                        public static BlendDescription get_AlphaBlend() const { return new(Blend.One, Blend.InverseSourceAlpha); }

                        public static BlendDescription get_Additive() const { return new(Blend.SourceAlpha, Blend.One); }

                        public static BlendDescription get_NonPremultiplied() const { return new(Blend.SourceAlpha, Blend.InverseSourceAlpha); }

                                public BlendDescription(Blend sourceBlend, Blend destinationBlend)
                : this(sourceBlend, destinationBlend, sourceBlend, destinationBlend)
            {
            }

                                        public BlendDescription(Blend sourceBlend, Blend destinationBlend, Blend sourceBlendAlpha, Blend destinationBlendAlpha)
        {
                SourceBlend = sourceBlend;
                DestinationBlend = destinationBlend;
                BlendOperation = BlendOperation.Add;
                SourceBlendAlpha = sourceBlendAlpha;
                DestinationBlendAlpha = destinationBlendAlpha;
                BlendOperationAlpha = BlendOperation.Add;
                BlendFactor = default;
            }

                                                public BlendDescription(Blend sourceBlend, Blend destinationBlend, BlendOperation blendOperation, Blend sourceBlendAlpha, Blend destinationBlendAlpha, BlendOperation blendOperationAlpha)
        {
                SourceBlend = sourceBlend;
                DestinationBlend = destinationBlend;
                BlendOperation = blendOperation;
                SourceBlendAlpha = sourceBlendAlpha;
                DestinationBlendAlpha = destinationBlendAlpha;
                BlendOperationAlpha = blendOperationAlpha;
                BlendFactor = new Color4(1::0f param, 1::0f param, 1::0f param, 1::0f param) = 0;
            }

                                                    public BlendDescription(Blend sourceBlend, Blend destinationBlend, BlendOperation blendOperation, Blend sourceBlendAlpha, Blend destinationBlendAlpha, BlendOperation blendOperationAlpha, const Color4& blendFactor)
        {
                SourceBlend = sourceBlend;
                DestinationBlend = destinationBlend;
                BlendOperation = blendOperation;
                SourceBlendAlpha = sourceBlendAlpha;
                DestinationBlendAlpha = destinationBlendAlpha;
                BlendOperationAlpha = blendOperationAlpha;
                BlendFactor = blendFactor;
            }
        }


    }
}

#endif // VORTICE_BLENDDESCRIPTION_H