// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDIRECT3DVERTEXBUFFER9_H
#define VORTICE_IDIRECT3DVERTEXBUFFER9_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        class IDirect3DVertexBuffer9
        {
            public unsafe Span<T> Lock<T>(uint offsetToLock, uint sizeToLock, LockFlags lockFlags{};

                var pOut{};
                return new Span<T>(pOut.ToPointer(), (int)sizeToLock);
            }

            public unsafe ReadOnlySpan<T> LockAsReadOnly<T>(uint offsetToLock, uint sizeToLock, LockFlags lockFlags{};

                var pOut{};
                return new ReadOnlySpan<T>(pOut.ToPointer(), (int)sizeToLock);
            }

                                        void* LockToPointer(uint32_t offsetToLock, uint32_t sizeToLock, LockFlags lockFlags{};

                return Lock(offsetToLock param, sizeToLock param, lockFlags param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDIRECT3DVERTEXBUFFER9_H