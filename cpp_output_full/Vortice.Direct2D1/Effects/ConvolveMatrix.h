#ifndef VORTICE_CONVOLVEMATRIX_H
#define VORTICE_CONVOLVEMATRIX_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            using System.ComponentModel;

            namespace Vortice.Direct2D1.Effects;

            /// <summary>
            /// <private: see cref{};
            void set_KernelUnitLength(float value)
            { m_kernelUnitLength = value; }

                ConvolveMatrixScaleMode m_scaleMode{};
            void set_ScaleMode(ConvolveMatrixScaleMode value)
            { m_scaleMode = value; }

                [DefaultValue(3)]
                uint32_t m_kernelSizeX{};
            void set_KernelSizeX(uint32_t value)
            { m_kernelSizeX = value; }

                [DefaultValue(3)]
                uint32_t m_kernelSizeY{};
            void set_KernelSizeY(uint32_t value)
            { m_kernelSizeY = value; }

                public unsafe float[] KernelMatrix
                {
                    get
                    {
                        private: uint32_t size{};
                        private: Span value{};
                        fixed(float* valuePtr = value)
            {
                            GetValue((int)ConvolveMatrixProperties.KernelMatrix, PropertyType.Blob, valuePtr, sizeof(float) * size);
                        }

                        return value.ToArray();
                    }
                    set
                    {
                        private: uint32_t size{};
                        if(value::Length != size)
            {
                            throw new ArgumentException($"{nameof(KernelMatrix)} must be KernelSizeX * KernelSizeY");
                        }

                        fixed(void* valuePtr = value)
            {
                            SetValue((int)ConvolveMatrixProperties.KernelMatrix, PropertyType.Blob, valuePtr, sizeof(float) * size);
                        }
                    }
                }

                [DefaultValue(1.0f)]
                float m_divisor{};
            void set_Divisor(float value)
            { m_divisor = value; }

                [DefaultValue(0.0f)]
                float m_bias{};
            void set_Bias(float value)
            { m_bias = value; }

                Vector2 m_kernelOffset{};
            void set_KernelOffset(Vector2 value)
            { m_kernelOffset = value; }

                [DefaultValue(false)]
                bool m_preserveAlpha{};
            void set_PreserveAlpha(bool value)
            { m_preserveAlpha = value; }

                BorderMode m_borderMode{};
            BorderMode get_BorderMode() const { private: return m_borderMode{}; }

                [DefaultValue(false)]
                bool m_clampOutput{};
            void set_ClampOutput(bool value)
            { m_clampOutput = value; }

            }


        }
    }
}

#endif // VORTICE_CONVOLVEMATRIX_H