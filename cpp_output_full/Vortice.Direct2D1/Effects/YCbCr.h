#ifndef VORTICE_YCBCR_H
#define VORTICE_YCBCR_H

#include <cstdint>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class YCbCr : public : public ID2D1Effect
            {
                YCbCr(ID2D1DeviceContext context)
            {
                }

                YCbCr(ID2D1EffectContext context)
            {
                }

                YCbCrChromaSubSampling m_chromaSubsampling{};
            YCbCrChromaSubSampling get_ChromaSubsampling() const { private: return m_chromaSubsampling{}; }

                Matrix3x2 m_transformMatrix{};
            Matrix3x2 get_TransformMatrix() const { private: return m_transformMatrix{}; }

                YCbCrInterpolationMode m_interpolationMode{};
            YCbCrInterpolationMode get_InterpolationMode() const { private: return m_interpolationMode{}; }

            }


        }
    }
}

#endif // VORTICE_YCBCR_H