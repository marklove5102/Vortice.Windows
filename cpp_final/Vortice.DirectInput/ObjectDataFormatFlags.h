// Copyright (c) Contributors.

#ifndef VORTICE_OBJECTDATAFORMATFLAGS_H
#define VORTICE_OBJECTDATAFORMATFLAGS_H

#include <cstdint>

namespace Vortice {
namespace DirectInput {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Distributed under the MIT license. See the LICENSE file in the project root for more information.

        namespace Vortice.DirectInput;

        enum class ObjectDataFormatFlags : int32_t
        {
            None = 0,
            Acceleration = ObjectAspect.Acceleration,
            Force = ObjectAspect.Force,
            Position = ObjectAspect.Position,
            Velocity = ObjectAspect.Velocity
        };


    }
}

#endif // VORTICE_OBJECTDATAFORMATFLAGS_H