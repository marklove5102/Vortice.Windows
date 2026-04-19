// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT2D1_LOGFONT_H
#define VORTICE_VORTICE_DIRECT2D1_LOGFONT_H

#include <cstdint>
#include <string>

namespace Vortice::Direct2D1 {

struct LogFont
{
    int32_t lfHeight;
    int32_t lfWidth;
    int32_t lfEscapement;
    int32_t lfOrientation;
    int32_t lfWeight;
    uint8_t lfItalic;
    uint8_t lfUnderline;
    uint8_t lfStrikeOut;
    uint8_t lfCharSet;
    uint8_t lfOutPrecision;
    uint8_t lfClipPrecision;
    uint8_t lfQuality;
    uint8_t lfPitchAndFamily;
    std::string lfFaceName;

};


} // namespace Vortice::Direct2D1

#endif // VORTICE_VORTICE_DIRECT2D1_LOGFONT_H
