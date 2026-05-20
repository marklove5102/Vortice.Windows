// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DVOLUME9_H
#define VORTICE_IDIRECT3DVOLUME9_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;

        class IDirect3DVolume9
        {
            public T GetContainer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid guid) where T : ComObject
            {
                void* containerPtr{};
                return MarshallingHelpers.FromPointer<T>(containerPtr)!;
            }

                                LockedBox LockBox(LockFlags flags)
        {
                return LockBox((void*)nullptr, flags);
            }

                                    LockedBox LockBox(Box box, LockFlags flags)
        {
                return LockBox(&box param, flags param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DVOLUME9_H