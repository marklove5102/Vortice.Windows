#ifndef VORTICE_IDWRITEFONTFILE_H
#define VORTICE_IDWRITEFONTFILE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace DirectWrite; {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectWrite;

        public class IDWriteFontFile
        {
            /// <summary>	
            /// Obtains the reference to the reference key of a font file. The returned reference is valid until the font file object is released.  	
            /// </summary>	
            /// <returns>the reference to the reference key of a font file. </returns>
            public unsafe Span<byte> GetReferenceKey(void)
        {
                void* keyPtr;
                GetReferenceKey(&keyPtr, out uint keySize);
                return new Span<byte>(keyPtr, (int)keySize);
            }
        }


    }
}

#endif // VORTICE_IDWRITEFONTFILE_H