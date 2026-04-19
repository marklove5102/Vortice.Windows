// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_GLYPHRUN_H
#define VORTICE_DIRECT2D1_GLYPHRUN_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_GLYPHRUN_H
#define VORTICE_VORTICE_GLYPHRUN_H

#include <cstdint>

namespace Vortice {

class GlyphRun : public IDisposable
{
public:
    ~GlyphRun() = default;

    void* FontFace;
    float FontEmSize;
    int32_t GlyphCount;
    void* GlyphIndices;
    void* GlyphAdvances;
    void* GlyphOffsets;
    RawBool IsSideways;
    int32_t BidiLevel;

    float FontEmSize{};
    bool IsSideways{};
    int32_t BidiLevel{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_GLYPHRUN_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    void* FontFace;
    float FontEmSize;
    int32_t GlyphCount;
    void* GlyphIndices;
    void* GlyphAdvances;
    void* GlyphOffsets;
    RawBool IsSideways;
    int32_t BidiLevel;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_GLYPHRUN_H
