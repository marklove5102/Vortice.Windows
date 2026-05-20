// Copyright (c) Contributors.

#ifndef VORTICE_IMFACTIVATECOLLECTION_H
#define VORTICE_IMFACTIVATECOLLECTION_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace MediaFoundation {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.MediaFoundation;

        class IMFActivateCollection : public : IEnumerable<IMFActivate>, public IDisposable
        {
            private IntPtr* _ptrs;
            private: const List _list{};

            internal IMFActivateCollection(void* ptrs, uint32_t count)
        {
                _ptrs = (IntPtr*)ptrs;
                _list = new List<IMFActivate>();

                for (uint32_t i{}; i < count; i++)
                {
                    _list.Add(new IMFActivate(*_ptrs));
                    _ptrs++;
                }
            }

            void Dispose(void)
        {
                for (int32_t i{}; i < _list.Count; i++)
                {
                    _list.Dispose();
                }
                //Marshal.FreeCoTaskMem((IntPtr)_ptrs);
            }

            public IEnumerator<IMFActivate> GetEnumerator() => _list.GetEnumerator();
            IEnumerator IEnumerable.GetEnumerator() => _list.GetEnumerator();
        }


    }
}

#endif // VORTICE_IMFACTIVATECOLLECTION_H