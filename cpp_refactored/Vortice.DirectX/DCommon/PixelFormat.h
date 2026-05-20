// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PIXELFORMAT_H
#define VORTICE_PIXELFORMAT_H

#include <cstdint>

namespace Vortice {
namespace DCommon {

        namespace Vortice.DCommon;

        struct PixelFormat
        {
                        public: static const PixelFormat Unknown{};

                        public: static const PixelFormat Premultiplied{};

                                public PixelFormat(Format format, AlphaMode alphaMode)
        {
                Format = format;
                AlphaMode = alphaMode;
            }
        }


    }
}

#endif // VORTICE_PIXELFORMAT_H