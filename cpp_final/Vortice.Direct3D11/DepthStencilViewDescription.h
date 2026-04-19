// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEPTHSTENCILVIEWDESCRIPTION_H
#define VORTICE_DEPTHSTENCILVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        struct DepthStencilViewDescription
        {
                                                public DepthStencilViewDescription(
                DepthStencilViewDimension viewDimension,
                Format format{};
                ViewDimension = viewDimension;
                Flags = flags;
                switch (viewDimension)
                {
                    case DepthStencilViewDimension.Texture1D:
                        Texture1D.MipSlice = mipSlice;
                        break;
                    case DepthStencilViewDimension.Texture1DArray:
                        Texture1DArray.MipSlice = mipSlice;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    case DepthStencilViewDimension.Texture2D:
                        Texture2D.MipSlice = mipSlice;
                        break;
                    case DepthStencilViewDimension.Texture2DArray:
                        Texture2DArray.MipSlice = mipSlice;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        break;
                    case DepthStencilViewDimension.Texture2DMultisampled:
                        break;
                    case DepthStencilViewDimension.Texture2DMultisampledArray:
                        Texture2DMSArray.FirstArraySlice = firstArraySlice;
                        Texture2DMSArray.ArraySize = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                                    public DepthStencilViewDescription(
                ID3D11Texture1D texture,
                bool isArray,
                Format format{};
                Flags = flags;
                if (format == Format.Unknown
                    || ((arraySize == unchecked((uint)-1)) && DepthStencilViewDimension.Texture1DArray == ViewDimension))
                {
                    var textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (arraySize == unchecked((uint)-1))
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                }

                Format = format;
                switch (ViewDimension)
                {
                    case DepthStencilViewDimension.Texture1D:
                        Texture1D.MipSlice = mipSlice;
                        break;
                    case DepthStencilViewDimension.Texture1DArray:
                        Texture1DArray.MipSlice = mipSlice;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                                    public DepthStencilViewDescription(
                ID3D11Texture2D texture,
                DepthStencilViewDimension viewDimension,
                Format format{};
                Flags = flags;

                if (format == Format.Unknown
                    || ((arraySize == unchecked((uint)-1)) && (DepthStencilViewDimension.Texture2DArray == viewDimension || DepthStencilViewDimension.Texture2DMultisampledArray == viewDimension)))
                {
                    var textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (arraySize == unchecked((uint)-1))
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                }
                Format = format;
                switch (viewDimension)
                {
                    case DepthStencilViewDimension.Texture2D:
                        Texture2D.MipSlice = mipSlice;
                        break;
                    case DepthStencilViewDimension.Texture2DArray:
                        Texture2DArray.MipSlice = mipSlice;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        break;
                    case DepthStencilViewDimension.Texture2DMultisampled:
                        break;
                    case DepthStencilViewDimension.Texture2DMultisampledArray:
                        Texture2DMSArray.FirstArraySlice = firstArraySlice;
                        Texture2DMSArray.ArraySize = arraySize;
                        break;
                    default:
                        break;
                }
            }
        }


    }
}

#endif // VORTICE_DEPTHSTENCILVIEWDESCRIPTION_H