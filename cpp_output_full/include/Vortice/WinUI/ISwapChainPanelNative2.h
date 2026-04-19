// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_WINUI_ISWAPCHAINPANELNATIVE2_H
#define VORTICE_WINUI_ISWAPCHAINPANELNATIVE2_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ISWAPCHAINPANELNATIVE2_H
#define VORTICE_VORTICE_ISWAPCHAINPANELNATIVE2_H

#include <cstdint>

namespace Vortice {

class ISwapChainPanelNative2 : public ISwapChainPanelNative
{
public:
    constexpr ISwapChainPanelNative2(intptr_t nativePtr)
    {}

    constexpr ISwapChainPanelNative2(Microsoft.UI.Xaml.Controls.SwapChainPanel panel)
    {}

    ~ISwapChainPanelNative2() = default;

    HRESULT SetSwapChainHandle() { Result result = ((delegate* unmanaged[Stdcall]<IntPtr, void*, int>)this[4])(NativePointer, (void*)swapChainHandle);
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ISWAPCHAINPANELNATIVE2_H

} // namespace Vortice

#endif // VORTICE_WINUI_ISWAPCHAINPANELNATIVE2_H
