// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_ISWAPCHAINPANELNATIVE_H
#define VORTICE_WINUI_ISWAPCHAINPANELNATIVE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ISWAPCHAINPANELNATIVE_H
#define VORTICE_VORTICE_ISWAPCHAINPANELNATIVE_H

#include <cstdint>

namespace Vortice {

class ISwapChainPanelNative : public ComObject
{
public:
    constexpr ISwapChainPanelNative(intptr_t nativePtr)
    {}

    constexpr ISwapChainPanelNative(Microsoft.UI.Xaml.Controls.SwapChainPanel panel)
    {}

    ~ISwapChainPanelNative() = default;

    HRESULT SetSwapChain() { void* swapChainHandle = swapChain != nullptr ? swapChain.NativePointer.ToPointer() : default;
        Result result = ((delegate* unmanaged<IntPtr, void*, int>)this[3])(NativePointer, swapChainHandle);
        GC.KeepAlive(swapChain);
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ISWAPCHAINPANELNATIVE_H

} // namespace Vortice

#endif // VORTICE_WINUI_ISWAPCHAINPANELNATIVE_H
