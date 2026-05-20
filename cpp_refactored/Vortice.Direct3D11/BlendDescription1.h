// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BLENDDESCRIPTION1_H
#define VORTICE_BLENDDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {


        namespace Vortice.Direct3D11;

        struct BlendDescription1
        {
                        public static BlendDescription1 get_Opaque() const { return new(Blend.One, Blend.Zero); }

                        public static BlendDescription1 get_AlphaBlend() const { return new(Blend.One, Blend.InverseSourceAlpha); }

                        public static BlendDescription1 get_Additive() const { return new(Blend.SourceAlpha, Blend.One); }
                        public static BlendDescription1 get_NonPremultiplied() const { return new(Blend.SourceAlpha, Blend.InverseSourceAlpha); }

                                public BlendDescription1(Blend sourceBlend, Blend destinationBlend)
                : this(sourceBlend, destinationBlend, sourceBlend, destinationBlend)
            {
            }

                                        public BlendDescription1(Blend sourceBlend, Blend destinationBlend, Blend srcBlendAlpha, Blend destBlendAlpha)
                : this()
            {
                AlphaToCoverageEnable = false;
                IndependentBlendEnable = false;

                for (int32_t i{}; i < ID3D11BlendState.SimultaneousRenderTargetCount; i++)
                {
                    RenderTarget.BlendEnable = IsBlendEnabled(ref RenderTarget);
                    RenderTarget.LogicOpEnable = false;
                    RenderTarget.SourceBlend = sourceBlend;
                    RenderTarget.DestinationBlend = destinationBlend;
                    RenderTarget.BlendOperation = BlendOperation.Add;
                    RenderTarget.SourceBlendAlpha = srcBlendAlpha;
                    RenderTarget.DestinationBlendAlpha = destBlendAlpha;
                    RenderTarget.BlendOperationAlpha = BlendOperation.Add;
                    RenderTarget.LogicOp = LogicOp.Noop;
                    RenderTarget.RenderTargetWriteMask = ColorWriteEnable.All;
                }
            }

            static bool IsBlendEnabled(RenderTargetBlendDescription1& renderTarget)
        {
                return renderTarget.BlendOperationAlpha != BlendOperation.Add
                        || renderTarget.SourceBlendAlpha != Blend.One
                        || renderTarget.DestinationBlendAlpha != Blend.Zero
                        || renderTarget.BlendOperation != BlendOperation.Add
                        || renderTarget.SourceBlend != Blend.One
                        || renderTarget.DestinationBlend != Blend.Zero;
            }
        }


    }
}

#endif // VORTICE_BLENDDESCRIPTION1_H