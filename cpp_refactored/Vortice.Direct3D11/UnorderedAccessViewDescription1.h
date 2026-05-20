// Copyright (c) Contributors.

#ifndef VORTICE_UNORDEREDACCESSVIEWDESCRIPTION1_H
#define VORTICE_UNORDEREDACCESSVIEWDESCRIPTION1_H

#include <cstdint>

namespace Vortice {
namespace Direct3D11 {

        ﻿// Copyright (c) Amer Koleci and contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D11;

        struct UnorderedAccessViewDescription1
        {
                                                    public UnorderedAccessViewDescription1(
                UnorderedAccessViewDimension viewDimension,
                Format format{};
                ViewDimension = viewDimension;
                switch (viewDimension)
                {
                    case UnorderedAccessViewDimension.Buffer:
                        Buffer.FirstElement = mipSlice;
                        Buffer.NumElements = firstArraySlice;
                        Buffer.Flags = flags;
                        break;
                    case UnorderedAccessViewDimension.Texture1D:
                        Texture1D.MipSlice = mipSlice;
                        break;
                    case UnorderedAccessViewDimension.Texture1DArray:
                        Texture1DArray.MipSlice = mipSlice;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                    case UnorderedAccessViewDimension.Texture2D:
                        Texture2D.MipSlice = mipSlice;
                        Texture2D.PlaneSlice = planeSlice;
                        break;
                    case UnorderedAccessViewDimension.Texture2DArray:
                        Texture2DArray.MipSlice = mipSlice;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        Texture2DArray.PlaneSlice = planeSlice;
                        break;
                    case UnorderedAccessViewDimension.Texture3D:
                        Texture3D.MipSlice = mipSlice;
                        Texture3D.FirstWSlice = firstArraySlice;
                        Texture3D.WSize = arraySize;
                        break;
                }
            }

                                            public UnorderedAccessViewDescription1(ID3D11Buffer buffer, Format format, uint32_t firstElement{};
                ViewDimension = UnorderedAccessViewDimension.Buffer;
                Buffer.FirstElement = firstElement;
                Buffer.NumElements = numElements;
                Buffer.Flags = flags;
            }

                                                public UnorderedAccessViewDescription1(
                ID3D11Texture1D texture,
                bool isArray,
                Format format{};

                if (format == Format.Unknown
                    || (unchecked((uint)-1) == arraySize && (UnorderedAccessViewDimension.Texture1DArray == ViewDimension)))
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
                    case UnorderedAccessViewDimension.Texture1D:
                        Texture1D.MipSlice = mipSlice;
                        break;
                    case UnorderedAccessViewDimension.Texture1DArray:
                        Texture1DArray.MipSlice = mipSlice;
                        Texture1DArray.FirstArraySlice = firstArraySlice;
                        Texture1DArray.ArraySize = arraySize;
                        break;
                }
            }

                                                    public UnorderedAccessViewDescription1(
                ID3D11Texture2D texture,
                UnorderedAccessViewDimension viewDimension,
                Format format{};

                if (format == Format.Unknown
                    || (unchecked((uint)-1) == arraySize && (viewDimension == UnorderedAccessViewDimension.Texture2DArray)))
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
                    case UnorderedAccessViewDimension.Texture2D:
                        Texture2D.MipSlice = mipSlice;
                        Texture2D.PlaneSlice = planeSlice;
                        break;
                    case UnorderedAccessViewDimension.Texture2DArray:
                        Texture2DArray.MipSlice = mipSlice;
                        Texture2DArray.FirstArraySlice = firstArraySlice;
                        Texture2DArray.ArraySize = arraySize;
                        Texture2DArray.PlaneSlice = planeSlice;
                        break;
                }
            }

                                                public UnorderedAccessViewDescription1(
                ID3D11Texture3D texture,
                UnorderedAccessViewDimension viewDimension,
                Format format{};

                if (format == Format.Unknown || wSize == unchecked((uint)-1))
                {
                    Texture3DDescription textureDesc{};
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

#endif // VORTICE_UNORDEREDACCESSVIEWDESCRIPTION1_H