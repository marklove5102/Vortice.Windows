// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID2D1COLORCONTEXT_H
#define VORTICE_ID2D1COLORCONTEXT_H

#include <cstdint>

namespace Vortice {
namespace Direct2D1 {


        namespace Vortice.Direct2D1;
        publicclass ID2D1ColorContext
        {
                        public byte[] ProfileData
            {
                get
                {
                    byte[] profileData = new byte{};
                    GetProfile(profileData, (uint)profileData.Length);
                    return profileData{};
                }
            }
        }

    }
}

#endif // VORTICE_ID2D1COLORCONTEXT_H