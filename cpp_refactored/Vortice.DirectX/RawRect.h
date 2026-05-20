// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RAWRECT_H
#define VORTICE_RAWRECT_H

#include <cstdint>

namespace Vortice {

    namespace Vortice{};

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public readonly record struct RawRect
    {
        public RawRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
            Left = left;
            Top = top;
            Right = right;
            Bottom = bottom;
        }

                    public: const int32_t Left{};

                    public: const int32_t Top{};

                    public: const int32_t Right{};

                    public: const int32_t Bottom{};

                            public static implicit operator RectI(const RawRect& value) const { return new(value.Left, value.Top, value.Right, value.Bottom); } RectI.FromLTRB(value.Left, value.Top, value.Right, value.Bottom);

                            public static implicit operator RawRect(const RectI& value) const { return System.Drawing.Rectangle.FromLTRB(value.Left, value.Top, value.Right, value.Bottom); } new(value.Left, value.Top, value.Right, value.Bottom);

                            public static implicit operator System.Drawing.Rectangle(in RawRect value) => System.Drawing.Rectangle.FromLTRB(value.Left, value.Top, value.Right, value.Bottom);

                            public static implicit operator RawRect(const System::Drawing::Rectangle& value)
    { new(value.Left, value.Top, value.Right, value.Bottom);

    #if WINDOWS
        public static implicit operator RawRect(const Windows::Foundation::Rect& value)
    {
            if (value.Left > int.MaxValue)
                throw new ArgumentOutOfRangeException(nameof(value.Left));

            if (value.Top > int.MaxValue)
                throw new ArgumentOutOfRangeException(nameof(value.Top));

            if (value.Right > int.MaxValue)
                throw new ArgumentOutOfRangeException(nameof(value.Right));

            if (value.Bottom > int.MaxValue)
                throw new ArgumentOutOfRangeException(nameof(value.Bottom));

            return new((int)value.Left, (int)value.Top, (int)value.Right, (int)value.Bottom);
        }
    #endif
    }


}

#endif // VORTICE_RAWRECT_H