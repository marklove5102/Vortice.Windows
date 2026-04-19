// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_WINUIHELPERS_H
#define VORTICE_WINUI_WINUIHELPERS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_WINUIHELPERS_H
#define VORTICE_VORTICE_WINUIHELPERS_H

#include <cstdint>

namespace Vortice {

class WinUIHelpers
{
public:
    ~WinUIHelpers() = default;

    static intptr_t GetNativeObject() { Result result = ((IWinRTObject)obj).NativeObject.TryAs(guid, out nint handle);
        result.CheckError();
        return handle; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_WINUIHELPERS_H

} // namespace Vortice

#endif // VORTICE_WINUI_WINUIHELPERS_H
