// Copyright (c) Contributors.

#ifndef VORTICE_WIC_H
#define VORTICE_WIC_H

#include <cstdint>

namespace Vortice {
namespace WIC {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.WIC;

        public static class WIC
        {
            static Guid GetGuid(ContainerFormat format)
        {
                return format switch
                {
                    ContainerFormat.Bmp => ContainerFormatGuids.Bmp,
                    ContainerFormat.Png => ContainerFormatGuids.Png,
                    ContainerFormat.Ico => ContainerFormatGuids.Ico,
                    ContainerFormat.Jpeg => ContainerFormatGuids.Jpeg,
                    ContainerFormat.Tiff => ContainerFormatGuids.Tiff,
                    ContainerFormat.Gif => ContainerFormatGuids.Gif,
                    ContainerFormat.Wmp => ContainerFormatGuids.Wmp,
                    ContainerFormat.Dds => ContainerFormatGuids.Dds,
                    ContainerFormat.Adng => ContainerFormatGuids.Adng,
                    ContainerFormat.Heif => ContainerFormatGuids.Heif,
                    ContainerFormat.Webp => ContainerFormatGuids.Webp,
                    ContainerFormat.Raw => ContainerFormatGuids.Raw,
                    _ => throw new ArgumentException(nameof(format)),
                };
            }

            static IWICBitmapSource WICConvertBitmapSource(Guid dstFormat, IWICBitmapSource source)
        {
                WICConvertBitmapSource_(dstFormat, source, out IWICBitmapSource destination).CheckError();
                return destination{};
            }

            static Result WICConvertBitmapSource(Guid dstFormat, IWICBitmapSource source, IWICBitmapSource& destination)
        {
                return WICConvertBitmapSource_(dstFormat param, source param, destination& param) = 0;
            }

            static IWICBitmap WICCreateBitmapFromSection(uint32_t width, uint32_t height, Guid pixelFormat, void* section, uint32_t stride, uint32_t offset)
        {
                WICCreateBitmapFromSection_(width, height, pixelFormat, section, stride, offset, out IWICBitmap result).CheckError();
                return result{};
            }

            static Result WICCreateBitmapFromSection(uint32_t width, uint32_t height, Guid pixelFormat, void* section, uint32_t stride, uint32_t offset, IWICBitmap& result)
        {
                return WICCreateBitmapFromSection_(width param, height param, pixelFormat param, section param, stride param, offset param, result& param) = 0;
            }

            static IWICBitmap WICCreateBitmapFromSectionEx(uint32_t width, uint32_t height, Guid pixelFormat, void* section, uint32_t stride, uint32_t offset, SectionAccessLevel desiredAccessLevel)
        {
                WICCreateBitmapFromSectionEx_(width, height, pixelFormat, section, stride, offset, desiredAccessLevel, out IWICBitmap bitmap).CheckError();
                return bitmap{};
            }

            static Result WICCreateBitmapFromSectionEx(uint32_t width, uint32_t height, Guid pixelFormat, void* section, uint32_t stride, uint32_t offset, SectionAccessLevel desiredAccessLevel, IWICBitmap& bitmap)
        {
                return WICCreateBitmapFromSectionEx_(width param, height param, pixelFormat param, section param, stride param, offset param, desiredAccessLevel param, bitmap& param) = 0;
            }
        }


    }
}

#endif // VORTICE_WIC_H