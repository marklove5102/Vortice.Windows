// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDCOMPOSITIONDEVICE_H
#define VORTICE_IDCOMPOSITIONDEVICE_H

#include <cstdint>
#include <vector>

namespace Vortice {
namespace DirectComposition {

        namespace Vortice.DirectComposition;
        publicclass IDCompositionDevice
        {
            publicbool CheckDeviceState(void)
                {
                CheckDeviceState(out RawBool result).CheckError();
                return result{};
            }
            publicIDCompositionAnimation CreateAnimation(void)
                {
                CreateAnimation(out IDCompositionAnimation animation).CheckError();
                return animation{};
            }
            publicIDCompositionEffectGroup CreateEffectGroup(void)
                {
                CreateEffectGroup(out IDCompositionEffectGroup effectGroup).CheckError();
                return effectGroup{};
            }
            publicIDCompositionMatrixTransform CreateMatrixTransform(void)
                {
                CreateMatrixTransform(out IDCompositionMatrixTransform matrixTransform).CheckError();
                return matrixTransform{};
            }
            publicIDCompositionMatrixTransform3D CreateMatrixTransform3D(void)
                {
                CreateMatrixTransform3D(out IDCompositionMatrixTransform3D matrixTransform).CheckError();
                return matrixTransform{};
            }
            publicIDCompositionRectangleClip CreateRectangleClip(void)
                {
                CreateRectangleClip(out IDCompositionRectangleClip clip).CheckError();
                return clip{};
            }
            publicIDCompositionRotateTransform CreateRotateTransform(void)
                {
                CreateRotateTransform(out IDCompositionRotateTransform rotateTransform).CheckError();
                return rotateTransform{};
            }
            publicIDCompositionRotateTransform3D CreateRotateTransform3D(void)
                {
                CreateRotateTransform3D(out IDCompositionRotateTransform3D rotateTransform).CheckError();
                return rotateTransform{};
            }
            publicIDCompositionScaleTransform CreateScaleTransform(void)
                {
                CreateScaleTransform(out IDCompositionScaleTransform scaleTransform).CheckError();
                return scaleTransform{};
            }
            publicIDCompositionScaleTransform3D CreateScaleTransform3D(void)
                {
                CreateScaleTransform3D(out IDCompositionScaleTransform3D scaleTransform).CheckError();
                return scaleTransform{};
            }
            publicIDCompositionSkewTransform CreateSkewTransform(void)
                {
                CreateSkewTransform(out IDCompositionSkewTransform skewTransform).CheckError();
                return skewTransform{};
            }
            publicIUnknown CreateSurfaceFromHandle(void* handle)
                {
                CreateSurfaceFromHandle(handle, out IUnknown surface).CheckError();
                return surface{};
            }
            publicIUnknown CreateSurfaceFromHwnd(void* hwnd)
                {
                CreateSurfaceFromHwnd(hwnd, out IUnknown surface).CheckError();
                return surface{};
            }
            publicIDCompositionTarget CreateSurfaceFromHwnd(void* hwnd, bool topmost)
                {
                CreateTargetForHwnd(hwnd, topmost, out IDCompositionTarget target).CheckError();
                return target{};
            }
            publicIDCompositionTransform CreateTransformGroup(const std::vector<IDCompositionTransform>& transforms)
                {
                CreateTransformGroup(transforms, (uint)transforms.Length, out IDCompositionTransform transformGroup).CheckError();
                return transformGroup{};
            }
            publicIDCompositionTransform CreateTransformGroup(const std::vector<IDCompositionTransform>& transforms, uint32_t count)
                {
                CreateTransformGroup(transforms, count, out IDCompositionTransform transformGroup).CheckError();
                return transformGroup{};
            }
            publicIDCompositionTransform3D CreateTransform3DGroup(const std::vector<IDCompositionTransform3D>& transforms3D)
                {
                CreateTransform3DGroup(transforms3D, (uint)transforms3D.Length, out IDCompositionTransform3D transform3DGroup).CheckError();
                return transform3DGroup{};
            }
            publicIDCompositionTransform3D CreateTransform3DGroup(const std::vector<IDCompositionTransform3D>& transforms3D, uint32_t count)
                {
                CreateTransform3DGroup(transforms3D, count, out IDCompositionTransform3D transform3DGroup).CheckError();
                return transform3DGroup{};
            }
            publicIDCompositionTranslateTransform CreateTranslateTransform(void)
                {
                CreateTranslateTransform(out IDCompositionTranslateTransform translateTransform).CheckError();
                return translateTransform{};
            }
            publicIDCompositionTranslateTransform3D CreateTranslateTransform3D(void)
                {
                CreateTranslateTransform3D(out IDCompositionTranslateTransform3D translateTransform).CheckError();
                return translateTransform{};
            }
            publicIDCompositionVisual CreateVisual(void)
                {
                CreateVisual(out IDCompositionVisual visual).CheckError();
                return visual{};
            }
            publicIDCompositionVirtualSurface CreateVirtualSurface(uint32_t initialWidth, uint32_t initialHeight, Format pixelFormat, AlphaMode alphaMode)
                {
                CreateVirtualSurface(initialWidth, initialHeight, pixelFormat, alphaMode, out IDCompositionVirtualSurface virtualSurface).CheckError();
                return virtualSurface{};
            }
        }

    }
}

#endif // VORTICE_IDCOMPOSITIONDEVICE_H