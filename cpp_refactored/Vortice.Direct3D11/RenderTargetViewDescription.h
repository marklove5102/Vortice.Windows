// Copyright (c) Contributors.

#ifndef VORTICE_RENDERTARGETVIEWDESCRIPTION_H
#define VORTICE_RENDERTARGETVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct RenderTargetViewDescription
        {
                                            public RenderTargetViewDescription(
                RenderTargetViewDimension viewDimension,
                Format format{};
                ViewDimension = viewDimension;
                switch (viewDimension)
                {
                    case RenderTargetViewDimension.Buffer:
                        Buffer.FirstElement = mipSlice;
                        Buffer.NumElements = firstArraySlice;
                        break;
                    case RenderTargetViewDimension.Texture1D:
                        Texture1D.MipSlice = mipSlice;
                        break;
                    case RenderTargetViewDimension.Texture1DArray:
                        Texture1DArray.MipSlice = mipSlice;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    case RenderTargetViewDimension.Texture2D:
                        Texture2D.MipSlice = mipSlice;
                        break;
                    case RenderTargetViewDimension.Texture2DArray:
                        Texture2DArray.MipSlice = mipSlice;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        break;
                    case RenderTargetViewDimension.Texture2DMultisampled:
                        break;
                    case RenderTargetViewDimension.Texture2DMultisampledArray:
                        Texture2DMSArray.FirstArraySlice = firstArraySlice;
                        Texture2DMSArray.ArraySize = arraySize;
                        break;
                    case RenderTargetViewDimension.Texture3D:
                        Texture3D.MipSlice = mipSlice;
                        Texture3D.FirstWSlice = firstArraySlice;
                        Texture3D.WSize = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                        public RenderTargetViewDescription(ID3D11Buffer buffer, Format format, uint32_t firstElement, uint32_t numElements)
        {
                Format = format;
                ViewDimension = RenderTargetViewDimension.Buffer;
                Buffer.FirstElement = firstElement;
                Buffer.NumElements = numElements;
            }

            public RenderTargetViewDescription(
                ID3D11Texture1D texture,
                bool isArray,
                Format format{};
                if (format == Format.Unknown
                    || ((arraySize == unchecked((uint)-1)) && RenderTargetViewDimension.Texture1DArray == ViewDimension))
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
                    case RenderTargetViewDimension.Texture1D:
                        Texture1D.MipSlice = mipSlice;
                        break;
                    case RenderTargetViewDimension.Texture1DArray:
                        Texture1DArray.MipSlice = mipSlice;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                                public RenderTargetViewDescription(
                ID3D11Texture2D texture,
                RenderTargetViewDimension viewDimension,
                Format format{};
                if (format == Format.Unknown
                    || (unchecked((uint)-1) == arraySize && (RenderTargetViewDimension.Texture2DArray == viewDimension || RenderTargetViewDimension.Texture2DMultisampledArray == viewDimension)))
                {
                    var textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (unchecked((uint)-1) == arraySize)
                    {
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                    }
                }
                Format = format;
                switch (viewDimension)
                {
                    case RenderTargetViewDimension.Texture2D:
                        Texture2D.MipSlice = mipSlice;
                        break;
                    case RenderTargetViewDimension.Texture2DArray:
                        Texture2DArray.MipSlice = mipSlice;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        break;
                    case RenderTargetViewDimension.Texture2DMultisampled:
                        break;
                    case RenderTargetViewDimension.Texture2DMultisampledArray:
                        Texture2DMSArray.FirstArraySlice = firstArraySlice;
                        Texture2DMSArray.ArraySize = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                            public RenderTargetViewDescription(
                ID3D11Texture3D texture,
                Format format{};
                if (format == Format.Unknown || wSize == unchecked((uint)-1))
                {
                    var textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (wSize == unchecked((uint)-1))
                        wSize = textureDesc.Depth - firstWSlice;
                }

                Format = format;
                Texture3D.MipSlice = mipSlice;
                Texture3D.FirstWSlice = firstWSlice;
                Texture3D.WSize = wSize;
            }
        }


    }
}

#endif // VORTICE_RENDERTARGETVIEWDESCRIPTION_H