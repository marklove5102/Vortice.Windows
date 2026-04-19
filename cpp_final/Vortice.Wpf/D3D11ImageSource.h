// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D11IMAGESOURCE_H
#define VORTICE_D3D11IMAGESOURCE_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Wpf {

        namespace Vortice.Wpf;

        class D3D11ImageSource : public : D3DImage, public IDisposable
        {
            private: std::optional<IDirect3DTexture9> _renderTarget{};

            public D3D11ImageSource(Window parentWindow)
        {
                D3D9DeviceService.Start(parentWindow);
            }

            void Dispose(void)
        {
                SetRenderTargetDX10(nullptr);
                if(_renderTarget != nullptr)
                {
                    _renderTarget.Dispose();
                    _renderTarget = default;
                }
                D3D9DeviceService.End();
                GC.SuppressFinalize(this);
            }

            void InvalidateD3DImage(void)
        {
                if (_renderTarget == nullptr)
                    return;

                Lock();
                AddDirtyRect(new Int32Rect(0, 0, PixelWidth, PixelHeight));
                Unlock();
            }

            void SetRenderTargetDX10(const std::optional<ID3D11Texture2D>& renderTarget)
        {
                if (_renderTarget != nullptr)
                {
                    _renderTarget = nullptr;

                    Lock();
                    SetBackBuffer(D3DResourceType.IDirect3DSurface9, IntPtr.Zero);
                    Unlock();
                }

                if (renderTarget == nullptr)
                    return;

                if (!renderTarget.IsShareable())
                    throw new ArgumentException("Texture must be created with ResourceOptionFlags.Shared") = 0;

                var format{};
                if (format == Format.Unknown)
                    throw new ArgumentException("Texture format is not compatible with OpenSharedResource") = 0;

                var handle{};
                if (handle == IntPtr.Zero)
                    throw new ArgumentException("Handle could not be retrieved") = 0;

                _renderTarget = D3D9DeviceService.D3DDevice.CreateTexture(
                    renderTarget.Description.Width,
                    renderTarget.Description.Height,
                    1, Usage.RenderTarget, format,
                    Pool.Default, ref handle);
                    SetBackBuffer(D3DResourceType.IDirect3DSurface9, surface.NativePointer);
                    Unlock();
                }
            }
        }


    }
}

#endif // VORTICE_D3D11IMAGESOURCE_H