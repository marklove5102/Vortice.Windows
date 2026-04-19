// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITETEXTFORMAT_H
#define VORTICE_DIRECT2D1_IDWRITETEXTFORMAT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITETEXTFORMAT_H
#define VORTICE_VORTICE_IDWRITETEXTFORMAT_H

#include <cstdint>

namespace Vortice {

class IDWriteTextFormat
{
public:
    ~IDWriteTextFormat() = default;

    std::string get_FontFamilyName() const { uint fontFamilyNameLength = GetFontFamilyNameLength();
            char* fontFamilyName = stackalloc char[(int)fontFamilyNameLength + 1];
            GetFontFamilyName(new IntPtr(fontFamilyName), fontFamilyNameLength + 1);
            return new string(fontFamilyName, 0, (int)fontFamilyNameLength); }
    std::string get_LocaleName() const { uint localNameLength = GetLocaleNameLength();
            char* localName = stackalloc char[(int)localNameLength + 1];
            GetLocaleName(new IntPtr(localName), localNameLength + 1);
            return new string(localName, 0, (int)localNameLength); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITETEXTFORMAT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITETEXTFORMAT_H
