// Copyright (c) Contributors.

#ifndef VORTICE_IINPUTCURSORSTATICSINTEROP_H
#define VORTICE_IINPUTCURSORSTATICSINTEROP_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace WinUI {
namespace Input {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            #if WINDOWS
            namespace Vortice.WinUI.Input;

            [Guid("FAB19398-6D19-4D8A-B752-8F096C396069")]
            public unsafe partial class IInputCursorStaticsInterop(nint nativePtr) : WinRTObject(nativePtr)
            {
                public static explicit operator IInputCursorStaticsInterop?(nint nativePtr) => nativePtr == 0 ? default : new IInputCursorStaticsInterop(nativePtr param) = 0;

                Result CreateFromHCursor(intptr_t cursor, std::optional<InputCursor>& resultCursor)
            {
                    void* outDevice{};
                    Result result{};
                    if (result.Failure)
                    {
                        resultCursor = default;
                        return result{};
                    }

                    resultCursor = InputCursor.FromAbi(outDevice);
                    return result{};
                }
            }
            #endif


        }
    }
}

#endif // VORTICE_IINPUTCURSORSTATICSINTEROP_H