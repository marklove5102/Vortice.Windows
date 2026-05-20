// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_SWAPCHAINDESCRIPTION1_H
#define VORTICE_SWAPCHAINDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicstruct SwapChainDescription1
        {
                                                                                                                                public SwapChainDescription1(uint32_t width, uint32_t height, Format format, bool stereo, Usage bufferUsage, uint32_t bufferCount, Scaling scaling, SwapEffect swapEffect, AlphaMode alphaMode, SwapChainFlags flags)
                {
                Width = width;
                Height = height;
                Format = format;
                Stereo = stereo;
                SampleDescription = SampleDescription.Default;
                BufferUsage = bufferUsage;
                BufferCount = bufferCount;
                Scaling = scaling;
                SwapEffect = swapEffect;
                AlphaMode = alphaMode;
                Flags = flags;
            }
        }

    }
}

#endif // VORTICE_SWAPCHAINDESCRIPTION1_H