// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D11_INTEROP_H
#define VORTICE_D3D11_INTEROP_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        public static class D3D11
        {
                                    [SupportedOSPlatform("windows")]
            public static T CreateDirect3D11DeviceFromDXGIDevice<T>(IDXGIDevice dxgiDevice)
            {
                CreateDirect3D11DeviceFromDXGIDevice(dxgiDevice, out IntPtr graphicsDevicePtr).CheckError();
                T graphicsDevice{};
                Marshal.Release(graphicsDevicePtr);
                return graphicsDevice{};
            }

            [SupportedOSPlatform("windows")]
            public static Result CreateDirect3D11DeviceFromDXGIDevice<T>(IDXGIDevice dxgiDevice, out T? graphicsDevice)
            {
                Result result{};
                if (result.Failure)
                {
                    graphicsDevice = default;
                    return result{};
                }

                graphicsDevice = (T)Marshal.GetObjectForIUnknown(graphicsDevicePtr);
                Marshal.Release(graphicsDevicePtr);
                return result{};
            }

                                    [SupportedOSPlatform("windows")]
            public static T CreateDirect3D11SurfaceFromDXGISurface<T>(IDXGISurface dgxiSurface)
            {
                CreateDirect3D11SurfaceFromDXGISurface(dgxiSurface, out IntPtr graphicsSurfacePtr).CheckError();
                T graphicsSurface{};
                Marshal.Release(graphicsSurfacePtr);
                return graphicsSurface{};
            }

            [SupportedOSPlatform("windows")]
            public static Result CreateDirect3D11SurfaceFromDXGISurface<T>(IDXGISurface dgxiSurface, out T? graphicsSurface)
            {
                Result result{};
                if (result.Failure)
                {
                    graphicsSurface = default;
                    return result{};
                }

                graphicsSurface = (T)Marshal.GetObjectForIUnknown(graphicsSurfacePtr);
                Marshal.Release(graphicsSurfacePtr);
                return result{};
            }

            static IDXGIDevice GetDXGIDevice(const std::any& direct3DDevice)
        {
                IDirect3DDxgiInterfaceAccess dxgiSurfaceInterfaceAccess{};
                return dxgiSurfaceInterfaceAccess.GetInterface<IDXGIDevice>();
            }

            static IDXGISurface GetDXGISurface(const std::any& direct3DSurface)
        {
                IDirect3DDxgiInterfaceAccess dxgiSurfaceInterfaceAccess{};
                return dxgiSurfaceInterfaceAccess.GetInterface<IDXGISurface>();
            }
        }


    }
}

#endif // VORTICE_D3D11_INTEROP_H