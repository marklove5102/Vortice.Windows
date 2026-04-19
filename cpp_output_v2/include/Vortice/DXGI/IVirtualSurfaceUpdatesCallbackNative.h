// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
#define VORTICE_DXGI_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVEBASE_H
#define VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVEBASE_H

#include <cstdint>

namespace Vortice {

class IVirtualSurfaceUpdatesCallbackNativeBase : public CallbackBase, public IVirtualSurfaceUpdatesCallbackNative
{
public:
    ~IVirtualSurfaceUpdatesCallbackNativeBase() = default;

    HRESULT UpdatesNeeded() = 0;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVEBASE_H

} // namespace Vortice

#endif // VORTICE_DXGI_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
