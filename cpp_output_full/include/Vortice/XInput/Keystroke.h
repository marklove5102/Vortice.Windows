// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XINPUT_KEYSTROKE_H
#define VORTICE_XINPUT_KEYSTROKE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_KEYSTROKE_H
#define VORTICE_VORTICE_KEYSTROKE_H

#include <cstdint>

namespace Vortice {

struct Keystroke
{
public:
    GamepadVirtualKey VirtualKey;
    char Unicode;
    KeyStrokeFlags Flags;
    int32_t UserIndex;
    uint8_t HidCode;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_KEYSTROKE_H

} // namespace Vortice

#endif // VORTICE_XINPUT_KEYSTROKE_H
