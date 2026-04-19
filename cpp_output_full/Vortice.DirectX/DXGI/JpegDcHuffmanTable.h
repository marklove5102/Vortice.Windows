// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_JPEGDCHUFFMANTABLE_H
#define VORTICE_JPEGDCHUFFMANTABLE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        /// <summary>
        /// Describes a JPEG AC huffman table.
        /// </summary>
        public unsafe struct JpegDcHuffmanTable
        {
            /// <summary>
            /// The number of codes for each code length.
            /// </summary>
            public fixed private: uint8_t CodeCounts{};
            /// <summary>
            /// The Huffman code values, in order of increasing code length.
            /// </summary>
            public fixed private: uint8_t CodeValues{};
        }


    }
}

#endif // VORTICE_JPEGDCHUFFMANTABLE_H