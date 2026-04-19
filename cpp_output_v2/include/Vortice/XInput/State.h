// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_XINPUT_STATE_H
#define VORTICE_XINPUT_STATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_STATE_H
#define VORTICE_VORTICE_STATE_H

#include <cstdint>

namespace Vortice {

struct State
{
public:
    int32_t PacketNumber;
    Gamepad Gamepad;

};

} // namespace Vortice

#endif // VORTICE_VORTICE_STATE_H

} // namespace Vortice

#endif // VORTICE_XINPUT_STATE_H
