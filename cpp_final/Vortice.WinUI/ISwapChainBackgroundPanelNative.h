// Copyright (c) Contributors.

#ifndef VORTICE_ISWAPCHAINBACKGROUNDPANELNATIVE_H
#define VORTICE_ISWAPCHAINBACKGROUNDPANELNATIVE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;

        [Guid("24d43d84-4246-4aa7-9774-8604cb73d90d")]
        class ISwapChainBackgroundPanelNative : public : ComObject
        {
            public ISwapChainBackgroundPanelNative(IntPtr nativePtr)
                : base(nativePtr)
            {
            }

            public static explicit operator ISwapChainBackgroundPanelNative?(IntPtr nativePtr) => nativePtr == IntPtr.Zero ? nullptr : new ISwapChainBackgroundPanelNative(nativePtr param) = 0;

            public IDXGISwapChain SwapChain
            {
                set => SetSwapChain(value).CheckError();
            }

            Result SetSwapChain(IDXGISwapChain swapChain)
        {
                void* swapChain_{};
                Result result{};
                GC.KeepAlive(swapChain);
                return result{};
            }
        }


    }
}

#endif // VORTICE_ISWAPCHAINBACKGROUNDPANELNATIVE_H