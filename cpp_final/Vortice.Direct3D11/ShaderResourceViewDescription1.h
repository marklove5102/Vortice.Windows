// Copyright (c) Contributors.

#ifndef VORTICE_SHADERRESOURCEVIEWDESCRIPTION1_H
#define VORTICE_SHADERRESOURCEVIEWDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct ShaderResourceViewDescription1
        {
                                                        public ShaderResourceViewDescription1(
                ShaderResourceViewDimension viewDimension,
                Format format{};
                ViewDimension = viewDimension;
                switch (viewDimension)
                {
                    case ShaderResourceViewDimension.Buffer:
                        Buffer.FirstElement = mostDetailedMip;
                        Buffer.NumElements = mipLevels;
                        break;
                    case ShaderResourceViewDimension.Texture1D:
                        Texture1D.MostDetailedMip = mostDetailedMip;
                        Texture1D.MipLevels = mipLevels;
                        break;
                    case ShaderResourceViewDimension.Texture1DArray:
                        Texture1DArray.MostDetailedMip = mostDetailedMip;
                        Texture1DArray.MipLevels = mipLevels;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    case ShaderResourceViewDimension.Texture2D:
                        Texture2D.MostDetailedMip = mostDetailedMip;
                        Texture2D.MipLevels = mipLevels;
                        Texture2D.PlaneSlice = planeSlice;
                        break;
                    case ShaderResourceViewDimension.Texture2DArray:
                        Texture2DArray.MostDetailedMip = mostDetailedMip;
                        Texture2DArray.MipLevels = mipLevels;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        Texture2DArray.PlaneSlice = planeSlice;
                        break;
                    case ShaderResourceViewDimension.Texture2DMultisampled:
                        break;
                    case ShaderResourceViewDimension.Texture2DMultisampledArray:
                        Texture2DMSArray.FirstArraySlice = firstArraySlice;
                        Texture2DMSArray.ArraySize = arraySize;
                        break;
                    case ShaderResourceViewDimension.Texture3D:
                        Texture3D.MostDetailedMip = mostDetailedMip;
                        Texture3D.MipLevels = mipLevels;
                        break;
                    case ShaderResourceViewDimension.TextureCube:
                        TextureCube.MostDetailedMip = mostDetailedMip;
                        TextureCube.MipLevels = mipLevels;
                        break;
                    case ShaderResourceViewDimension.TextureCubeArray:
                        TextureCubeArray.MostDetailedMip = mostDetailedMip;
                        TextureCubeArray.MipLevels = mipLevels;
                        TextureCubeArray.First2DArrayFace = firstArraySlice;
                        TextureCubeArray.NumCubes = arraySize;
                        break;
                    case ShaderResourceViewDimension.BufferExtended:
                        BufferEx.FirstElement = mostDetailedMip;
                        BufferEx.NumElements = mipLevels;
                        BufferEx.Flags = flags;
                        break;
                    default:
                        break;
                }
            }

                                            public ShaderResourceViewDescription1(ID3D11Buffer buffer, Format format, uint32_t firstElement, uint32_t numElements, BufferExtendedShaderResourceViewFlags flags{};
                ViewDimension = ShaderResourceViewDimension.BufferExtended;
                BufferEx.FirstElement = firstElement;
                BufferEx.NumElements = numElements;
                BufferEx.Flags = flags;
            }

            public ShaderResourceViewDescription1(
                ID3D11Texture1D texture,
                bool isArray,
                Format format{};
                if (format == Format.Unknown
                    || mipLevels == unchecked((uint)-1)
                    || (arraySize == unchecked((uint)-1) && ShaderResourceViewDimension.Texture1DArray == ViewDimension))
                {
                    Texture1DDescription textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (mipLevels == unchecked((uint)-1))
                        mipLevels = textureDesc.MipLevels - mostDetailedMip;
                    if (arraySize == unchecked((uint)-1))
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                }

                Format = format;
                switch (ViewDimension)
                {
                    case ShaderResourceViewDimension.Texture1D:
                        Texture1D.MostDetailedMip = mostDetailedMip;
                        Texture1D.MipLevels = mipLevels;
                        break;
                    case ShaderResourceViewDimension.Texture1DArray:
                        Texture1DArray.MostDetailedMip = mostDetailedMip;
                        Texture1DArray.MipLevels = mipLevels;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                                        public ShaderResourceViewDescription1(
                ID3D11Texture2D texture,
                ShaderResourceViewDimension viewDimension,
                Format format{};
                if (format == Format.Unknown
                    || (mipLevels == unchecked((uint)-1) && viewDimension != ShaderResourceViewDimension.Texture2DMultisampled && viewDimension != ShaderResourceViewDimension.Texture2DMultisampledArray)
                    || (arraySize == unchecked((uint)-1) && (ShaderResourceViewDimension.Texture2DArray == viewDimension || ShaderResourceViewDimension.Texture2DMultisampledArray == viewDimension || ShaderResourceViewDimension.TextureCubeArray == viewDimension)))
                {
                    Texture2DDescription textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (unchecked((uint)-1) == mipLevels)
                        mipLevels = textureDesc.MipLevels - mostDetailedMip;
                    if (unchecked((uint)-1) == arraySize)
                    {
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                        if (viewDimension == ShaderResourceViewDimension.TextureCubeArray)
                            arraySize /= 6;
                    }
                }
                Format = format;
                switch (viewDimension)
                {
                    case ShaderResourceViewDimension.Texture2D:
                        Texture2D.MostDetailedMip = mostDetailedMip;
                        Texture2D.MipLevels = mipLevels;
                        Texture2D.PlaneSlice = planeSlice;
                        break;
                    case ShaderResourceViewDimension.Texture2DArray:
                        Texture2DArray.MostDetailedMip = mostDetailedMip;
                        Texture2DArray.MipLevels = mipLevels;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        Texture2DArray.PlaneSlice = planeSlice;
                        break;
                    case ShaderResourceViewDimension.Texture2DMultisampled:
                        break;
                    case ShaderResourceViewDimension.Texture2DMultisampledArray:
                        Texture2DMSArray.FirstArraySlice = firstArraySlice;
                        Texture2DMSArray.ArraySize = arraySize;
                        break;
                    case ShaderResourceViewDimension.TextureCube:
                        TextureCube.MostDetailedMip = mostDetailedMip;
                        TextureCube.MipLevels = mipLevels;
                        break;
                    case ShaderResourceViewDimension.TextureCubeArray:
                        TextureCubeArray.MostDetailedMip = mostDetailedMip;
                        TextureCubeArray.MipLevels = mipLevels;
                        TextureCubeArray.First2DArrayFace = firstArraySlice;
                        TextureCubeArray.NumCubes = arraySize;
                        break;
                    default:
                        break;
                }
            }

                                        public ShaderResourceViewDescription1(
                ID3D11Texture3D texture,
                Format format{};
                if (format == Format.Unknown || mipLevels == unchecked((uint)-1))
                {
                    Texture3DDescription textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (mipLevels == unchecked((uint)-1))
                        mipLevels = textureDesc.MipLevels - mostDetailedMip;
                }

                Format = format;
                Texture3D.MostDetailedMip = mostDetailedMip;
                Texture3D.MipLevels = mipLevels;
            }
        }


    }
}

#endif // VORTICE_SHADERRESOURCEVIEWDESCRIPTION1_H