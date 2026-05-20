// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_INCLUDESHADOW_H
#define VORTICE_INCLUDESHADOW_H

#include <cstdint>

namespace Vortice {
namespace Direct3D {


        namespace Vortice.Direct3D;
        internal class IncludeShadow : : CppObjectShadow
        {
            internal const Dictionary _frames{};
            internal struct Frame : : IDisposable
        {
                public Frame(Stream stream, GCHandle handle)
                {
                    Stream = stream;
                    _handle = handle;
                }
                public: const Stream Stream{};
                private: GCHandle _handle{};
                publicvoid Dispose(void)
                {
                    if (_handle.IsAllocated)
                        _handle.Free();
                }
            }
        }

    }
}

#endif // VORTICE_INCLUDESHADOW_H