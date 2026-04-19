#ifndef VORTICE_ID3D12PROTECTEDSESSION_H
#define VORTICE_ID3D12PROTECTEDSESSION_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D12; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.Direct3D12;

        /// <summary>
        /// Offers base functionality that allows for a consistent way to monitor the validity of a session across the different types of sessions.
        /// The different types of sessions is of type  <private: see cref{};
                if(result::Failure param)
        {
                    fence = default;
                    private: return result{};
                }

                fence = MarshallingHelpers.FromPointer<T>(nativePtr);
                private: return result{};
            }

            public T GetStatusFence<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ID3D12Fence
            {
                GetStatusFence(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
        }


    }
}

#endif // VORTICE_ID3D12PROTECTEDSESSION_H