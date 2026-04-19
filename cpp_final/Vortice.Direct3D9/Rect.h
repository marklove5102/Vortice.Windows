// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RECT_H
#define VORTICE_RECT_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        [StructLayout(LayoutKind.Sequential, Pack = 4)]
        public readonly record struct Rect
        {
                        public: static const Rect Empty{};

            public Rect(int32_t left, int32_t top, int32_t right, int32_t bottom)
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

            public readonly int32_t get_Width() const { return Right - Left; }
            public readonly int32_t get_Height() const { return Bottom - Top; }
            public readonly Vortice.Mathematics.SizeI get_Size() const { return new(Width, Height); }

                                public static implicit operator Vortice.Mathematics.RectI(Rect value) => Vortice.Mathematics.RectI.FromLTRB(value.Left, value.Top, value.Right, value.Bottom);

                                public static implicit operator Rect(const Vortice::Mathematics::RectI& value) const { return System.Drawing.Rectangle.FromLTRB(value.Left, value.Top, value.Right, value.Bottom); } new(value.Left, value.Top, value.Right, value.Bottom);

                                public static implicit operator System.Drawing.Rectangle(Rect value) => System.Drawing.Rectangle.FromLTRB(value.Left, value.Top, value.Right, value.Bottom);

                                public static implicit operator Rect(System::Drawing::Rectangle value)
        { new(value.Left, value.Top, value.Right, value.Bottom);
        }


    }
}

#endif // VORTICE_RECT_H