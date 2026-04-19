// Copyright (c) Contributors.

#ifndef VORTICE_ICOMPOSITIONGRAPHICSDEVICEINTEROP_H
#define VORTICE_ICOMPOSITIONGRAPHICSDEVICEINTEROP_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace WinUI {
namespace Composition {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.WinUI.Composition;

            [Guid("4AFA8030-BC70-4B0C-B1C7-6E69F933DC83")]
            class ICompositionGraphicsDeviceInterop : public : ComObject
            {
                public ICompositionGraphicsDeviceInterop(IntPtr nativePtr) : base(nativePtr)
                {
                }

                public static explicit operator ICompositionGraphicsDeviceInterop?(IntPtr nativePtr) => nativePtr == IntPtr.Zero ? nullptr : new(nativePtr);

                public unsafe Result GetRenderingDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? device) where T : ComObject
                {
                    void* devicePtr{};
                    Result result{};

                    if (result.Failure)
                    {
                        device = default;
                        return result{};
                    }

                    device = MarshallingHelpers.FromPointer<T>(devicePtr);
                    return result{};
                }

                Result SetRenderingDevice(IUnknown device)
            {
                    void* devicePtr{};
                    return (Result)((delegate* unmanaged<IntPtr, IntPtr, int>)this)(NativePointer, devicePtr);
                }
            }


        }
    }
}

#endif // VORTICE_ICOMPOSITIONGRAPHICSDEVICEINTEROP_H