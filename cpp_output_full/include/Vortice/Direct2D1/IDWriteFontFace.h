// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITEFONTFACE_H
#define VORTICE_DIRECT2D1_IDWRITEFONTFACE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITEFONTFACE_H
#define VORTICE_VORTICE_IDWRITEFONTFACE_H

#include <cstdint>

namespace Vortice {

class IDWriteFontFace
{
public:
    ~IDWriteFontFace() = default;

    uint32_t get_FilesCount() const { uint numberOfFiles = 0;
            GetFiles(ref numberOfFiles, nullptr);
            return numberOfFiles; }

    HRESULT GetFiles() { uint numberOfFiles = (uint)files.Length;
        return GetFiles(ref numberOfFiles, files); }

    HRESULT GetDesignGlyphMetrics() { return GetDesignGlyphMetrics(glyphIndices, glyphMetrics, (RawBool)isSideways); }

    HRESULT GetGlyphIndices() { fixed (uint* codePointsPtr = codePoints)
        fixed (ushort* glyphIndicesPtr = glyphIndices)
            return GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr); }

    HRESULT GetGlyphIndices() { fixed (uint* codePointsPtr = codePoints)
        fixed (ushort* glyphIndicesPtr = glyphIndices)
            return GetGlyphIndicesW(codePointsPtr, (uint)codePoints.Length, glyphIndicesPtr); }

    HRESULT GetGlyphIndices() { return GetGlyphIndicesW(codePoints, codePointCount, glyphIndices); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITEFONTFACE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITEFONTFACE_H
