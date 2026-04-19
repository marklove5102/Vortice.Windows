// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECTINPUT_OBJECTDATAFORMATFLAGS_H
#define VORTICE_VORTICE_DIRECTINPUT_OBJECTDATAFORMATFLAGS_H

#include <cstdint>

namespace Vortice::DirectInput {

enum class ObjectDataFormatFlags : int32_t
{
    None = 0,
    Acceleration = ObjectAspect.Acceleration,
    Force = ObjectAspect.Force,
    Position = ObjectAspect.Position,
    Velocity = ObjectAspect.Velocity
};


} // namespace Vortice::DirectInput

#endif // VORTICE_VORTICE_DIRECTINPUT_OBJECTDATAFORMATFLAGS_H
