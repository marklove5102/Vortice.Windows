// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITEFACTORY4_H
#define VORTICE_DIRECT2D1_IDWRITEFACTORY4_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITEFACTORY4_H
#define VORTICE_VORTICE_IDWRITEFACTORY4_H

#include <cstdint>

namespace Vortice {

class IDWriteFactory4
{
public:
    ~IDWriteFactory4() = default;

    HRESULT TranslateColorGlyphRun() { return TranslateColorGlyphRun(baselineOrigin, glyphRun, nullptr, desiredGlyphImageFormats, measuringMode, nullptr, 0, out colorLayers); }

    IDWriteColorGlyphRunEnumerator1 TranslateColorGlyphRun() { TranslateColorGlyphRun(baselineOrigin, glyphRun, nullptr,
            desiredGlyphImageFormats,
            measuringMode, nullptr, 0, out IDWriteColorGlyphRunEnumerator1 colorLayers).CheckError();
        return colorLayers; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITEFACTORY4_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITEFACTORY4_H
