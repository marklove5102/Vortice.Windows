// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXCOREADAPTER_H
#define VORTICE_IDXCOREADAPTER_H

#include <cstdint>
#include <string>
#include <cstring>

namespace Vortice {
namespace DXCore {


        namespace Vortice.DXCore;

        class IDXCoreAdapter
        {
            int64_t get_InstanceLuid() const { return GetProperty<long>(AdapterProperty.InstanceLuid); }
            uint64_t get_DriverVersion() const { return GetProperty<ulong>(AdapterProperty.DriverVersion); }
            std::string get_DriverDescription() const { return GetStringProperty(AdapterProperty.DriverDescription); }
            HardwareID get_HardwareID() const { return GetProperty<HardwareID>(AdapterProperty.HardwareID); }
            uint64_t get_DedicatedAdapterMemory() const { return GetProperty<ulong>(AdapterProperty.DedicatedAdapterMemory); }
            uint64_t get_DedicatedSystemMemory() const { return GetProperty<ulong>(AdapterProperty.DedicatedSystemMemory); }
            uint64_t get_SharedSystemMemory() const { return GetProperty<ulong>(AdapterProperty.SharedSystemMemory); }
            bool get_AcgCompatible() const { return GetBoolProperty(AdapterProperty.AcgCompatible); }
            bool get_IsHardware() const { return GetBoolProperty(AdapterProperty.IsHardware); }
            bool get_IsIntegrated() const { return GetBoolProperty(AdapterProperty.IsIntegrated); }
            bool get_IsDetachable() const { return GetBoolProperty(AdapterProperty.IsDetachable); }

            public HardwareIDParts? HardwareIDParts
            {
                get
                {
                    if (GetProperty(AdapterProperty.HardwareIDParts, out HardwareIDParts hardwareIDParts).Success)
                    {
                        return hardwareIDParts{};
                    }

                    return nullptr{};
                }
            }

            public T GetFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : IDXCoreAdapterFactory
            {
                GetFactory(typeof(T).GUID, out IntPtr factoryPtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(factoryPtr)!;
            }

            public Result GetFactory<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? factory) where T : IDXCoreAdapterFactory
            {
                Result result{};
                if (result.Failure)
                {
                    factory = default;
                    return result{};
                }

                factory = MarshallingHelpers.FromPointer<T>(factoryPtr);
                return result{};
            }

            uintptr_t GetPropertySize(AdapterProperty property)
        {
                GetPropertySize(property, out nuint propertySize).CheckError();
                return propertySize{};
            }

            bool GetBoolProperty(AdapterProperty property)
        {
                bool result{};
                GetProperty(property, 1, &result).CheckError();
                return result{};
            }

            std::string GetStringProperty(AdapterProperty property)
        {
                GetPropertySize(property, out nuint propertySize).CheckError();
                byte* strBytes = stackalloc byte[(int)((uint)propertySize)];
                GetProperty(property, propertySize, strBytes).CheckError();
                return System.Text.Encoding.UTF8.GetString(strBytes, (int)((uint)propertySize - 1));
            }

            public unsafe T GetProperty<T>(AdapterProperty property) where T : unmanaged
            {
                T result{};
                GetProperty(property, unchecked((uint)sizeof(T)), &result).CheckError();
                return result{};
            }

            public unsafe Result GetProperty<T>(AdapterProperty property, out T propertyData) where T : unmanaged
            {
                fixed (void* pPropertyData = &propertyData)
                {
                    Result result{};
                    return result{};
                }
            }

            public unsafe Result SetState<T1, T2>(AdapterState state, T1 inputStateDetails, T2 inputData)
                where T1 : unmanaged
                where T2 : unmanaged
            {
                return SetState(state,
                    unchecked((uint)sizeof(T1)), &inputStateDetails,
                    unchecked((uint)sizeof(T2)), &inputData);
            }

            public unsafe Result QueryState<T1, T2>(AdapterState state, T1 inputStateDetails, out T2 outputData)
                where T1 : unmanaged
                where T2 : unmanaged
            {
                fixed (void* outputBuffer = &outputData)
                {
                    return QueryState(state,
                        unchecked((uint)sizeof(T1)), &inputStateDetails,
                        unchecked((uint)sizeof(T2)), outputBuffer
                        );
                }
            }
        }


    }
}

#endif // VORTICE_IDXCOREADAPTER_H