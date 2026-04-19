// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_POINTERBUTTONCHANGETYPE_H
#define VORTICE_POINTERBUTTONCHANGETYPE_H

#include <cstdint>

namespace Vortice {
namespace Win32 {


        namespace Vortice.Win32;

        enum class PointerButtonChangeType : int32_t
        {
            None,
            FirstButtonDown,
            FirstButtonUp,
            SecondButtonDown,
            SecondButtonUp,
            ThirdButtonDown,
            ThirdButtonUp,
            FourthButtonDown,
            FourthButtonUp,
            FifthButtonDown,
            FifthButtonUp
        };


    }
}

#endif // VORTICE_POINTERBUTTONCHANGETYPE_H