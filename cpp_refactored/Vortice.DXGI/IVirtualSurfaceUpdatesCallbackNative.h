// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
#define VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IVirtualSurfaceUpdatesCallbackNativeBase : public : CallbackBase, public IVirtualSurfaceUpdatesCallbackNative
        {
            public abstract Result UpdatesNeeded(void) = 0;
        }


    }
}

#endif // VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H