// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_NATIVEMESSAGE_H
#define VORTICE_DIRECTX_NATIVEMESSAGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>
#include <windows.h>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_NATIVEMESSAGE_H
#define VORTICE_VORTICE_NATIVEMESSAGE_H

#include <cstdint>

namespace Vortice {

struct NativeMessage
{
public:
    intptr_t hwnd;
    uint32_t msg;
    uintptr_t wParam;
    intptr_t lParam;
    uint32_t time;
    Int2 pt;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_NATIVEMESSAGE_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_NATIVEMESSAGE_H
