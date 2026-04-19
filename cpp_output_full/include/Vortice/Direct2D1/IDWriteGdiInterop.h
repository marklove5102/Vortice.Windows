// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITEGDIINTEROP_H
#define VORTICE_DIRECT2D1_IDWRITEGDIINTEROP_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITEGDIINTEROP_H
#define VORTICE_VORTICE_IDWRITEGDIINTEROP_H

#include <cstdint>

namespace Vortice {

class IDWriteGdiInterop
{
public:
    ~IDWriteGdiInterop() = default;

    IDWriteFont CreateFontFromLOGFONT() { int sizeOfLogFont = Marshal.SizeOf(logFont);
        byte* nativeLogFont = stackalloc byte[sizeOfLogFont];
        Marshal.StructureToPtr(logFont, new IntPtr(nativeLogFont), false);
        return CreateFontFromLOGFONT(new IntPtr(nativeLogFont)); }

    bool ConvertFontToLOGFONT() { logFont = new LogFont();
        ConvertFontToLOGFONT(font, out var nativeLogFont, out var isSystemFont);
        Marshal.PtrToStructure(nativeLogFont, logFont);
        return isSystemFont; }

    void ConvertFontFaceToLOGFONT() { logFont = new LogFont();
        ConvertFontFaceToLOGFONT(font, out IntPtr nativeLogFont);
        Marshal.PtrToStructure(nativeLogFont, logFont); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITEGDIINTEROP_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITEGDIINTEROP_H
