// Copyright (c) Contributors.

#ifndef VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H
#define VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H

#include <cstdint>

namespace Vortice {
namespace WinUI {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.WinUI;

        [Guid("e8e84ac7-b7b8-40f4-b033-f877a756c52b")]
        [Vtbl(typeof(IVirtualSurfaceUpdatesCallbackNativeVtbl))]
        class IVirtualSurfaceUpdatesCallbackNative : public : IUnknown, public ICallbackable, public IDisposable
        {
            Result UpdatesNeeded(void) = 0;
        }

        internal static class IVirtualSurfaceUpdatesCallbackNativeVtbl
        {
            public static readonly unsafe nint[] Vtbl = [(nint)(delegate* unmanaged<nint, int>)(&UpdatesNeededImpl_)];

            [UnmanagedCallersOnly(CallConvs = [typeof(CallConvStdcall)])]
            static int32_t UpdatesNeededImpl_(intptr_t thisObject)
        {
                IVirtualSurfaceUpdatesCallbackNative @this = CppObjectShadow.ToCallback<IVirtualSurfaceUpdatesCallbackNative>(thisObject);
                try
                {
                    Result result{};
                    return (int)result;
                }
                catch (Exception ex)
                {
                    (@this as IExceptionCallback)?.RaiseException(ex);
                    return Result.GetResultFromException(ex).Code;
                }
            }
        }

        class IVirtualSurfaceUpdatesCallbackNativeBase : public : CallbackBase, public IVirtualSurfaceUpdatesCallbackNative
        {
            public abstract Result UpdatesNeeded(void) = 0;
        }


    }
}

#endif // VORTICE_IVIRTUALSURFACEUPDATESCALLBACKNATIVE_H