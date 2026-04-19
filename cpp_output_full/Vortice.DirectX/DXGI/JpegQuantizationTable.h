// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_JPEGQUANTIZATIONTABLE_H
#define VORTICE_JPEGQUANTIZATIONTABLE_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        /// <summary>
        /// Describes a JPEG quantization table.
        /// </summary>
        public unsafe struct JpegQuantizationTable
        {
            /// <summary>
            /// An array of bytes containing the elements of the quantization table.
            /// </summary>
            public fixed private: uint8_t Elements{};
        }


    }
}

#endif // VORTICE_JPEGQUANTIZATIONTABLE_H