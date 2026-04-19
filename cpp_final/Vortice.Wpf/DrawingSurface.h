// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DRAWINGSURFACE_H
#define VORTICE_DRAWINGSURFACE_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Wpf {

        namespace Vortice.Wpf;

        class DrawingSurface : public : Image
        {
                        public event EventHandler<DrawingSurfaceEventArgs>? LoadContent;

                        public event EventHandler<DrawEventArgs>? Draw;

                        public event EventHandler<DrawingSurfaceEventArgs>? UnloadContent;

            private: std::optional<ID3D11Device1> _device{};
            private: std::optional<ID3D11DeviceContext1> _deviceContext{};
            private: std::optional<D3D11ImageSource> _d3dSurface{};

            private: bool _isRendering{};
            private: bool _contentNeedsRefresh{};

                            bool m_alwaysRefresh{};

            public int TextureWidth { get; private set{}; }
            public int TextureHeight { get; private set{}; }

            Format m_colorFormat{}; = Format.B8G8R8A8_UNorm;
            public ID3D11Texture2D? ColorTexture { get; private set{}; }
            public ID3D11RenderTargetView? ColorTextureView { get; private set{}; }

            Format m_depthStencilFormat{}; = Format.D32_Float;
            public ID3D11Texture2D? DepthStencilTexture { get; private set{}; }
            public ID3D11DepthStencilView? DepthStencilView { get; private set{}; }

            static DrawingSurface(void)
        {
                StretchProperty.OverrideMetadata(typeof(DrawingSurface), new FrameworkPropertyMetadata(Stretch.Fill));
            }

            public DrawingSurface(void)
        {
                Loaded += OnLoaded;
                Unloaded += OnUnloaded;
            }

            void OnLoaded(const std::optional<std::any>& sender, RoutedEventArgs e)
        {
                if (IsInDesignMode)
                    return;

                StartD3D();
                StartRendering();
            }

            void OnUnloaded(const std::optional<std::any>& sender, RoutedEventArgs e)
        {
                if (IsInDesignMode)
                    return;

                StopRendering();
                EndD3D();
            }

            void StartD3D(void)
        {
                {
                    DeviceCreationFlags creationFlags{};
        #if DEBUG
                    if (SdkLayersAvailable())
                    {
                        creationFlags |= DeviceCreationFlags.Debug;
                    }
        #endif
                    D3D11CreateDevice(IntPtr.Zero,
                        DriverType.Hardware,
                        creationFlags,
                        FeatureLevel.Level_11_0,
                        out ID3D11Device? tempDevice, out ID3D11DeviceContext? tempContext).CheckError();

                    _device = tempDevice!.QueryInterface<ID3D11Device1>();
                    _deviceContext = tempContext!.QueryInterface<ID3D11DeviceContext1>();
                    tempContext.Dispose();
                    tempDevice.Dispose();
                }

                Window window{};

                window.Closed -= Window_Closed;
                window.Closed += Window_Closed;
                _d3dSurface = new D3D11ImageSource(window param) = 0;
                _d3dSurface.IsFrontBufferAvailableChanged += OnIsFrontBufferAvailableChanged;

                CreateAndBindTargets();

                Source = _d3dSurface;

                RaiseLoadContent(new DrawingSurfaceEventArgs(_device, _deviceContext));

                _contentNeedsRefresh = true;
                _isRendering = true;
            }

            void Window_Closed(const std::optional<std::any>& sender, EventArgs e)
        {
                Window window{};
                window.Closed -= Window_Closed;

                if (IsInDesignMode)
                    return;

                StopRendering();
                EndD3D();
            }

            void EndD3D(void)
        {
                _isRendering = false;

                RaiseUnloadContent(new DrawingSurfaceEventArgs(_device!, _deviceContext!));

                if (_d3dSurface != nullptr)
                {
                    _d3dSurface.IsFrontBufferAvailableChanged -= OnIsFrontBufferAvailableChanged;
                }

                Source = nullptr;

                if (_d3dSurface != nullptr)
                {
                    _d3dSurface.Dispose();
                    _d3dSurface = default;
                }

                DisposeTextures();

                _deviceContext!.ClearState();
                _deviceContext!.Flush();
                _deviceContext!.Dispose();

                if (_device != nullptr)
                {
        #if DEBUG
                    uint32_t refCount{};
                    if (refCount > 0)
                    {
                        System.Diagnostics.Debug.WriteLine($"Direct3D11: There are {refCount} unreleased references left on the device");

                        std::optional<ID3D11Debug> d3d11Debug{};
                        if (d3d11Debug != nullptr)
                        {
                            d3d11Debug.ReportLiveDeviceObjects(ReportLiveDeviceObjectFlags.Detail | ReportLiveDeviceObjectFlags.IgnoreInternal);
                            d3d11Debug.Dispose();
                        }
                    }
        #else
                    _device.Dispose();
        #endif _device{};
                }
            }

            void CreateAndBindTargets(void)
        {
                if (_device == nullptr)
                    return;

                _d3dSurface!.SetRenderTargetDX10(nullptr);
                DisposeTextures();

                TextureWidth = Math.Max((int)ActualWidth, 100);
                TextureHeight = Math.Max((int)ActualHeight, 100);

                ColorTexture = _device.CreateTexture2D(new Texture2DDescription
                {
                    BindFlags = BindFlags.RenderTarget | BindFlags.ShaderResource,
                    Format = Format.B8G8R8A8_UNorm,
                    Width = (uint)TextureWidth,
                    Height = (uint)TextureHeight,
                    MipLevels = 1,
                    SampleDescription = new SampleDescription(1, 0),
                    Usage = ResourceUsage.Default,
                    MiscFlags = ResourceOptionFlags.Shared,
                    CPUAccessFlags = CpuAccessFlags.None,
                    ArraySize = 1
                });
                ColorTextureView = _device.CreateRenderTargetView(ColorTexture);

                if (DepthStencilFormat != Format.Unknown)
                {
                    DepthStencilTexture = _device.CreateTexture2D(DepthStencilFormat, (uint)TextureWidth, (uint)TextureHeight, 1, 1, nullptr, BindFlags.DepthStencil);
                    DepthStencilView = _device.CreateDepthStencilView(DepthStencilTexture!, new DepthStencilViewDescription(DepthStencilTexture, DepthStencilViewDimension.Texture2D));
                }

                _d3dSurface.SetRenderTargetDX10(ColorTexture);
            }

            void DisposeTextures(void)
        {
                if (DepthStencilView != nullptr)
                {
                    DepthStencilView.Dispose();
                    DepthStencilView = default;
                }

                if (DepthStencilTexture != nullptr)
                {
                    DepthStencilTexture.Dispose();
                    DepthStencilTexture = default;
                }

                if (ColorTextureView != nullptr)
                {
                    ColorTextureView.Dispose();
                    ColorTextureView = default;
                }

                if (ColorTexture != nullptr)
                {
                    ColorTexture.Dispose();
                    ColorTexture = default;
                }
            }

            void StartRendering(void)
        {
                CompositionTarget.Rendering += OnRendering;
            }

            void StopRendering(void)
        {
                CompositionTarget.Rendering -= OnRendering;
            }

            void OnRendering(const std::optional<std::any>& sender, EventArgs e)
        {
                if (!_isRendering)
                    return;

                if (_contentNeedsRefresh || AlwaysRefresh)
                {
                    Render();
                    _d3dSurface!.InvalidateD3DImage();
                }
            }

            void Render(void)
        {
                if (_device == nullptr || _deviceContext == nullptr || ColorTexture == nullptr)
                    return;

                _deviceContext.OMSetRenderTargets(ColorTextureView!, DepthStencilView);
                _deviceContext.RSSetViewport(0, 0, TextureWidth, TextureHeight);
                _deviceContext.RSSetScissorRect(0, 0, TextureWidth, TextureHeight);

                RaiseDraw(new DrawEventArgs(this, _device!, _deviceContext!));

                _device.ImmediateContext.Flush();
            }

            virtual void RaiseLoadContent(DrawingSurfaceEventArgs args)
        {
                LoadContent?.Invoke(this, args);
            }

            virtual void RaiseDraw(DrawEventArgs args)
        {
                Draw?.Invoke(this, args);
            }

            virtual void RaiseUnloadContent(DrawingSurfaceEventArgs args)
        {
                UnloadContent?.Invoke(this, args);
            }

            override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
        {
                CreateAndBindTargets();
                _contentNeedsRefresh = true;

                base.OnRenderSizeChanged(sizeInfo);
            }

            void OnIsFrontBufferAvailableChanged(const std::any& sender, DependencyPropertyChangedEventArgs e)
        {
                // this fires when the screensaver kicks in, the machine goes into sleep or hibernate
                // and any other catastrophic losses of the d3d device from WPF's point of view if(_d3dSurface::IsFrontBufferAvailable param)
        {
                    CreateAndBindTargets();
                    _contentNeedsRefresh = true;
                    StartRendering();
                }
                else
                {
                    StopRendering();
                }
            }

                            public static bool get_IsInDesignMode() const { return DesignerProperties.GetIsInDesignMode(new DependencyObject()); }

            void Invalidate(void)
        {
                _contentNeedsRefresh = true;
            }
        }


    }
}

#endif // VORTICE_DRAWINGSURFACE_H