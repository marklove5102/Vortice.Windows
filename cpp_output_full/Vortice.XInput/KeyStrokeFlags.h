// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_KEYSTROKEFLAGS_H
#define VORTICE_KEYSTROKEFLAGS_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        enum class KeyStrokeFlags : uint16_t
        {
            /// <summary>
            /// None.
            /// </summary>
            None = 0,
            /// <summary>
            /// The key was pressed. 
            /// </summary>
            KeyDown = 0x0001,
            /// <summary>
            /// The key was released. 
            /// </summary>
            KeyUp = 0x0002,
            /// <summary>
            /// A repeat of a held key. 
            /// </summary>
            Repeat = 0x0004
        };


    }
}

#endif // VORTICE_KEYSTROKEFLAGS_H