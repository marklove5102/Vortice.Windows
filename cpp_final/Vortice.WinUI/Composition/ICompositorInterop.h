// Copyright (c) Contributors.

#ifndef VORTICE_ICOMPOSITORINTEROP_H
#define VORTICE_ICOMPOSITORINTEROP_H

#include <cstdint>
#include <optional>
#include <cstring>

namespace Vortice {
namespace WinUI {
namespace Composition {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            #if WINDOWS
            namespace Vortice.WinUI.Composition;

            [Guid("FAB19398-6D19-4D8A-B752-8F096C396069")]
            public partial class ICompositorInterop(nint nativePtr) : ComObject(nativePtr)
            {
                public static explicit operator ICompositorInterop?(nint nativePtr) => nativePtr == 0 ? nullptr : new ICompositorInterop(nativePtr param) = 0;

                Result CreateGraphicsDevice(IUnknown device, std::optional<CompositionGraphicsDevice>& resultDevice)
            {
                    intptr_t devicePtr{};
                    intptr_t outDevice{};
                    Result result{};
                    if (result.Failure)
                    {
                        resultDevice = default;
                        return result{};
                    }

                    resultDevice = CompositionGraphicsDevice.FromAbi(outDevice);
                    return result{};
                }
            }

            #endif


        }
    }
}

#endif // VORTICE_ICOMPOSITORINTEROP_H