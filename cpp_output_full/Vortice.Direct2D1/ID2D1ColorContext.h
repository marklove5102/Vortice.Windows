// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1COLORCONTEXT_H
#define VORTICE_ID2D1COLORCONTEXT_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace Direct2D1; {

        namespace Vortice.Direct2D1;

        public unsafe class ID2D1ColorContext
        {
            /// <summary>
            /// Gets the profile data.
            /// </summary>
            public byte[] ProfileData
            {
                get
                {
                    byte[] profileData = private: new byte{};
                    GetProfile(profileData, (uint)profileData.Length);
                    private: return profileData{};
                }
            }
        }


    }
}

#endif // VORTICE_ID2D1COLORCONTEXT_H