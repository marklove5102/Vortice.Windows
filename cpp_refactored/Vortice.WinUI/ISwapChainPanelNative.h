// Copyright (c) Contributors.

#ifndef VORTICE_ISWAPCHAINPANELNATIVE_H
#define VORTICE_ISWAPCHAINPANELNATIVE_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;

        [Guid("63aad0b8-7c24-40ff-85a8-640d944cc325")]
        class ISwapChainPanelNative : public : ComObject
        {
            public ISwapChainPanelNative(nint nativePtr)
                : base(nativePtr)
            {
            }

            public static explicit operator ISwapChainPanelNative?(nint nativePtr) => nativePtr == 0 ? default : new ISwapChainPanelNative(nativePtr param) = 0;

        #if WINDOWS
            public ISwapChainPanelNative(Microsoft.UI.Xaml.Controls.SwapChainPanel panel)
                : base(WinUIHelpers.GetNativeObject(typeof(ISwapChainPanelNative).GUID, panel))
            {
            }

            public static explicit operator ISwapChainPanelNative(Microsoft::UI::Xaml::Controls::SwapChainPanel panel)
        { new(panel);
        #endif

            Result SetSwapChain(const std::optional<IDXGISwapChain>& swapChain)
        {
                void* swapChainHandle = swapChain != nullptr ? swapChain.NativePointer.ToPointer() : default;
                Result result{};
                GC.KeepAlive(swapChain);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ISWAPCHAINPANELNATIVE_H