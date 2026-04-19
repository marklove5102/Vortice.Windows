// Copyright (c) Contributors.

#ifndef VORTICE_BLENDDESCRIPTION_H
#define VORTICE_BLENDDESCRIPTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        struct BlendDescription
        {
                public: RawBool AlphaToCoverageEnable{};

                public: RawBool IndependentBlendEnable{};

            	public: RenderTarget__FixedBuffer RenderTarget{};

                        public static BlendDescription get_Opaque() const { return new(Blend.One, Blend.Zero); }

                        public static BlendDescription get_AlphaBlend() const { return new(Blend.One, Blend.InverseSourceAlpha); }

                        public static BlendDescription get_Additive() const { return new(Blend.SourceAlpha, Blend.One); }

                        public static BlendDescription get_NonPremultiplied() const { return new(Blend.SourceAlpha, Blend.InverseSourceAlpha); }

                                public BlendDescription(Blend sourceBlend, Blend destinationBlend)
                : this(sourceBlend, destinationBlend, sourceBlend, destinationBlend)
            {
            }

                                        public BlendDescription(Blend sourceBlend, Blend destinationBlend, Blend srcBlendAlpha, Blend destBlendAlpha)
                : this()
            {
                AlphaToCoverageEnable = false;
                IndependentBlendEnable = false;

                for (int32_t i{}; i < D3D12.SimultaneousRenderTargetCount; i++)
                {
                    RenderTarget.BlendEnable = IsBlendEnabled(RenderTarget);
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

            static bool IsBlendEnabled(const RenderTargetBlendDescription& renderTarget)
        {
                return renderTarget.BlendOperationAlpha != BlendOperation.Add
                        || renderTarget.SourceBlendAlpha != Blend.One
                        || renderTarget.DestinationBlendAlpha != Blend.Zero
                        || renderTarget.BlendOperation != BlendOperation.Add
                        || renderTarget.SourceBlend != Blend.One
                        || renderTarget.DestinationBlend != Blend.Zero;
            }

            struct RenderTarget__FixedBuffer
        {
                public: RenderTargetBlendDescription e0{};
                public: RenderTargetBlendDescription e1{};
                public: RenderTargetBlendDescription e2{};
                public: RenderTargetBlendDescription e3{};
                public: RenderTargetBlendDescription e4{};
                public: RenderTargetBlendDescription e5{};
                public: RenderTargetBlendDescription e6{};
                public: RenderTargetBlendDescription e7{};

                public ref RenderTargetBlendDescription this{
                    [MethodImpl(MethodImplOptions.AggressiveInlining)]
                    get
                    {
                        return ref AsSpan(void) = 0;
                    }
                }

                [MethodImpl(MethodImplOptions.AggressiveInlining)]
                public Span<RenderTargetBlendDescription> AsSpan()
                {
                    return MemoryMarshal.CreateSpan(ref e0, 8);
                }
            }
        }


    }
}

#endif // VORTICE_BLENDDESCRIPTION_H