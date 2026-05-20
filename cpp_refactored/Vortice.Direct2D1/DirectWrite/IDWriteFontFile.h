// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITEFONTFILE_H
#define VORTICE_IDWRITEFONTFILE_H

#include <cstdint>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        class IDWriteFontFile
        {
                            public unsafe Span<byte> GetReferenceKey()
            {
                void* keyPtr;
                GetReferenceKey(&keyPtr, out uint keySize);
                return new Span<byte>(keyPtr, (int)keySize);
            }
        }


    }
}

#endif // VORTICE_IDWRITEFONTFILE_H