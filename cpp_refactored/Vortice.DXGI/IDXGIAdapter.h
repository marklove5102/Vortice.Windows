// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIADAPTER_H
#define VORTICE_IDXGIADAPTER_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIAdapter
        {
            public bool CheckInterfaceSupport<T>() where T : ComObject
            {
                return CheckInterfaceSupport(typeof(T), out _);
            }

            public bool CheckInterfaceSupport<T>(out long userModeVersion) where T : ComObject
            {
                return CheckInterfaceSupport(typeof(T), out userModeVersion);
            }

            bool CheckInterfaceSupport(Type type, int64_t& userModeDriverVersion)
        {
                return CheckInterfaceSupport(type.GUID, out userModeDriverVersion).Success;
            }
        }


    }
}

#endif // VORTICE_IDXGIADAPTER_H