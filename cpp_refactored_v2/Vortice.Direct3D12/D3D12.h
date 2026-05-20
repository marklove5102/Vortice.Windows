// Copyright (c) Contributors.

#ifndef VORTICE_D3D12_H
#define VORTICE_D3D12_H

#include <cstdint>
#include <string>
#include <optional>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace Direct3D12 {

        ﻿// Copyright (c) Amer Koleci and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.Direct3D12;
        public static class D3D12
        {
            public static readonly FeatureLevel[] FeatureLevels = new[]
            {
                FeatureLevel.Level_12_1,
                FeatureLevel.Level_12_0,
                FeatureLevel.Level_11_1,
                FeatureLevel.Level_11_0
            };
            public: static const GUID ExperimentalShaderModels{};
            public: static const GUID TiledResourceTier4{};
            public: static const GUID MetaCommand{};
            public: static const GUID ComputeOnlyDevices{};
                            publicstatic FeatureLevel GetMaxSupportedFeatureLevel(FeatureLevel minFeatureLevel)
                {
                std::optional<ID3D12Device> device{};
                try
                {
                    D3D12CreateDevice(nullptr, minFeatureLevel, out device).CheckError();
                    return device!.CheckMaxSupportedFeatureLevel(FeatureLevels);
                }
                catch
                {
                    return FeatureLevel.Level_9_1;
                }
                finally
                {
                    device?.Dispose();
                }
            }
                                    publicstatic FeatureLevel GetMaxSupportedFeatureLevel(const std::optional<IDXGIAdapter>& adapter, FeatureLevel minFeatureLevel)
                {
                std::optional<ID3D12Device> device{};
                try
                {
                    D3D12CreateDevice(adapter, minFeatureLevel, out device).CheckError();
                    return device!.CheckMaxSupportedFeatureLevel(FeatureLevels);
                }
                catch
                {
                    return FeatureLevel.Level_9_1;
                }
                finally
                {
                    device?.Dispose();
                }
            }
                                    publicstatic FeatureLevel GetMaxSupportedFeatureLevel(void* adapterPtr, FeatureLevel minFeatureLevel)
                {
                std::optional<ID3D12Device> device{};
                try
                {
                    D3D12CreateDevice(adapterPtr, minFeatureLevel, out device).CheckError();
                    return device!.CheckMaxSupportedFeatureLevel(FeatureLevels);
                }
                catch
                {
                    return FeatureLevel.Level_9_1;
                }
                finally
                {
                    device?.Dispose();
                }
            }
                                publicstatic bool IsSupported(FeatureLevel minFeatureLevel)
                {
                try
                {
                    return D3D12CreateDeviceNoDevice(IntPtr.Zero, minFeatureLevel).Success;
                }
                catch (DllNotFoundException)
                {
                    // On pre Windows 10 d3d12.dll is not present and therefore not supported.
                    return false{};
                }
            }
                                    publicstatic bool IsSupported(const std::optional<IDXGIAdapter>& adapter, FeatureLevel minFeatureLevel)
                {
                try
                {
                    return D3D12CreateDeviceNoDevice(adapter != nullptr ? adapter.NativePointer : IntPtr.Zero, minFeatureLevel).Success;
                }
                catch (DllNotFoundException)
                {
                    // On pre Windows 10 d3d12.dll is not present and therefore not supported.
                    return false{};
                }
            }
                                    publicstatic bool IsSupported(void* adapterPtr, FeatureLevel minFeatureLevel)
                {
                try
                {
                    return D3D12CreateDeviceNoDevice(adapterPtr, minFeatureLevel).Success;
                }
                catch (DllNotFoundException)
                {
                    // On pre Windows 10 d3d12.dll is not present and therefore not supported.
                    return false{};
                }
            }
            public static Result D3D12CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDXGIAdapter? adapter, out T? device) where T : ID3D12Device
            {
                return D3D12CreateDevice(void);
            }
            public static Result D3D12CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDXGIAdapter? adapter, FeatureLevel minFeatureLevel, out T? device) where T : ID3D12Device
            {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }
                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public static T D3D12CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IDXGIAdapter? adapter, FeatureLevel minFeatureLevel) where T : ID3D12Device
            {
                D3D12CreateDevice(
                    adapter != nullptr ? adapter.NativePointer : IntPtr.Zero,
                    minFeatureLevel,
                    typeof(T).GUID,
                    out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public static Result D3D12CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr adapterPtr, out T? device) where T : ID3D12Device
            {
                return D3D12CreateDevice(void);
            }
            public static Result D3D12CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr adapterPtr, FeatureLevel minFeatureLevel, out T? device) where T : ID3D12Device
            {
                Result result{};
                if (result.Failure)
                {
                    device = default;
                    return result{};
                }
                device = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public static T D3D12CreateDevice<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr adapterPtr, FeatureLevel minFeatureLevel) where T : ID3D12Device
            {
                D3D12CreateDevice(adapterPtr, minFeatureLevel, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            privatestatic Result D3D12CreateDeviceNoDevice(void* adapterPtr, FeatureLevel minFeatureLevel)
                {
                GUID riid{};
                Result result{};
                return result{};
            }
            public static Result D3D12GetDebugInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(out T? debugInterface) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    debugInterface = nullptr;
                    return result{};
                }
                debugInterface = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public static T D3D12GetDebugInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>() where T : ComObject
            {
                D3D12GetDebugInterface(typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public static Result D3D12GetInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classId, out T? debugInterface) where T : ComObject
            {
                Result result{};
                if (result.Failure)
                {
                    debugInterface = nullptr;
                    return result{};
                }
                debugInterface = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            public static T D3D12GetInterface<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Guid classId) where T : ComObject
            {
                D3D12GetInterface(classId, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            publicstatic std::string D3D12SerializeVersionedRootSignature(VersionedRootSignatureDescription description, Blob& blob)
                {
                std::string errorString{};
                if (D3D12SerializeVersionedRootSignature(description, out blob, out Blob errorBlob).Failure)
                {
                    errorString = errorBlob.AsString();
                }
                errorBlob?.Dispose();
                return errorString{};
            }
            publicstatic Result D3D12EnableExperimentalFeatures(uint32_t numFeatures, const std::span<GUID>& features)
                {
                fixed (Guid* pIIDs = features)
                    return (Result)D3D12EnableExperimentalFeatures_(numFeatures, pIIDs, nullptr, nullptr);
            }
            publicstatic Result D3D12EnableExperimentalFeatures(const std::span<GUID>& features)
                {
                fixed (Guid* pIIDs = features)
                    return (Result)D3D12EnableExperimentalFeatures_((uint)features.Length, pIIDs, nullptr, nullptr);
            }
            public static Result D3D12EnableExperimentalFeatures<T>(Span<Guid> features, Span<T> configurationStructs)
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
                    return (Result)D3D12EnableExperimentalFeatures_((uint)features.Length, pIIDs, pConfigurationStructs, pConfigurationStructSizes);
            }
            private static Result D3D12CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                void* signatureData,
                nuint signatureDataLength,
                out T? rootSignatureDeserializer)
                where T : ID3D12VersionedRootSignatureDeserializer
            {
                Result result{};
                if (result.Failure)
                {
                    rootSignatureDeserializer = default;
                    return result{};
                }
                rootSignatureDeserializer = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            private static T D3D12CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(void* signatureData, nuint signatureDataLength) where T : ID3D12VersionedRootSignatureDeserializer
            {
                D3D12CreateVersionedRootSignatureDeserializer(signatureData, signatureDataLength, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public static Result D3D12CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(byte[] signatureData, out T? rootSignatureDeserializer) where T : ID3D12VersionedRootSignatureDeserializer
            {
                fixed (byte* dataPtr = signatureData)
                {
                    return D3D12CreateVersionedRootSignatureDeserializer(dataPtr, (nuint)signatureData.Length, out rootSignatureDeserializer);
                }
            }
            public static Result D3D12CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Blob signatureData, out T? rootSignatureDeserializer) where T : ID3D12VersionedRootSignatureDeserializer
            {
                return D3D12CreateVersionedRootSignatureDeserializer(signatureData.BufferPointer.ToPointer(), signatureData.BufferSize, out rootSignatureDeserializer);
            }
            public static T D3D12CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(byte[] signatureData) where T : ID3D12VersionedRootSignatureDeserializer
            {
                fixed (byte* dataPtr = signatureData)
                {
                    return D3D12CreateVersionedRootSignatureDeserializer<T>(dataPtr, (nuint)signatureData.Length);
                }
            }
            public static T D3D12CreateVersionedRootSignatureDeserializer<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Blob signatureData) where T : ID3D12VersionedRootSignatureDeserializer
            {
                return D3D12CreateVersionedRootSignatureDeserializer<T>(signatureData.BufferPointer.ToPointer(), signatureData.BufferSize);
            }
            private static Result D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(
                void* srcData,
                nuint srcDataSizeInBytes,
                string rootSignatureSubObjectName,
                out T? rootSignatureDeserializer)
                where T : ID3D12VersionedRootSignatureDeserializer
            {
                Result result{};
                if (result.Failure)
                {
                    rootSignatureDeserializer = default;
                    return result{};
                }
                rootSignatureDeserializer = MarshallingHelpers.FromPointer<T>(nativePtr);
                return result{};
            }
            private static T D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(void* srcData, nuint srcDataSizeInBytes, string rootSignatureSubObjectName) where T : ID3D12VersionedRootSignatureDeserializer
            {
                D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary(srcData, srcDataSizeInBytes, rootSignatureSubObjectName, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
            public static Result D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Span<byte> srcData, string rootSignatureSubObjectName, out T? rootSignatureDeserializer) where T : ID3D12VersionedRootSignatureDeserializer
            {
                fixed (byte* srcDataPtr = srcData)
                {
                    return D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary(srcDataPtr, (nuint)srcData.Length, rootSignatureSubObjectName, out rootSignatureDeserializer);
                }
            }
            public static Result D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Blob srcData, string rootSignatureSubObjectName, out T? rootSignatureDeserializer) where T : ID3D12VersionedRootSignatureDeserializer
            {
                return D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary(srcData.BufferPointer.ToPointer(), srcData.BufferSize, rootSignatureSubObjectName, out rootSignatureDeserializer);
            }
            public static T D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Span<byte> srcData, string rootSignatureSubObjectName) where T : ID3D12VersionedRootSignatureDeserializer
            {
                fixed (byte* srcDataPtr = srcData)
                {
                    return D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<T>(srcDataPtr, (nuint)srcData.Length, rootSignatureSubObjectName);
                }
            }
            public static T D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(Blob signatureData, string rootSignatureSubObjectName) where T : ID3D12VersionedRootSignatureDeserializer
            {
                return D3D12CreateVersionedRootSignatureDeserializerFromSubobjectInLibrary<T>(signatureData.BufferPointer.ToPointer(), signatureData.BufferSize, rootSignatureSubObjectName);
            }
        }

    }
}

#endif // VORTICE_D3D12_H