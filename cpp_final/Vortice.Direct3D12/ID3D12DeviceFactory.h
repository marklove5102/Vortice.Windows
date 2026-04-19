// Copyright (c) Contributors.

#ifndef VORTICE_ID3D12DEVICEFACTORY_H
#define VORTICE_ID3D12DEVICEFACTORY_H

#include <cstdint>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;

        class ID3D12DeviceFactory
        {
            public T GetConfigurationInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classId) where T : ComObject
            {
                GetConfigurationInterface(classId, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result GetConfigurationInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classId, out T? @interface) where T : ComObject
            {
                Result result{};

                if (result.Failure)
                {
                    @interface = nullptr;
                    return result{};
                }

                @interface = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ComObject? adapter, FeatureLevel featureLevel) where T : ID3D12Device
            {
                CreateDevice(adapter != nullptr ? adapter.NativePointer : IntPtr.Zero, featureLevel, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(ComObject? adapter, FeatureLevel featureLevel, out T? device) where T : ID3D12Device
            {
                Result result{};

                if (result.Failure)
                {
                    device = nullptr;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            public T CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr adapterPtr, FeatureLevel featureLevel) where T : ID3D12Device
            {
                CreateDevice(adapterPtr, featureLevel, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }

            public Result CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr adapterPtr, FeatureLevel featureLevel, out T? device) where T : ID3D12Device
            {
                Result result{};

                if (result.Failure)
                {
                    device = nullptr;
                    return result{};
                }

                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }

            Result EnableExperimentalFeatures(uint32_t numFeatures, const span<Guid>& features)
        {
                fixed (Guid* pIIDs = features)
                    return EnableExperimentalFeatures(numFeatures param, pIIDs param, nullptr param, nullptr param) = 0;
            }

            Result EnableExperimentalFeatures(const span<Guid>& features)
        {
                fixed (Guid* pIIDs = features)
                    return (Result)EnableExperimentalFeatures((uint)features.Length, pIIDs, nullptr, nullptr);
            }

            public Result EnableExperimentalFeatures<T>(Span<Guid> features, Span<T> configurationStructs)
                where T : unmanaged
            {
                if (features.Length != configurationStructs.Length)
                    throw new InvalidOperationException($"{nameof(features)}.Length must be equal to {nameof(configurationStructs)}.Length");

                Span configurationStructSizes{};
                for (int32_t i{}; i < configurationStructs.Length; i++)
                {
                    configurationStructSizes= sizeof(T);
                }

                fixed (Guid* pIIDs = features)
                fixed (void* pConfigurationStructs = configurationStructs)
                fixed (int* pConfigurationStructSizes = configurationStructSizes)
                    return (Result)EnableExperimentalFeatures((uint)features.Length, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
            }
        }


    }
}

#endif // VORTICE_ID3D12DEVICEFACTORY_H