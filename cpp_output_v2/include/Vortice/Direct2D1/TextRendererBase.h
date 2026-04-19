// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_TEXTRENDERERBASE_H
#define VORTICE_DIRECT2D1_TEXTRENDERERBASE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_TEXTRENDERERBASE_H
#define VORTICE_VORTICE_TEXTRENDERERBASE_H

#include <cstdint>

namespace Vortice {

class TextRendererBase : public CallbackBase, public IDWriteTextRenderer
{
public:
    ~TextRendererBase() = default;

    virtual Matrix3x2 GetCurrentTransform() { return Matrix3x2.Identity; }

    virtual float GetPixelsPerDip() { return 1.0f; }

    virtual RawBool IsPixelSnappingDisabled() { return false; }

    virtual void DrawGlyphRun();

    virtual void DrawInlineObject();

    virtual void DrawStrikethrough();

    virtual void DrawUnderline();

};

} // namespace Vortice

#endif // VORTICE_VORTICE_TEXTRENDERERBASE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_THE_H
#define VORTICE_VORTICE_THE_H

#include <cstdint>

namespace Vortice {

struct the
{
public:
    virtual void DrawGlyphRun();

};

} // namespace Vortice

#endif // VORTICE_VORTICE_THE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_THE_H
#define VORTICE_VORTICE_THE_H

#include <cstdint>

namespace Vortice {

struct the
{
public:
    virtual void DrawStrikethrough();

};

} // namespace Vortice

#endif // VORTICE_VORTICE_THE_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_THE_H
#define VORTICE_VORTICE_THE_H

#include <cstdint>

namespace Vortice {

struct the
{
public:
    virtual void DrawUnderline();

};

} // namespace Vortice

#endif // VORTICE_VORTICE_THE_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_TEXTRENDERERBASE_H
