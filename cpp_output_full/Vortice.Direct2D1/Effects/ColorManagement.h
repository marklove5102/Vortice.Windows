#ifndef VORTICE_COLORMANAGEMENT_H
#define VORTICE_COLORMANAGEMENT_H

#include <cstdint>
#include <optional>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public class ColorManagement : public : public ID2D1Effect
            {
                ColorManagement(ID2D1DeviceContext context)
            {
                }

                ColorManagement(ID2D1EffectContext context)
            {
                }

                std::optional<ID2D1ColorContext> m_sourceColorContext{};
            void set_SourceColorContext(const std::optional<ID2D1ColorContext>& value)
            { m_sourceColorContext = value; }

                ColorManagementRenderingIntent m_sourceRenderingIntent{};
            ColorManagementRenderingIntent get_SourceRenderingIntent() const { private: return m_sourceRenderingIntent{}; }

                std::optional<ID2D1ColorContext> m_destinationColorContext{};
            void set_DestinationColorContext(const std::optional<ID2D1ColorContext>& value)
            { m_destinationColorContext = value; }

                ColorManagementRenderingIntent m_destinationRenderingIntent{};
            ColorManagementRenderingIntent get_DestinationRenderingIntent() const { private: return m_destinationRenderingIntent{}; }

                ColorManagementAlphaMode m_alphaMode{};
            ColorManagementAlphaMode get_AlphaMode() const { private: return m_alphaMode{}; }

                ColormanagementQuality m_quality{};
            ColormanagementQuality get_Quality() const { private: return m_quality{}; }

            }


        }
    }
}

#endif // VORTICE_COLORMANAGEMENT_H