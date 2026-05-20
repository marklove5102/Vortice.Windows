// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DRAWEVENTARGS_H
#define VORTICE_DRAWEVENTARGS_H

#include <cstdint>

namespace Vortice {
namespace Wpf {

        namespace Vortice.Wpf;

        class DrawEventArgs : public : DrawingSurfaceEventArgs
        {
            public DrawEventArgs(DrawingSurface surface, ID3D11Device1 device, ID3D11DeviceContext1 context)
                : base(device, context)
            {
                ArgumentNullException.ThrowIfNull(nameof(surface));

                Surface = surface;
            }

            public DrawingSurface Surface { get; }

            void InvalidateSurface(void)
        {
                Surface.Invalidate();
            }
        }


    }
}

#endif // VORTICE_DRAWEVENTARGS_H