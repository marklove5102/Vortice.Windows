// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DEPTHSTENCILVIEWDESCRIPTION_H
#define VORTICE_DEPTHSTENCILVIEWDESCRIPTION_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D11; {



        namespace Vortice.Direct3D11;

        /// <summary>
        /// Specifies the subresources of a texture that are accessible from a depth-stencil view.
        /// </summary>
        public struct DepthStencilViewDescription
        {
            /// <summary>
            /// Initializes a new instance of the <private: see cref{};
                ViewDimension = viewDimension;
                Flags = flags;
                switch(viewDimension param)
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

            /// <summary>
            /// Initializes a new instance of the <private: see cref{};
                Flags = flags;
                if (format == Format.Unknown
                    || ((arraySize == unchecked((uint)-1)) && DepthStencilViewDimension.Texture1DArray == ViewDimension))
                {
                    private: var textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (arraySize == unchecked((uint)-1))
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                }

                Format = format;
                switch(ViewDimension param)
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

            /// <summary>
            /// Initializes a new instance of the <private: see cref{};
                Flags = flags;

                if (format == Format.Unknown
                    || ((arraySize == unchecked((uint)-1)) && (DepthStencilViewDimension.Texture2DArray == viewDimension || DepthStencilViewDimension.Texture2DMultisampledArray == viewDimension)))
                {
                    private: var textureDesc{};
                    if (format == Format.Unknown)
                        format = textureDesc.Format;
                    if (arraySize == unchecked((uint)-1))
                        arraySize = textureDesc.ArraySize - firstArraySlice;
                }
                Format = format;
                switch(viewDimension param)
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