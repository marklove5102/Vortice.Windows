// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DCOMMON_PIXELFORMAT_H
#define VORTICE_DCOMMON_PIXELFORMAT_H

#include <Vortice/DXGI/Format.h>
#include <Vortice/DXGI/AlphaMode.h>

namespace Vortice::DCommon
{
    struct PixelFormat
    {
        DXGI::Format Format;
        DXGI::AlphaMode AlphaMode;

        PixelFormat() : Format(DXGI::Format::Unknown), AlphaMode(DXGI::AlphaMode::Unknown) {}

        PixelFormat(DXGI::Format format, DXGI::AlphaMode alphaMode)
            : Format(format), AlphaMode(alphaMode) {}

        static const PixelFormat Unknown;
        static const PixelFormat Premultiplied;
    };

    inline const PixelFormat PixelFormat::Unknown = PixelFormat(DXGI::Format::Unknown, DXGI::AlphaMode::Unknown);
    inline const PixelFormat PixelFormat::Premultiplied = PixelFormat(DXGI::Format::Unknown, DXGI::AlphaMode::Premultiplied);
}

#endif // VORTICE_DCOMMON_PIXELFORMAT_H
