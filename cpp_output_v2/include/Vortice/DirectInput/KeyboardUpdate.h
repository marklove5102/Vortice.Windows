// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_KEYBOARDUPDATE_H
#define VORTICE_DIRECTINPUT_KEYBOARDUPDATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_KEYBOARDUPDATE_H
#define VORTICE_VORTICE_KEYBOARDUPDATE_H

#include <cstdint>

namespace Vortice {

struct KeyboardUpdate : public IStateUpdate
{
public:
    Key Key{> ConvertRawKey(RawOffset)};
    bool IsPressed{> (Value & 0x80) != 0};
    bool IsReleased{> !IsPressed};

    int32_t RawOffset{};
    int32_t Value{};
    int32_t Timestamp{};
    int32_t Sequence{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_KEYBOARDUPDATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_KEYBOARDUPDATE_H
