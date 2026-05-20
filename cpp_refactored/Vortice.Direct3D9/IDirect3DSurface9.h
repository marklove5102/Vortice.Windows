// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DSURFACE9_H
#define VORTICE_IDIRECT3DSURFACE9_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3DSurface9
        {
                                    public T GetContainer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                GetContainer(typeof(T).GUID, out IntPtr containerPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(containerPtr)!;
            }

            public Result GetContainer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? container) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    container = default;
                    return result{};
                }

                container = MarshallingHelpers.FromPointer<T>(containerPtr);
                return result{};
            }

                                LockedRectangle LockRect(LockFlags flags)
        {
                return LockRect(nullptr param, flags param) = 0;
            }

                                    LockedRectangle LockRect(Rect rect, LockFlags flags)
        {
                return LockRect(&rect param, flags param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DSURFACE9_H