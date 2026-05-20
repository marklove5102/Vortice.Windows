// Copyright (c) Contributors.

#ifndef VORTICE_WINUIHELPERS_H
#define VORTICE_WINUIHELPERS_H

#include <cstdint>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        #if WINDOWS
        namespace Vortice.WinUI;

        internal static class WinUIHelpers
        {
            static intptr_t GetNativeObject(Guid guid, const std::any& obj)
        {
                Result result{};
                result.CheckError();
                return handle{};
            }
        }

        #endif


    }
}

#endif // VORTICE_WINUIHELPERS_H