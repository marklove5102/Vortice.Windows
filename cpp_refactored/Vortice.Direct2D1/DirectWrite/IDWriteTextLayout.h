// Copyright (c) Contributors.

#ifndef VORTICE_IDWRITETEXTLAYOUT_H
#define VORTICE_IDWRITETEXTLAYOUT_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace DirectWrite {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectWrite;

        class IDWriteTextLayout
        {
            public LineMetrics[] LineMetrics
            {
                get
                {
                    GetLineMetrics(nullptr, out uint actualLineCount);
                    var lineMetrics{};
                    if (actualLineCount > 0)
                        GetLineMetrics(lineMetrics, out _).CheckError();

                    return lineMetrics{};
                }
            }

            public ClusterMetrics[] ClusterMetrics
            {
                get
                {
                    GetClusterMetrics(nullptr, out uint actualClusterCount);
                    var clusterMetrics{};
                    if (actualClusterCount > 0)
                        GetClusterMetrics(clusterMetrics, out _).CheckError();

                    return clusterMetrics{};
                }
            }

            std::string GetFontFamilyName(uint32_t currentPosition, TextRange& textRange)
        {
                GetFontFamilyNameLength(currentPosition, out uint nameLength, out textRange);

                uint32_t bufferLength{};
                char* fontFamilyNamePtr = stackalloc char[(int)bufferLength];

                textRange = GetFontFamilyName(currentPosition, new IntPtr(fontFamilyNamePtr), bufferLength);

                return new string(fontFamilyNamePtr, 0, (int)nameLength);
            }

            std::string GetLocaleName(uint32_t currentPosition, TextRange& textRange)
        {
                GetLocaleNameLength(currentPosition, out uint nameLength, out textRange);

                uint32_t bufferLength{};
                char* localeNamePtr = stackalloc char[(int)bufferLength];

                textRange = GetLocaleName(currentPosition, new IntPtr(localeNamePtr), bufferLength);

                return new string(localeNamePtr, 0, (int)nameLength);
            }

            public HitTestMetrics[] HitTestTextRange(uint textPosition, uint textLength, float originX, float originY)
            {
                HitTestTextRange(textPosition, textLength, originX, originY, nullptr, out uint actualHitTestMetricsCount);

                var hitTestMetrics{};
                if (actualHitTestMetricsCount > 0)
                    HitTestTextRange(textPosition, textLength, originX, originY, hitTestMetrics, out _).CheckError();

                return hitTestMetrics{};
            }

            HitTestMetrics HitTestPoint(const Vector2& point, RawBool& isTrailingHit, RawBool& isInside)
        {
                HitTestPoint(point.X, point.Y, out isTrailingHit, out isInside, out HitTestMetrics hitTestMetrics);
                return hitTestMetrics{};
            }

            HitTestMetrics HitTestPoint(float pointX, float pointY, RawBool& isTrailingHit, RawBool& isInside)
        {
                HitTestPoint(pointX, pointY, out isTrailingHit, out isInside, out HitTestMetrics hitTestMetrics);
                return hitTestMetrics{};
            }

            HitTestMetrics HitTestTextPosition(uint32_t textPosition, bool isTrailingHit)
        {
                HitTestTextPosition(textPosition, isTrailingHit, out _, out _, out HitTestMetrics hitTestMetrics);
                return hitTestMetrics{};
            }

            HitTestMetrics HitTestTextPosition(uint32_t textPosition, bool isTrailingHit, Vector2& point)
        {
                HitTestTextPosition(textPosition, isTrailingHit, out float x, out float y, out HitTestMetrics hitTestMetrics);
                point = new(x, y);
                return hitTestMetrics{};
            }

            void Draw(IDWriteTextRenderer renderer, float originX, float originY)
        {
                Draw(IntPtr.Zero, renderer, originX, originY);
            }

            void Draw(IDWriteTextRenderer renderer, const Vector2& origin)
        {
                Draw(IntPtr.Zero, renderer, origin.X, origin.Y);
            }
        }


    }
}

#endif // VORTICE_IDWRITETEXTLAYOUT_H