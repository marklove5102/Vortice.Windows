// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_RAWMOUSESTATE_H
#define VORTICE_DIRECTINPUT_RAWMOUSESTATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_RAWMOUSESTATE_H
#define VORTICE_VORTICE_RAWMOUSESTATE_H

#include <cstdint>

namespace Vortice {

struct RawMouseState
{
public:

private:
    int32_t X;
    int32_t Y;
    int32_t Z;
    uint8_t Buttons0;
    uint8_t Buttons1;
    uint8_t Buttons2;
    uint8_t Buttons3;
    uint8_t Buttons4;
    uint8_t Buttons5;
    uint8_t Buttons6;
    uint8_t Buttons7;
};

} // namespace Vortice

#endif // VORTICE_VORTICE_RAWMOUSESTATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_RAWMOUSESTATE_H
