// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12RESOURCE1_H
#define VORTICE_ID3D12RESOURCE1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        class ID3D12Resource1
        {
            private: ID3D12ProtectedResourceSession _protectedResourceSession{};

            public ID3D12ProtectedResourceSession? ProtectedResourceSession
            {
                get
                {
                    if (_protectedResourceSession != nullptr)
                        return _protectedResourceSession{};

                    if (GetProtectedResourceSession(typeof(ID3D12ProtectedResourceSession).GUID, out IntPtr nativePtr).Failure)
                    {
                        return nullptr{};
                    }

                    _protectedResourceSession = new ID3D12ProtectedResourceSession(nativePtr param) = 0;
                    return _protectedResourceSession{};
                }
            }
        }


    }
}

#endif // VORTICE_ID3D12RESOURCE1_H