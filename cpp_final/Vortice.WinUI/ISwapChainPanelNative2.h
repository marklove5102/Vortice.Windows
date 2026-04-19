// Copyright (c) Contributors.

#ifndef VORTICE_ISWAPCHAINPANELNATIVE2_H
#define VORTICE_ISWAPCHAINPANELNATIVE2_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.WinUI;

        [Guid("88fd8248-10da-4810-bb4c-010dd27faea9")]
        class ISwapChainPanelNative2 : public : ISwapChainPanelNative
        {
            public ISwapChainPanelNative2(nint nativePtr) : base(nativePtr)
            {
            }

            public static explicit operator ISwapChainPanelNative2?(nint nativePtr) => nativePtr == 0 ? default : new ISwapChainPanelNative2(nativePtr param) = 0;

        #if WINDOWS
            public ISwapChainPanelNative2(Microsoft.UI.Xaml.Controls.SwapChainPanel panel)
                : base(WinUIHelpers.GetNativeObject(typeof(ISwapChainPanelNative2).GUID, panel))
            {
            }

            public static explicit operator ISwapChainPanelNative2(Microsoft::UI::Xaml::Controls::SwapChainPanel panel)
        { new(panel);
        #endif

            Result SetSwapChainHandle(intptr_t swapChainHandle)
        {
                Result result{};
                return result{};
            }
        }


    }
}

#endif // VORTICE_ISWAPCHAINPANELNATIVE2_H