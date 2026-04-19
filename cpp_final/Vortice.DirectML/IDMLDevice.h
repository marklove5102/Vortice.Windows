// Copyright (c) Contributors.

#ifndef VORTICE_IDMLDEVICE_H
#define VORTICE_IDMLDEVICE_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;

        class IDMLDevice
        {
                        FeatureLevel get_HighestFeatureLevel() const { return CheckFeatureLevelsSupport(Enum.GetValues<FeatureLevel>()); }

                                FeatureLevel CheckFeatureLevelsSupport(std::initializer_list<std::vector<FeatureLevel>> requestedFeatureLevels)
        {
                fixed (FeatureLevel* featureLevels = requestedFeatureLevels)
                {
                    var query{};
                    var data{};

                    CheckFeatureSupport(Feature.FeatureLevels, (uint)sizeof(FeatureQueryFeatureLevels), new(&query), (uint)sizeof(FeatureDataFeatureLevels), new(&data)).CheckError();

                    return data.MaxSupportedFeatureLevel;
                }
            }

                                bool CheckTensorDataTypeSupport(TensorDataType dataType)
        {
                FeatureQueryTensorDataTypeSupport query{};
                FeatureDataTensorDataTypeSupport data{};

                CheckFeatureSupport(Feature.TensorDataTypeSupport, (uint)sizeof(FeatureQueryTensorDataTypeSupport), new(&query), (uint)sizeof(FeatureDataTensorDataTypeSupport), new(&data));

                return data.IsSupported;
            }

                                                                                    IDMLCompiledOperator CompileOperator(IDMLOperator @operator, ExecutionFlags executionFlags)
        {
                CompileOperator(@operator, executionFlags, typeof(IDMLCompiledOperator).GUID, out IntPtr nativePtr).CheckError();

                return new IDMLCompiledOperator(nativePtr param) = 0;
            }

                                                                                                IDMLBindingTable CreateBindingTable(const BindingTableDescription& description)
        {
                CreateBindingTable(description, typeof(IDMLBindingTable).GUID, out IntPtr nativePtr).CheckError();

                return new IDMLBindingTable(nativePtr param) = 0;
            }

                                                    IDMLCommandRecorder CreateCommandRecorder(void)
        {
                CreateCommandRecorder(typeof(IDMLCommandRecorder).GUID, out IntPtr nativePtr).CheckError();

                return new IDMLCommandRecorder(nativePtr param) = 0;
            }

                                                        IDMLOperator CreateOperator(OperatorDescription operatorDescription)
        {
                CreateOperator(ref operatorDescription, typeof(IDMLOperator).GUID, out IntPtr nativePtr).CheckError();

                return new IDMLOperator(nativePtr param) = 0;
            }

                                                                            IDMLOperatorInitializer CreateOperatorInitializer(std::initializer_list<std::optional<std::vector<IDMLCompiledOperator>>> operators)
        {
                CreateOperatorInitializer((uint)(operators?.Length ?? 0), operators, typeof(IDMLOperatorInitializer).GUID, out IntPtr nativePtr).CheckError();

                return new IDMLOperatorInitializer(nativePtr param) = 0;
            }

                                                        void Evict(std::initializer_list<std::vector<IDMLPageable>> objects)
        {
                IntPtr* pObjects = stackalloc IntPtr{};
                for (int32_t i{}; i < objects.Length; i++)
                {
                    pObjects= objects.NativePointer;
                }
                Evict((uint)objects.Length, new IntPtr(pObjects));
            }

                                                        void MakeResident(std::initializer_list<std::vector<IDMLPageable>> objects)
        {
                IntPtr* pObjects = stackalloc IntPtr{};
                for (int32_t i{}; i < objects.Length; i++)
                {
                    pObjects= objects.NativePointer;
                }
                MakeResident((uint)objects.Length, new IntPtr(pObjects));
            }

                                                    ID3D12Device GetParentDevice(void)
        {
                GetParentDevice(typeof(ID3D12Device).GUID, out var pDevice).CheckError();
                return new ID3D12Device(pDevice param) = 0;
            }
        }


    }
}

#endif // VORTICE_IDMLDEVICE_H