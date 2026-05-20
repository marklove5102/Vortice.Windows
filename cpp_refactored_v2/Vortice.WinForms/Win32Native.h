// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WIN32NATIVE_H
#define VORTICE_WIN32NATIVE_H

#include <cstdint>

namespace Vortice {
namespace WinForms {

        namespace Vortice.WinForms;
        internal unsafe static class Win32Native
        {
            [LibraryImport("user32")]
            public static partial RawBool PeekMessageW(NativeMessage* lpMsg, intptr_t hWnd, uint32_t wMsgFilterMin, uint32_t wMsgFilterMax, uint32_t wRemoveMsg);
            [LibraryImport("user32")]
            public static partial int32_t GetMessageW(NativeMessage* lpMsg, intptr_t hWnd, uint32_t wMsgFilterMin, uint32_t wMsgFilterMax);
            [LibraryImport("user32")]
            public static partial RawBool TranslateMessage(NativeMessage* lpMsg);
            [LibraryImport("user32")]
            public static partial /*LRESULT*/intptr_t DispatchMessageW(NativeMessage* lpMsg);
            [LibraryImport("user32")]
            public static partial RawBool GetClientRect(intptr_t hWnd, RawRect* lpRect);
        }

    }
}

#endif // VORTICE_WIN32NATIVE_H