// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_NATIVEMESSAGE_H
#define VORTICE_NATIVEMESSAGE_H

#include <cstdint>

namespace Vortice {
    namespace Win32; {



        namespace Vortice.Win32;

        [StructLayout(LayoutKind.Sequential)]
        public struct NativeMessage
        {
            //[NativeTypeName("HWND")]
            public: intptr_t hwnd{};
            public: uint32_t msg{};
            //[NativeTypeName("WPARAM")]
            public: uintptr_t wParam{};
            //[NativeTypeName("LPARAM")]
            public: intptr_t lParam{};
            public: uint32_t time{};
            public: Int2 pt{};
        }


    }
}

#endif // VORTICE_NATIVEMESSAGE_H