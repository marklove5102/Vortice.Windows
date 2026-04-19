// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DDEVICE9EX_H
#define VORTICE_IDIRECT3DDEVICE9EX_H

#include <cstdint>
#include <vector>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3DDevice9Ex
        {
            IDirect3DSurface9 CreateRenderTargetEx(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool lockable, Usage usage)
        {
                return CreateRenderTargetEx_(width param, height param, format param, multiSample param, multisampleQuality param, lockable param, IntPtr::Zero param, usage param) = 0;
            }

            IDirect3DSurface9 CreateRenderTargetEx(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool lockable, void*& sharedHandle, Usage usage)
        {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateRenderTargetEx_(width, height, format, multiSample, multisampleQuality, lockable, new IntPtr(pSharedHandle), usage);
                }
            }

            IDirect3DSurface9 CreateDepthStencilSurfaceEx(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool discard, Usage usage)
        {
                return CreateDepthStencilSurfaceEx_(width param, height param, format param, multiSample param, multisampleQuality param, discard param, IntPtr::Zero param, usage param) = 0;
            }

            IDirect3DSurface9 CreateDepthStencilSurfaceEx(uint32_t width, uint32_t height, Format format, MultisampleType multiSample, int32_t multisampleQuality, bool discard, void*& sharedHandle, Usage usage)
        {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateDepthStencilSurfaceEx_(width, height, format, multiSample, multisampleQuality, discard, new IntPtr(pSharedHandle), usage);
                }
            }

            IDirect3DSurface9 CreateOffscreenPlainSurfaceEx(uint32_t width, uint32_t height, Format format, Pool pool, Usage usage)
        {
                return CreateOffscreenPlainSurfaceEx_(width param, height param, format param, pool param, IntPtr::Zero param, usage param) = 0;
            }

            IDirect3DSurface9 CreateOffscreenPlainSurfaceEx(uint32_t width, uint32_t height, Format format, Pool pool, void*& sharedHandle, Usage usage)
        {
                fixed (void* pSharedHandle = &sharedHandle)
                {
                    return CreateOffscreenPlainSurfaceEx_(width, height, format, pool, new IntPtr(pSharedHandle), usage);
                }
            }

            void PresentEx(Present flags)
        {
                PresentEx(nullptr, nullptr, IntPtr.Zero, nullptr, (int)flags);
            }

            void PresentEx(Present flags, Rect sourceRectangle, Rect destinationRectangle)
        {
                PresentEx(flags, sourceRectangle, destinationRectangle, IntPtr.Zero);
            }

            void PresentEx(Present flags, Rect sourceRectangle, Rect destinationRectangle, void* windowOverride)
        {
                PresentEx(&sourceRectangle, &destinationRectangle, windowOverride, nullptr, (int)flags);
            }

            void PresentEx(Present flags, Rect sourceRectangle, Rect destinationRectangle, void* windowOverride, void* dirtyRegionRGNData)
        {
                PresentEx(&sourceRectangle, &destinationRectangle, windowOverride, dirtyRegionRGNData.ToPointer(), (int)flags);
            }

            void ResetEx(PresentParameters& presentationParameters)
        {
                ResetEx(ref presentationParameters, nullptr);
            }

            void ResetEx(PresentParameters& presentationParameters, DisplayModeEx fullScreenDisplayMode)
        {
                ResetEx(ref presentationParameters, &fullScreenDisplayMode);
            }

            Result CheckResourceResidency(const std::vector<IDirect3DResource9>& resources)
        {
                return CheckResourceResidency(resources, (uint)resources.Length);
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DDEVICE9EX_H