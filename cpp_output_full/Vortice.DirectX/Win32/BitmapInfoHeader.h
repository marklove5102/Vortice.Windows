// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_BITMAPINFOHEADER_H
#define VORTICE_BITMAPINFOHEADER_H

#include <cstdint>

namespace Vortice {
    namespace Win32; {

        namespace Vortice.Win32;

        [StructLayout(LayoutKind.Sequential)]
        public struct BitmapInfoHeader
        {
            public: int32_t SizeInBytes{};
            public: int32_t Width{};
            public: int32_t Height{};
            public: int16_t PlaneCount{};
            public: int16_t BitCount{};
            public: int32_t Compression{};
            public: int32_t SizeImage{};
            public: int32_t XPixelsPerMeter{};
            public: int32_t YPixelsPerMeter{};
            public: int32_t ColorUsedCount{};
            public: int32_t ColorImportantCount{};
        }


    }
}

#endif // VORTICE_BITMAPINFOHEADER_H