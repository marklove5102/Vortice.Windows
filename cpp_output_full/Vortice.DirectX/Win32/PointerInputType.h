// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_POINTERINPUTTYPE_H
#define VORTICE_POINTERINPUTTYPE_H

#include <cstdint>

namespace Vortice {
    namespace Win32; {

        namespace Vortice.Win32;

        /// <summary>
        /// Identifies the pointer input types.
        /// </summary>
        enum class PointerInputType : int32_t
        {
            /// <summary>
            /// Generic pointer type
            /// </summary>
            Pointer = 1,
            /// <summary>
            /// Touch pointer type.
            /// </summary>
            Touch = 2,
            /// <summary>
            /// Pen pointer type.
            /// </summary>
            Pen = 3,
            /// <summary>
            /// Mouse pointer type.
            /// </summary>
            Mouse = 4,
            /// <summary>
            /// Touchpad pointer type (Windows 8.1 and later).
            /// </summary>
            Touchpad = 5
        };


    }
}

#endif // VORTICE_POINTERINPUTTYPE_H