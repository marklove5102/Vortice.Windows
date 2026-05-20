// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RAWRECTF_H
#define VORTICE_RAWRECTF_H

#include <cstdint>

namespace Vortice {

    namespace Vortice{};

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public readonly record struct RawRectF
    {
        public RawRectF(float left, float top, float right, float bottom)
    {
            Left = left;
            Top = top;
            Right = right;
            Bottom = bottom;
        }

                    public: const float Left{};

                    public: const float Top{};

                    public: const float Right{};

                    public: const float Bottom{};

                            public static implicit operator Rect(RawRectF value) const { return new(value.Left, value.Top, value.Right, value.Bottom); } Rect.FromLTRB(value.Left, value.Top, value.Right, value.Bottom);

                            public static implicit operator RawRectF(const Rect& value) const { return System.Drawing.RectangleF.FromLTRB(value.Left, value.Top, value.Right, value.Bottom); } new(value.Left, value.Top, value.Right, value.Bottom);

                            public static implicit operator System.Drawing.RectangleF(RawRectF value) => System.Drawing.RectangleF.FromLTRB(value.Left, value.Top, value.Right, value.Bottom);

                            public static implicit operator RawRectF(const System::Drawing::RectangleF& value)
    { new(value.Left, value.Top, value.Right, value.Bottom);
    }


}

#endif // VORTICE_RAWRECTF_H