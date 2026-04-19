// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_JOYSTICKUPDATE_H
#define VORTICE_DIRECTINPUT_JOYSTICKUPDATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_JOYSTICKUPDATE_H
#define VORTICE_VORTICE_JOYSTICKUPDATE_H

#include <cstdint>

namespace Vortice {

struct JoystickUpdate : public IStateUpdate
{
public:
    int32_t RawOffset{};
    int32_t Value{};
    int32_t Timestamp{};
    int32_t Sequence{};
    JoystickOffset Offset{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_JOYSTICKUPDATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_JOYSTICKUPDATE_H
