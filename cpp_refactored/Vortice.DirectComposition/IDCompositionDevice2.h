// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONDEVICE2_H
#define VORTICE_IDCOMPOSITIONDEVICE2_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace DirectComposition {

        namespace Vortice.DirectComposition;

        class IDCompositionDevice2
        {
            IDCompositionAnimation CreateAnimation(void)
        {
                CreateAnimation(out IDCompositionAnimation animation).CheckError();
                return animation{};
            }

            IDCompositionEffectGroup CreateEffectGroup(void)
        {
                CreateEffectGroup(out IDCompositionEffectGroup effectGroup).CheckError();
                return effectGroup{};
            }

            IDCompositionMatrixTransform CreateMatrixTransform(void)
        {
                CreateMatrixTransform(out IDCompositionMatrixTransform matrixTransform).CheckError();
                return matrixTransform{};
            }

            IDCompositionMatrixTransform3D CreateMatrixTransform3D(void)
        {
                CreateMatrixTransform3D(out IDCompositionMatrixTransform3D matrixTransform).CheckError();
                return matrixTransform{};
            }

            IDCompositionRectangleClip CreateRectangleClip(void)
        {
                CreateRectangleClip(out IDCompositionRectangleClip clip).CheckError();
                return clip{};
            }

            IDCompositionRotateTransform CreateRotateTransform(void)
        {
                CreateRotateTransform(out IDCompositionRotateTransform rotateTransform).CheckError();
                return rotateTransform{};
            }

            IDCompositionRotateTransform3D CreateRotateTransform3D(void)
        {
                CreateRotateTransform3D(out IDCompositionRotateTransform3D rotateTransform).CheckError();
                return rotateTransform{};
            }

            IDCompositionScaleTransform CreateScaleTransform(void)
        {
                CreateScaleTransform(out IDCompositionScaleTransform scaleTransform).CheckError();
                return scaleTransform{};
            }

            IDCompositionScaleTransform3D CreateScaleTransform3D(void)
        {
                CreateScaleTransform3D(out IDCompositionScaleTransform3D scaleTransform).CheckError();
                return scaleTransform{};
            }

            IDCompositionSkewTransform CreateSkewTransform(void)
        {
                CreateSkewTransform(out IDCompositionSkewTransform skewTransform).CheckError();
                return skewTransform{};
            }

            IDCompositionSurface CreateSurface(uint32_t width, uint32_t height, Format pixelFormat, AlphaMode alphaMode)
        {
                CreateSurface(width, height, pixelFormat, alphaMode, out IDCompositionSurface surface).CheckError();
                return surface{};
            }

            IDCompositionSurfaceFactory CreateSurfaceFactory(IUnknown renderingDevice)
        {
                CreateSurfaceFactory(renderingDevice, out IDCompositionSurfaceFactory surfaceFactory).CheckError();
                return surfaceFactory{};
            }

            IDCompositionTransform CreateTransformGroup(const std::vector<IDCompositionTransform>& transforms)
        {
                CreateTransformGroup(transforms, (uint)transforms.Length, out IDCompositionTransform transformGroup).CheckError();
                return transformGroup{};
            }

            IDCompositionTransform CreateTransformGroup(const std::vector<IDCompositionTransform>& transforms, uint32_t count)
        {
                CreateTransformGroup(transforms, count, out IDCompositionTransform transformGroup).CheckError();
                return transformGroup{};
            }

            IDCompositionTransform3D CreateTransform3DGroup(const std::vector<IDCompositionTransform3D>& transforms3D)
        {
                CreateTransform3DGroup(transforms3D, (uint)transforms3D.Length, out IDCompositionTransform3D transform3DGroup).CheckError();
                return transform3DGroup{};
            }

            IDCompositionTransform3D CreateTransform3DGroup(const std::vector<IDCompositionTransform3D>& transforms3D, uint32_t count)
        {
                CreateTransform3DGroup(transforms3D, count, out IDCompositionTransform3D transform3DGroup).CheckError();
                return transform3DGroup{};
            }

            IDCompositionTranslateTransform CreateTranslateTransform(void)
        {
                CreateTranslateTransform(out IDCompositionTranslateTransform translateTransform).CheckError();
                return translateTransform{};
            }

            IDCompositionTranslateTransform3D CreateTranslateTransform3D(void)
        {
                CreateTranslateTransform3D(out IDCompositionTranslateTransform3D translateTransform).CheckError();
                return translateTransform{};
            }

            IDCompositionVisual2 CreateVisual(void)
        {
                CreateVisual(out IDCompositionVisual2 visual).CheckError();
                return visual{};
            }

            IDCompositionVirtualSurface CreateVirtualSurface(uint32_t initialWidth, uint32_t initialHeight, Format pixelFormat, AlphaMode alphaMode)
        {
                CreateVirtualSurface(initialWidth, initialHeight, pixelFormat, alphaMode, out IDCompositionVirtualSurface virtualSurface).CheckError();
                return virtualSurface{};
            }
        }


    }
}

#endif // VORTICE_IDCOMPOSITIONDEVICE2_H