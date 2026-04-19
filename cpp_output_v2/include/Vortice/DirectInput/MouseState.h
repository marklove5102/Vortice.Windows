// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_MOUSESTATE_H
#define VORTICE_DIRECTINPUT_MOUSESTATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MOUSESTATE_H
#define VORTICE_VORTICE_MOUSESTATE_H

#include <cstdint>

namespace Vortice {

class MouseState : public IDeviceState<RawMouseState, public MouseUpdate>
{
public:
    constexpr MouseState()
    Buttons = new bool[8];
    ~MouseState() = default;

    int32_t X{};
    int32_t Y{};
    int32_t Z{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MOUSESTATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_MOUSESTATE_H
