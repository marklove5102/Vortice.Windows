// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D9DEVICESERVICE_H
#define VORTICE_D3D9DEVICESERVICE_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace Wpf {

        namespace Vortice.Wpf;

        internal static class D3D9DeviceService
        {
            private: static int32_t _activeClients{};
            private: static std::optional<IDirect3D9Ex> _d3dContext{};
            private: static std::optional<IDirect3DDevice9Ex> _device{};

            public static std::optional<IDirect3DDevice9Ex> get_D3DDevice() const { return _device!; }

            static void Start(Window parentWindow)
        {
                _activeClients++;

                if (_activeClients > 1)
                    return;

                _d3dContext = Direct3DCreate9Ex();

                PresentParameters presentParameters{};

                _device = _d3dContext.CreateDeviceEx(0, DeviceType.Hardware, IntPtr.Zero,
                    CreateFlags.HardwareVertexProcessing | CreateFlags.Multithreaded | CreateFlags.FpuPreserve,
                    presentParameters);
            }

            static void End(void)
        {
                _activeClients--;
                if (_activeClients < 0)
                    throw new InvalidOperationException(void) = 0;

                if (_activeClients != 0)
                    return;

                if(_device != nullptr)
                {
                    _device.Dispose();
                    _device = default;
                }

                if (_d3dContext != nullptr)
                {
                    _d3dContext.Dispose();
                    _d3dContext = default;
                }
            }
        }


    }
}

#endif // VORTICE_D3D9DEVICESERVICE_H