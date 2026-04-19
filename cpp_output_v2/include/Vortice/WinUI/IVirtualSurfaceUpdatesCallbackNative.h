// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
#define VORTICE_WINUI_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
#define VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H

#include <cstdint>

namespace Vortice {

class __declspec(uuid("TODO")) IVirtualSurfaceUpdatesCallbackNative
{
public:
    virtual ~IVirtualSurfaceUpdatesCallbackNative() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVEVTBL_H
#define VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVEVTBL_H

#include <cstdint>

namespace Vortice {

class IVirtualSurfaceUpdatesCallbackNativeVtbl
{
public:
    ~IVirtualSurfaceUpdatesCallbackNativeVtbl() = default;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVEVTBL_H

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

#endif // VORTICE_WINUI_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
