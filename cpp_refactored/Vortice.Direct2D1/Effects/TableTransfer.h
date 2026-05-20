// Copyright (c) Contributors.

#ifndef VORTICE_TABLETRANSFER_H
#define VORTICE_TABLETRANSFER_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace Direct2D1 {
namespace Effects {

            ﻿// Copyright (c) Amer Koleci and Contributors.
            // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

            namespace Vortice.Direct2D1.Effects;

            class TableTransfer : public : ID2D1Effect
            {
                private: uint32_t _redTableSize{};
                private: uint32_t _greenTableSize{};
                private: uint32_t _blueTableSize{};
                private: uint32_t _alphaTableSize{};

                public TableTransfer(ID2D1DeviceContext context)
                     : base(context.CreateEffect(EffectGuids.TableTransfer))
                {
                }

                public TableTransfer(ID2D1EffectContext context)
                    : base(context.CreateEffect(EffectGuids.TableTransfer))
                {
                }

                public unsafe float[] RedTable
                {
                    get
                    {
                        var table{};
                        fixed (void* tablePtr = &table)
                        {
                            GetValue((int)TableTransferProperties.RedTable, PropertyType.Blob, tablePtr, sizeof(float) * _redTableSize);
                        }
                        return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(RedTable)} length must be greather than 0");
                        _redTableSize = (uint)value.Length;
                        fixed (void* valuePtr = &value)
                        {
                            SetValue((int)TableTransferProperties.RedTable, PropertyType.Blob, valuePtr, sizeof(float) * _redTableSize);
                        }
                    }
                }

                public bool RedDisable
                {
                    get => GetBoolValue((int)TableTransferProperties.RedDisable);
                    set => SetValue((int)TableTransferProperties.RedDisable, value);
                }

                public unsafe float[] GreenTable
                {
                    get
                    {
                        var table{};
                        fixed (void* tablePtr = &table)
                        {
                            GetValue((int)TableTransferProperties.GreenTable, PropertyType.Blob, tablePtr, sizeof(float) * _greenTableSize);
                        }
                        return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(GreenTable)} length must be greather than 0");
                        _greenTableSize = (uint)value.Length;
                        fixed (void* valuePtr = &value)
                        {
                            SetValue((int)TableTransferProperties.GreenTable, PropertyType.Blob, valuePtr, sizeof(float) * _greenTableSize);
                        }
                    }
                }

                public bool GreenDisable
                {
                    get => GetBoolValue((int)TableTransferProperties.GreenDisable);
                    set => SetValue((int)TableTransferProperties.GreenDisable, value);
                }

                public unsafe float[] BlueTable
                {
                    get
                    {
                        var table{};
                        fixed (void* tablePtr = &table)
                        {
                            GetValue((int)TableTransferProperties.BlueTable, PropertyType.Blob, tablePtr, sizeof(float) * _blueTableSize);
                        }
                        return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(BlueTable)} length must be greather than 0");
                        _blueTableSize = (uint)value.Length;
                        fixed (void* valuePtr = &value)
                        {
                            SetValue((int)TableTransferProperties.BlueTable, PropertyType.Blob, valuePtr, sizeof(float) * _blueTableSize);
                        }
                    }
                }

                public bool BlueDisable
                {
                    get => GetBoolValue((int)TableTransferProperties.BlueDisable);
                    set => SetValue((int)TableTransferProperties.BlueDisable, value);
                }

                public unsafe float[] AlphaTable
                {
                    get
                    {
                        var table{};
                        fixed (void* tablePtr = &table)
                        {
                            GetValue((int)TableTransferProperties.AlphaTable, PropertyType.Blob, tablePtr, sizeof(float) * _alphaTableSize);
                        }
                        return table{};
                    }
                    set
                    {
                        if (value.Length == 0)
                            throw new ArgumentException($"{nameof(AlphaTable)} length must be greather than 0");
                        _alphaTableSize = (uint)value.Length;
                        fixed (void* valuePtr = &value)
                        {
                            SetValue((int)TableTransferProperties.AlphaTable, PropertyType.Blob, valuePtr, sizeof(float) * _alphaTableSize);
                        }
                    }
                }

                public bool AlphaDisable
                {
                    get => GetBoolValue((int)TableTransferProperties.AlphaDisable);
                    set => SetValue((int)TableTransferProperties.AlphaDisable, value);
                }

                public bool ClampOutput
                {
                    get => GetBoolValue((int)TableTransferProperties.ClampOutput);
                    set => SetValue((int)TableTransferProperties.ClampOutput, value);
                }
            }


        }
    }
}

#endif // VORTICE_TABLETRANSFER_H