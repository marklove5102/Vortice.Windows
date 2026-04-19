// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DRAWINGSURFACEEVENTARGS_H
#define VORTICE_DRAWINGSURFACEEVENTARGS_H

#include <cstdint>

namespace Vortice {
namespace Wpf {

        namespace Vortice.Wpf;

        class DrawingSurfaceEventArgs : public : EventArgs
        {
                                public DrawingSurfaceEventArgs(ID3D11Device1 device, ID3D11DeviceContext1 context)
        {
                ArgumentNullException.ThrowIfNull(nameof(device));
                ArgumentNullException.ThrowIfNull(nameof(context));

                Device = device;
                Context = context;
            }

                        public ID3D11Device1 Device { get; }

                        public ID3D11DeviceContext1 Context { get; }
        }


    }
}

#endif // VORTICE_DRAWINGSURFACEEVENTARGS_H