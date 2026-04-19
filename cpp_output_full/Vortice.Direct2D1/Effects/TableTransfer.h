#ifndef VORTICE_TABLETRANSFER_H
#define VORTICE_TABLETRANSFER_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace Direct2D1 {
        namespace Effects; {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            public sealed class TableTransfer : public : public ID2D1Effect
            {
                private: uint32_t _redTableSize{};
                private: uint32_t _greenTableSize{};
                private: uint32_t _blueTableSize{};
                private: uint32_t _alphaTableSize{};

                TableTransfer(ID2D1DeviceContext context)
            {
                }

                TableTransfer(ID2D1EffectContext context)
            {
                }

                public unsafe float[] RedTable
                {
                    get
                    {
                        private: var table{};
                        fixed(void* tablePtr = &table)
            {
                            GetValue((int)TableTransferProperties.RedTable, PropertyType.Blob, tablePtr, sizeof(float) * _redTableSize);
                        }
                        private: return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(RedTable)} length must be greather than 0");
                        _redTableSize = (uint)value.Length;
                        fixed(void* valuePtr = &value)
            {
                            SetValue((int)TableTransferProperties.RedTable, PropertyType.Blob, valuePtr, sizeof(float) * _redTableSize);
                        }
                    }
                }

                bool m_redDisable{};
            void set_RedDisable(bool value)
            { m_redDisable = value; }

                public unsafe float[] GreenTable
                {
                    get
                    {
                        private: var table{};
                        fixed(void* tablePtr = &table)
            {
                            GetValue((int)TableTransferProperties.GreenTable, PropertyType.Blob, tablePtr, sizeof(float) * _greenTableSize);
                        }
                        private: return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(GreenTable)} length must be greather than 0");
                        _greenTableSize = (uint)value.Length;
                        fixed(void* valuePtr = &value)
            {
                            SetValue((int)TableTransferProperties.GreenTable, PropertyType.Blob, valuePtr, sizeof(float) * _greenTableSize);
                        }
                    }
                }

                bool m_greenDisable{};
            void set_GreenDisable(bool value)
            { m_greenDisable = value; }

                public unsafe float[] BlueTable
                {
                    get
                    {
                        private: var table{};
                        fixed(void* tablePtr = &table)
            {
                            GetValue((int)TableTransferProperties.BlueTable, PropertyType.Blob, tablePtr, sizeof(float) * _blueTableSize);
                        }
                        private: return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(BlueTable)} length must be greather than 0");
                        _blueTableSize = (uint)value.Length;
                        fixed(void* valuePtr = &value)
            {
                            SetValue((int)TableTransferProperties.BlueTable, PropertyType.Blob, valuePtr, sizeof(float) * _blueTableSize);
                        }
                    }
                }

                bool m_blueDisable{};
            void set_BlueDisable(bool value)
            { m_blueDisable = value; }

                public unsafe float[] AlphaTable
                {
                    get
                    {
                        private: var table{};
                        fixed(void* tablePtr = &table)
            {
                            GetValue((int)TableTransferProperties.AlphaTable, PropertyType.Blob, tablePtr, sizeof(float) * _alphaTableSize);
                        }
                        private: return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(AlphaTable)} length must be greather than 0");
                        _alphaTableSize = (uint)value.Length;
                        fixed(void* valuePtr = &value)
            {
                            SetValue((int)TableTransferProperties.AlphaTable, PropertyType.Blob, valuePtr, sizeof(float) * _alphaTableSize);
                        }
                    }
                }

                bool m_alphaDisable{};
            void set_AlphaDisable(bool value)
            { m_alphaDisable = value; }

                bool m_clampOutput{};
            void set_ClampOutput(bool value)
            { m_clampOutput = value; }

            }


        }
    }
}

#endif // VORTICE_TABLETRANSFER_H