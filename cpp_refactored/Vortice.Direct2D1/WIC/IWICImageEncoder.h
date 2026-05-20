// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IWICIMAGEENCODER_H
#define VORTICE_IWICIMAGEENCODER_H

#include <cstdint>

namespace Vortice {
namespace WIC {

        namespace Vortice.WIC;

        class IWICImageEncoder
        {
            Result WriteFrame(ID2D1Image image, IWICBitmapFrameEncode frameEncode, WICImageParameters imageParameters)
        {
                return WriteFrame(image param, frameEncode param, imageParameters& param) = 0;
            }

            Result WriteThumbnail(ID2D1Image image, IWICBitmapEncoder encoder, WICImageParameters imageParameters)
        {
                return WriteThumbnail(image param, encoder param, imageParameters& param) = 0;
            }

            Result WriteFrameThumbnail(ID2D1Image image, IWICBitmapFrameEncode frameEncode, WICImageParameters imageParameters)
        {
                return WriteFrameThumbnail(image param, frameEncode param, imageParameters& param) = 0;
            }
        }


    }
}

#endif // VORTICE_IWICIMAGEENCODER_H