// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDEVICE2_H
#define VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDEVICE2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDCOMPOSITIONDEVICE2_H
#define VORTICE_VORTICE_IDCOMPOSITIONDEVICE2_H

#include <cstdint>

namespace Vortice {

class IDCompositionDevice2
{
public:
    ~IDCompositionDevice2() = default;

    IDCompositionAnimation CreateAnimation() { CreateAnimation(out IDCompositionAnimation animation).CheckError();
        return animation; }

    IDCompositionEffectGroup CreateEffectGroup() { CreateEffectGroup(out IDCompositionEffectGroup effectGroup).CheckError();
        return effectGroup; }

    IDCompositionMatrixTransform CreateMatrixTransform() { CreateMatrixTransform(out IDCompositionMatrixTransform matrixTransform).CheckError();
        return matrixTransform; }

    IDCompositionMatrixTransform3D CreateMatrixTransform3D() { CreateMatrixTransform3D(out IDCompositionMatrixTransform3D matrixTransform).CheckError();
        return matrixTransform; }

    IDCompositionRectangleClip CreateRectangleClip() { CreateRectangleClip(out IDCompositionRectangleClip clip).CheckError();
        return clip; }

    IDCompositionRotateTransform CreateRotateTransform() { CreateRotateTransform(out IDCompositionRotateTransform rotateTransform).CheckError();
        return rotateTransform; }

    IDCompositionRotateTransform3D CreateRotateTransform3D() { CreateRotateTransform3D(out IDCompositionRotateTransform3D rotateTransform).CheckError();
        return rotateTransform; }

    IDCompositionScaleTransform CreateScaleTransform() { CreateScaleTransform(out IDCompositionScaleTransform scaleTransform).CheckError();
        return scaleTransform; }

    IDCompositionScaleTransform3D CreateScaleTransform3D() { CreateScaleTransform3D(out IDCompositionScaleTransform3D scaleTransform).CheckError();
        return scaleTransform; }

    IDCompositionSkewTransform CreateSkewTransform() { CreateSkewTransform(out IDCompositionSkewTransform skewTransform).CheckError();
        return skewTransform; }

    IDCompositionSurface CreateSurface() { CreateSurface(width, height, pixelFormat, alphaMode, out IDCompositionSurface surface).CheckError();
        return surface; }

    IDCompositionSurfaceFactory CreateSurfaceFactory() { CreateSurfaceFactory(renderingDevice, out IDCompositionSurfaceFactory surfaceFactory).CheckError();
        return surfaceFactory; }

    IDCompositionTransform CreateTransformGroup() { CreateTransformGroup(transforms, (uint)transforms.Length, out IDCompositionTransform transformGroup).CheckError();
        return transformGroup; }

    IDCompositionTransform CreateTransformGroup() { CreateTransformGroup(transforms, count, out IDCompositionTransform transformGroup).CheckError();
        return transformGroup; }

    IDCompositionTransform3D CreateTransform3DGroup() { CreateTransform3DGroup(transforms3D, (uint)transforms3D.Length, out IDCompositionTransform3D transform3DGroup).CheckError();
        return transform3DGroup; }

    IDCompositionTransform3D CreateTransform3DGroup() { CreateTransform3DGroup(transforms3D, count, out IDCompositionTransform3D transform3DGroup).CheckError();
        return transform3DGroup; }

    IDCompositionTranslateTransform CreateTranslateTransform() { CreateTranslateTransform(out IDCompositionTranslateTransform translateTransform).CheckError();
        return translateTransform; }

    IDCompositionTranslateTransform3D CreateTranslateTransform3D() { CreateTranslateTransform3D(out IDCompositionTranslateTransform3D translateTransform).CheckError();
        return translateTransform; }

    IDCompositionVisual2 CreateVisual() { CreateVisual(out IDCompositionVisual2 visual).CheckError();
        return visual; }

    IDCompositionVirtualSurface CreateVirtualSurface() { CreateVirtualSurface(initialWidth, initialHeight, pixelFormat, alphaMode, out IDCompositionVirtualSurface virtualSurface).CheckError();
        return virtualSurface; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDCOMPOSITIONDEVICE2_H

} // namespace Vortice

#endif // VORTICE_DIRECTCOMPOSITION_IDCOMPOSITIONDEVICE2_H
