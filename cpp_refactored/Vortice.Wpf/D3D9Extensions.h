// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D9EXTENSIONS_H
#define VORTICE_D3D9EXTENSIONS_H

#include <cstdint>

namespace Vortice {
namespace Wpf {

        namespace Vortice.Wpf;

        internal static class D3D9Extensions
        {
            static bool IsShareable(ID3D11Texture2D texture)
        {
                return texture.Description.MiscFlags.HasFlag(ResourceOptionFlags.Shared);
            }

            static Format GetTranslatedFormat(ID3D11Texture2D texture)
        {
                return texture.Description.Format switch
                {
                    DxgiFormat.R10G10B10A2_UNorm => Format.A2B10G10R10,
                    DxgiFormat.R16G16B16A16_Float => Format.A16B16G16R16F,
                    DxgiFormat.B8G8R8A8_UNorm => Format.A8R8G8B8,
                    _ => Format.Unknown,
                };
            }

            static intptr_t GetSharedHandle(ID3D11Texture2D texture)
        {
                IDXGIResource resource{};
                intptr_t result{};
                resource.Dispose();
                return result{};
            }
        }


    }
}

#endif // VORTICE_D3D9EXTENSIONS_H