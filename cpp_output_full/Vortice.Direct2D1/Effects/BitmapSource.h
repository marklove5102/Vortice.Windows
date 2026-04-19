#ifndef VORTICE_BITMAPSOURCE_H
#define VORTICE_BITMAPSOURCE_H

#include <cstdint>
#include <optional>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            using Vortice.WIC;

            namespace Vortice.Direct2D1.Effects;

            public sealed class BitmapSource : public : public ID2D1Effect
            {
                BitmapSource(ID2D1DeviceContext context)
            {
                }

                BitmapSource(ID2D1EffectContext context)
            {
                }

                std::optional<IWICBitmapSource> m_wicBitmapSource{};
            void set_WicBitmapSource(const std::optional<IWICBitmapSource>& value)
            { m_wicBitmapSource = value; }

                Vector2 m_scale{};
            void set_Scale(Vector2 value)
            { m_scale = value; }

                BitmapSourceInterpolationMode m_interpolationMode{};
            void set_InterpolationMode(BitmapSourceInterpolationMode value)
            { m_interpolationMode = value; }

                bool m_enableDpiCorrection{};
            bool get_EnableDpiCorrection() const { private: return m_enableDpiCorrection{}; }

                BitmapSourceAlphaMode m_alphaMode{};
            BitmapSourceAlphaMode get_AlphaMode() const { private: return m_alphaMode{}; }

                BitmapSourceOrientation m_orientation{};
            BitmapSourceOrientation get_Orientation() const { private: return m_orientation{}; }

            }


        }
    }
}

#endif // VORTICE_BITMAPSOURCE_H