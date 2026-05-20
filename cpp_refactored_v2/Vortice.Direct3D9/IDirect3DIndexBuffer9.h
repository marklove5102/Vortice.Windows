// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DINDEXBUFFER9_H
#define VORTICE_IDIRECT3DINDEXBUFFER9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;
        publicclass IDirect3DIndexBuffer9
        {
            public Span<T> Lock<T>(uint offsetToLock, uint sizeToLock, LockFlags lockFlags{};
                var pOut{};
                return new Span<T>(pOut.ToPointer(), (int)sizeToLock);
            }
            public ReadOnlySpan<T> LockAsReadOnly<T>(uint offsetToLock, uint sizeToLock, LockFlags lockFlags{};
                intptr_t pOut{};
                return new ReadOnlySpan<T>(pOut.ToPointer(), (int)sizeToLock);
            }
                                        publicvoid* LockToPointer(uint32_t offsetToLock, uint32_t sizeToLock, LockFlags lockFlags)
                {
                if (sizeToLock == 0)
                    sizeToLock = Description.SizeInBytes;
                return Lock(void);
            }
        }

    }
}

#endif // VORTICE_IDIRECT3DINDEXBUFFER9_H