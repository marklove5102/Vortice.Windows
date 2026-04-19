// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONSURFACEFACTORY_H
#define VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONSURFACEFACTORY_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDCOMPOSITIONSURFACEFACTORY_H
#define VORTICE_VORTICE_IDCOMPOSITIONSURFACEFACTORY_H

#include <cstdint>

namespace Vortice {

class IDCompositionSurfaceFactory
{
public:
    ~IDCompositionSurfaceFactory() = default;

    IDCompositionSurface CreateSurface() { CreateSurface(width, height, pixelFormat, alphaMode, out IDCompositionSurface surface).CheckError();
        return surface; }

    IDCompositionVirtualSurface CreateVirtualSurface() { CreateVirtualSurface(initialWidth, initialHeight, pixelFormat, alphaMode, out IDCompositionVirtualSurface virtualSurface).CheckError();
        return virtualSurface; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDCOMPOSITIONSURFACEFACTORY_H

} // namespace Vortice

#endif // VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONSURFACEFACTORY_H
