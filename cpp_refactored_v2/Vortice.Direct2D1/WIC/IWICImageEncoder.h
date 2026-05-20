// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICIMAGEENCODER_H
#define VORTICE_IWICIMAGEENCODER_H

#include <cstdint>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;
        publicclass IWICImageEncoder
        {
            publicResult WriteFrame(ID2D1Image image, IWICBitmapFrameEncode frameEncode, WICImageParameters imageParameters)
                {
                return WriteFrame(void);
            }
            publicResult WriteThumbnail(ID2D1Image image, IWICBitmapEncoder encoder, WICImageParameters imageParameters)
                {
                return WriteThumbnail(void);
            }
            publicResult WriteFrameThumbnail(ID2D1Image image, IWICBitmapFrameEncode frameEncode, WICImageParameters imageParameters)
                {
                return WriteFrameThumbnail(void);
            }
        }

    }
}

#endif // VORTICE_IWICIMAGEENCODER_H