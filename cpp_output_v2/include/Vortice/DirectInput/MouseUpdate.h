// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_MOUSEUPDATE_H
#define VORTICE_DIRECTINPUT_MOUSEUPDATE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_MOUSEUPDATE_H
#define VORTICE_VORTICE_MOUSEUPDATE_H

#include <cstdint>

namespace Vortice {

struct MouseUpdate : public IStateUpdate
{
public:
    int32_t RawOffset{};
    int32_t Value{};
    int32_t Timestamp{};
    int32_t Sequence{};
    MouseOffset Offset{};
    bool get_IsButton() const { return Offset >= MouseOffset.Buttons0 && Offset <= MouseOffset.Buttons7; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_MOUSEUPDATE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_MOUSEUPDATE_H
