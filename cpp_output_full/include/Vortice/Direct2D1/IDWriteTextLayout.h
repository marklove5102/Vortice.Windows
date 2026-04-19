// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_IDWRITETEXTLAYOUT_H
#define VORTICE_DIRECT2D1_IDWRITETEXTLAYOUT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDWRITETEXTLAYOUT_H
#define VORTICE_VORTICE_IDWRITETEXTLAYOUT_H

#include <cstdint>

namespace Vortice {

class IDWriteTextLayout
{
public:
    ~IDWriteTextLayout() = default;

    std::string GetFontFamilyName() { GetFontFamilyNameLength(currentPosition, out uint nameLength, out textRange);

        uint bufferLength = nameLength + 1;
        char* fontFamilyNamePtr = stackalloc char[(int)bufferLength];

        textRange = GetFontFamilyName(currentPosition, new IntPtr(fontFamilyNamePtr), bufferLength);

        return new string(fontFamilyNamePtr, 0, (int)nameLength); }

    HitTestMetrics HitTestPoint() { HitTestPoint(point.X, point.Y, out isTrailingHit, out isInside, out HitTestMetrics hitTestMetrics);
        return hitTestMetrics; }

    HitTestMetrics HitTestPoint() { HitTestPoint(pointX, pointY, out isTrailingHit, out isInside, out HitTestMetrics hitTestMetrics);
        return hitTestMetrics; }

    HitTestMetrics HitTestTextPosition() { HitTestTextPosition(textPosition, isTrailingHit, out _, out _, out HitTestMetrics hitTestMetrics);
        return hitTestMetrics; }

    HitTestMetrics HitTestTextPosition() { HitTestTextPosition(textPosition, isTrailingHit, out float x, out float y, out HitTestMetrics hitTestMetrics);
        point = new(x, y);
        return hitTestMetrics; }

    void Draw() { Draw(IntPtr.Zero, renderer, originX, originY); }

    void Draw() { Draw(IntPtr.Zero, renderer, origin.X, origin.Y); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDWRITETEXTLAYOUT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_IDWRITETEXTLAYOUT_H
