// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONSURFACEFACTORY_H
#define VORTICE_IDCOMPOSITIONSURFACEFACTORY_H

#include <cstdint>

namespace Vortice {
namespace DirectComposition {

        namespace Vortice.DirectComposition;

        class IDCompositionSurfaceFactory
        {
            IDCompositionSurface CreateSurface(uint32_t width, uint32_t height, Format pixelFormat, AlphaMode alphaMode)
        {
                CreateSurface(width, height, pixelFormat, alphaMode, out IDCompositionSurface surface).CheckError();
                return surface{};
            }

            IDCompositionVirtualSurface CreateVirtualSurface(uint32_t initialWidth, uint32_t initialHeight, Format pixelFormat, AlphaMode alphaMode)
        {
                CreateVirtualSurface(initialWidth, initialHeight, pixelFormat, alphaMode, out IDCompositionVirtualSurface virtualSurface).CheckError();
                return virtualSurface{};
            }
        }


    }
}

#endif // VORTICE_IDCOMPOSITIONSURFACEFACTORY_H