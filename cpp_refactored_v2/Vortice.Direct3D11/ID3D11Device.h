// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICE_H
#define VORTICE_ID3D11DEVICE_H

#include <cstdint>
#include <vector>
#include <optional>
#include <span>
#include <guiddef.h>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;
        publicclass ID3D11Device
        {
                        public string? DebugName
            {
                get
                {
                    byte* pname = stackalloc byte{};
                    uint32_t size{};
                    if (GetPrivateData(CommonGuid.DebugObjectName, ref size, new IntPtr(pname)).Failure)
                    {
                        return string.Empty;
                    }
                    pname= 0;
                    return Marshal.PtrToStringAnsi(new IntPtr(pname));
                }
                set
                {
                    if (string.IsNullOrEmpty(value))
                    {
                        SetPrivateData(CommonGuid.DebugObjectName, 0, IntPtr.Zero);
                    }
                    else
                    {
                        void* namePtr{};
                        SetPrivateData(CommonGuid.DebugObjectName, (uint)value!.Length, namePtr);
                        Marshal.FreeHGlobal(namePtr);
                    }
                }
            }
            public T CheckFeatureSupport<T>(Feature feature) where T : unmanaged
            {
                T featureSupport{};
                CheckFeatureSupport(feature, &featureSupport, (uint)sizeof(T));
                return featureSupport{};
            }
            public bool CheckFeatureSupport<T>(Feature feature, ref T featureSupport) where T : unmanaged
            {
                fixed (T* featureSupportPtr = &featureSupport)
                {
                    return CheckFeatureSupport(feature, featureSupportPtr, (uint)sizeof(T)).Success;
                }
            }
                                            publicResult CheckThreadingSupport(bool& supportsConcurrentResources, bool& supportsCommandLists)
                {
                FeatureDataThreading support{};
                Result result{};
                if (result.Failure)
                {
                    supportsConcurrentResources = false;
                    supportsCommandLists = false;
                }
                else
                {
                    supportsConcurrentResources = support.DriverConcurrentCreates;
                    supportsCommandLists = support.DriverCommandLists;
                }
                return result{};
            }
            publicFeatureDataThreading CheckFeatureThreading(void)
                {
                return CheckFeatureSupport<FeatureDataThreading>(Feature.Threading);
            }
            publicFeatureDataDoubles CheckFeatureDoubles(void)
                {
                return CheckFeatureSupport<FeatureDataDoubles>(Feature.Doubles);
            }
            publicFeatureDataD3D11Options CheckFeatureOptions(void)
                {
                return CheckFeatureSupport<FeatureDataD3D11Options>(Feature.D3D11Options);
            }
            publicFeatureDataArchitectureInfo CheckFeatureArchitectureInfo(void)
                {
                return CheckFeatureSupport<FeatureDataArchitectureInfo>(Feature.ArchitectureInfo);
            }
            publicFeatureDataShaderMinPrecisionSupport CheckFeatureShaderMinPrecisionSupport(void)
                {
                return CheckFeatureSupport<FeatureDataShaderMinPrecisionSupport>(Feature.ShaderMinPrecisionSupport);
            }
            publicFeatureDataD3D11Options1 CheckFeatureOptions1(void)
                {
                return CheckFeatureSupport<FeatureDataD3D11Options1>(Feature.D3D11Options1);
            }
            publicFeatureDataD3D11Options2 CheckFeatureOptions2(void)
                {
                return CheckFeatureSupport<FeatureDataD3D11Options2>(Feature.D3D11Options2);
            }
            publicFeatureDataD3D11Options3 CheckFeatureOptions3(void)
                {
                return CheckFeatureSupport<FeatureDataD3D11Options3>(Feature.D3D11Options3);
            }
            publicFeatureDataD3D11Options4 CheckFeatureOptions4(void)
                {
                return CheckFeatureSupport<FeatureDataD3D11Options4>(Feature.D3D11Options4);
            }
            publicFeatureDataD3D11Options5 CheckFeatureOptions5(void)
                {
                return CheckFeatureSupport<FeatureDataD3D11Options5>(Feature.D3D11Options5);
            }
            publicFeatureDataGpuVirtualAddressSupport CheckFeatureGpuVirtualAddressSupport(void)
                {
                return CheckFeatureSupport<FeatureDataGpuVirtualAddressSupport>(Feature.GpuVirtualAddressSupport);
            }
            publicFeatureDataShaderCache CheckFeatureShaderCache(void)
                {
                return CheckFeatureSupport<FeatureDataShaderCache>(Feature.ShaderCache);
            }
            publicFormatSupport CheckFeatureFormatSupport(Format format)
                {
                FeatureDataFormatSupport support{};
                support.InFormat = format;
                if (CheckFeatureSupport(Feature.FormatSupport, &support, (uint)sizeof(FeatureDataFormatSupport2)).Failure)
                {
                    return FormatSupport.None;
                }
                return support.OutFormatSupport;
            }
            publicFormatSupport2 CheckFeatureFormatSupport2(Format format)
                {
                FeatureDataFormatSupport2 support{};
                support.InFormat = format;
                if (CheckFeatureSupport(Feature.FormatSupport2, &support, (uint)sizeof(FeatureDataFormatSupport2)).Failure)
                {
                    return FormatSupport2.None;
                }
                return support.OutFormatSupport2;
            }
            publicID3D11DeviceContext CreateDeferredContext(void)
                {
                return CreateDeferredContext(void);
            }
            publicID3D11Buffer CreateBuffer(const BufferDescription& description, const std::optional<SubresourceData>& initialData)
                {
                CreateBuffer(description, initialData, out ID3D11Buffer buffer).CheckError();
                return buffer{};
            }
            publicID3D11Buffer CreateBuffer(const BufferDescription& description, void* dataPointer)
                {
                CreateBuffer(description,
                    dataPointer != IntPtr.Zero ? new SubresourceData(dataPointer) : (SubresourceData?)default,
                    out ID3D11Buffer buffer).CheckError();
                return buffer{};
            }
            publicID3D11Buffer CreateBuffer(const BufferDescription& description, DataStream data)
                {
                return CreateBuffer(description, new SubresourceData(data.PositionPointer, 0, 0));
            }
            public ID3D11Buffer CreateBuffer<T>(in T data, BufferDescription description) where T : unmanaged
            {
                if (description.ByteWidth == 0)
                    description.ByteWidth = (uint)sizeof(T);
                fixed (T* dataPtr = &data)
                {
                    return CreateBuffer(description, new SubresourceData((IntPtr)dataPtr));
                }
            }
            public ID3D11Buffer CreateBuffer<T>(Span<T> data, BufferDescription description) where T : unmanaged
            {
                if (description.ByteWidth == 0)
                    description.ByteWidth = (uint)(sizeof(T) * data.Length);
                fixed (T* dataPtr = data)
                {
                    return CreateBuffer(description, new SubresourceData((IntPtr)dataPtr));
                }
            }
            public ID3D11Buffer CreateBuffer<T>(ReadOnlySpan<T> data, BufferDescription description) where T : unmanaged
            {
                if (description.ByteWidth == 0)
                    description.ByteWidth = (uint)(sizeof(T) * data.Length);
                fixed (T* dataPtr = data)
                {
                    return CreateBuffer(description, new SubresourceData((IntPtr)dataPtr));
                }
            }
                                                    publicID3D11Buffer CreateBuffer(uint32_t sizeInBytes, BindFlags bindFlags, ResourceUsage usage, CpuAccessFlags accessFlags, ResourceOptionFlags miscFlags, uint32_t structureByteStride)
                {
                BufferDescription description{};
                CreateBuffer(description, nullptr, out ID3D11Buffer buffer).CheckError();
                return buffer{};
            }
                                                            public ID3D11Buffer CreateBuffer<T>(T[] data,
                BindFlags bindFlags,
                ResourceUsage usage{};
                fixed (T* dataPtr = data)
                {
                    return CreateBuffer(description, new SubresourceData((IntPtr)dataPtr));
                }
            }
                                                            public ID3D11Buffer CreateBuffer<T>(Span<T> data,
                BindFlags bindFlags,
                ResourceUsage usage{};
                fixed (T* dataPtr = data)
                {
                    return CreateBuffer(description, new SubresourceData((IntPtr)dataPtr));
                }
            }
                                                            public ID3D11Buffer CreateBuffer<T>(ReadOnlySpan<T> data,
                BindFlags bindFlags,
                ResourceUsage usage{};
                fixed (T* dataPtr = data)
                {
                    return CreateBuffer(description, new SubresourceData((IntPtr)dataPtr));
                }
            }
            public ID3D11Buffer CreateConstantBuffer<T>() where T : unmanaged
            {
                uint32_t sizeInBytes{};
                BufferDescription description{};
                return CreateBuffer(description, (SubresourceData?)nullptr);
            }
            publicID3D11VertexShader CreateVertexShader(const std::span<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateVertexShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11VertexShader CreateVertexShader(const std::span<const uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateVertexShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11VertexShader CreateVertexShader(const std::vector<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateVertexShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11VertexShader CreateVertexShader(Blob shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                return CreateVertexShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage);
            }
            publicID3D11PixelShader CreatePixelShader(const std::span<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreatePixelShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11PixelShader CreatePixelShader(const std::span<const uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreatePixelShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11PixelShader CreatePixelShader(const std::vector<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreatePixelShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11PixelShader CreatePixelShader(Blob shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                return CreatePixelShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage);
            }
            publicID3D11GeometryShader CreateGeometryShader(const std::span<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateGeometryShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11GeometryShader CreateGeometryShader(const std::span<const uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateGeometryShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11GeometryShader CreateGeometryShader(const std::vector<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateGeometryShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11GeometryShader CreateGeometryShader(Blob shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                return CreateGeometryShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage);
            }
            publicID3D11HullShader CreateHullShader(const std::span<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateHullShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11HullShader CreateHullShader(const std::span<const uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateHullShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11HullShader CreateHullShader(const std::vector<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateHullShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11HullShader CreateHullShader(Blob shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                return CreateHullShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage);
            }
            publicID3D11DomainShader CreateDomainShader(const std::span<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateDomainShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11DomainShader CreateDomainShader(const std::span<const uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateDomainShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11DomainShader CreateDomainShader(const std::vector<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateDomainShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11DomainShader CreateDomainShader(Blob shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                return CreateDomainShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage);
            }
            publicID3D11ComputeShader CreateComputeShader(const std::span<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateComputeShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11ComputeShader CreateComputeShader(const std::span<const uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateComputeShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11ComputeShader CreateComputeShader(const std::vector<uint8_t>& shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateComputeShader(pBuffer, (nuint)shaderBytecode.Length, classLinkage);
                }
            }
            publicID3D11ComputeShader CreateComputeShader(Blob shaderBytecode, const std::optional<ID3D11ClassLinkage>& classLinkage)
                {
                return CreateComputeShader(shaderBytecode.BufferPointer.ToPointer(), shaderBytecode.BufferSize, classLinkage);
            }
                                    publicID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, const std::span<uint8_t>& shaderBytecode)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateInputLayout(inputElements, (uint)inputElements.Length, pBuffer, (nuint)shaderBytecode.Length);
                }
            }
                                    publicID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, const std::span<const uint8_t>& shaderBytecode)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateInputLayout(inputElements, (uint)inputElements.Length, pBuffer, (nuint)shaderBytecode.Length);
                }
            }
                                    publicID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, const std::vector<uint8_t>& shaderBytecode)
                {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateInputLayout(inputElements, (uint)inputElements.Length, pBuffer, (nuint)shaderBytecode.Length);
                }
            }
                                    publicID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, Blob blob)
                {
                return CreateInputLayout(inputElements, (uint)inputElements.Length, blob.BufferPointer.ToPointer(), blob.BufferSize);
            }
            publicID3D11Query CreateQuery(QueryType queryType, QueryFlags miscFlags)
                {
                return CreateQuery(new QueryDescription(queryType, miscFlags));
            }
            publicID3D11Texture1D CreateTexture1D(const Texture1DDescription& description)
                {
                return CreateTexture1D(description, (void*)nullptr);
            }
            publicID3D11Texture1D CreateTexture1D(const Texture1DDescription& description, SubresourceData initialData)
                {
                return CreateTexture1D(void);
            }
            publicID3D11Texture1D CreateTexture1D(const Texture1DDescription& description, const std::optional<std::vector<SubresourceData>>& initialData)
                {
                if (initialData != nullptr && initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture1D(void);
                    }
                }
                else
                {
                    return CreateTexture1D(description, (void*)nullptr);
                }
            }
            publicID3D11Texture1D CreateTexture1D(const Texture1DDescription& description, const std::span<SubresourceData>& initialData)
                {
                if (initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture1D(void);
                    }
                }
                else
                {
                    return CreateTexture1D(description, (void*)nullptr);
                }
            }
            publicID3D11Texture1D CreateTexture1D(Format format, uint32_t width, uint32_t arraySize, uint32_t mipLevels, const std::optional<std::vector<SubresourceData>>& initialData, BindFlags bindFlags, ResourceOptionFlags miscFlags, ResourceUsage usage, CpuAccessFlags cpuAccessFlags)
                {
                Texture1DDescription description{};
                return CreateTexture1D(void);
            }
            public ID3D11Texture1D CreateTexture1D<T>(
                Span<T> initialData,
                Format format,
                uint width,
                uint32_t arraySize{};
                fixed (T* initialDataPtr = initialData)
                {
                    FormatHelper.GetSurfaceInfo(format, width, 1, out uint rowPitch, out uint slicePitch);
                    SubresourceData initData{};
                    return CreateTexture1D(void);
                }
            }
            public ID3D11Texture1D CreateTexture1D<T>(
                ReadOnlySpan<T> initialData,
                Format format,
                uint width,
                uint32_t arraySize{};
                fixed (T* initialDataPtr = initialData)
                {
                    FormatHelper.GetSurfaceInfo(format, width, 1, out uint rowPitch, out uint slicePitch);
                    SubresourceData initData{};
                    return CreateTexture1D(void);
                }
            }
            publicID3D11Texture2D CreateTexture2D(const Texture2DDescription& description)
                {
                return CreateTexture2D(description, (void*)nullptr);
            }
            publicID3D11Texture2D CreateTexture2D(const Texture2DDescription& description, SubresourceData initialData)
                {
                return CreateTexture2D(void);
            }
            publicID3D11Texture2D CreateTexture2D(const Texture2DDescription& description, const std::span<SubresourceData>& initialData)
                {
                if (initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture2D(void);
                    }
                }
                else
                {
                    return CreateTexture2D(description, (void*)nullptr);
                }
            }
            publicID3D11Texture2D CreateTexture2D(const Texture2DDescription& description, const std::vector<DataRectangle>& data)
                {
                SubresourceData[] subResourceDatas = new SubresourceData{};
                for (int32_t i{}; i < subResourceDatas.Length; i++)
                {
                    subResourceDatas.DataPointer = data.DataPointer;
                    subResourceDatas.RowPitch = data.Pitch;
                }
                return CreateTexture2D(void);
            }
            publicID3D11Texture2D CreateTexture2D(Format format, uint32_t width, uint32_t height, uint32_t arraySize, uint32_t mipLevels, const std::optional<std::vector<SubresourceData>>& initialData, BindFlags bindFlags, ResourceOptionFlags miscFlags, ResourceUsage usage, CpuAccessFlags cpuAccessFlags)
                {
                return CreateTexture2D(new Texture2DDescription(format, width, height, arraySize, mipLevels, bindFlags, usage, cpuAccessFlags, 1, 0, miscFlags), initialData);
            }
            public ID3D11Texture2D CreateTexture2D<T>(T[] initialData,
                Format format,
                uint width,
                uint height,
                uint32_t arraySize{};
                fixed (T* initialDataPtr = initialData)
                {
                    FormatHelper.GetSurfaceInfo(format, width, height, out uint rowPitch, out uint slicePitch);
                    SubresourceData initData{};
                    return CreateTexture2D(void);
                }
            }
            public ID3D11Texture2D CreateTexture2D<T>(Span<T> initialData,
                Format format,
                uint width,
                uint height,
                uint32_t arraySize{};
                fixed (T* initialDataPtr = initialData)
                {
                    FormatHelper.GetSurfaceInfo(format, width, height, out uint rowPitch, out uint slicePitch);
                    SubresourceData initData{};
                    return CreateTexture2D(void);
                }
            }
            public ID3D11Texture2D CreateTexture2D<T>(ReadOnlySpan<T> initialData,
                Format format,
                uint width,
                uint height,
                uint32_t arraySize{};
                fixed (T* initialDataPtr = initialData)
                {
                    FormatHelper.GetSurfaceInfo(format, width, height, out uint rowPitch, out uint slicePitch);
                    SubresourceData initData{};
                    return CreateTexture2D(void);
                }
            }
            publicID3D11Texture2D CreateTexture2DMultisample(Format format, uint32_t width, uint32_t height, uint32_t sampleCount, uint32_t arraySize, BindFlags bindFlags, ResourceOptionFlags miscFlags)
                {
                if (sampleCount < 1)
                {
                    throw new ArgumentException(nameof(sampleCount));
                }
                return CreateTexture2D(new Texture2DDescription(format, width, height, arraySize, 1, bindFlags, ResourceUsage.Default, CpuAccessFlags.None, sampleCount, 0, miscFlags), (void*)nullptr);
            }
            publicID3D11Texture2D CreateTextureCube(Format format, uint32_t size, uint32_t mipLevels, const std::optional<std::vector<SubresourceData>>& initialData, BindFlags bindFlags, ResourceOptionFlags miscFlags, ResourceUsage usage, CpuAccessFlags cpuAccessFlags)
                {
                Texture2DDescription description{};
                return CreateTexture2D(void);
            }
            publicID3D11Texture3D CreateTexture3D(const Texture3DDescription& description)
                {
                return CreateTexture3D(description, (void*)nullptr);
            }
            publicID3D11Texture3D CreateTexture3D(const Texture3DDescription& description, SubresourceData initialData)
                {
                return CreateTexture3D(void);
            }
            publicID3D11Texture3D CreateTexture3D(Texture3DDescription description, const std::optional<std::vector<SubresourceData>>& initialData)
                {
                if (initialData != nullptr && initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture3D(void);
                    }
                }
                else
                {
                    return CreateTexture3D(description, (void*)nullptr);
                }
            }
            publicID3D11Texture3D CreateTexture3D(Format format, uint32_t width, uint32_t height, uint32_t depth, uint32_t mipLevels, const std::optional<std::vector<SubresourceData>>& initialData, BindFlags bindFlags, ResourceOptionFlags miscFlags, ResourceUsage usage, CpuAccessFlags cpuAccessFlags)
                {
                return CreateTexture3D(new Texture3DDescription(format, width, height, depth, mipLevels, bindFlags,
                    usage: usage,
                    cpuAccessFlags: cpuAccessFlags,
                    miscFlags: miscFlags),
                    initialData);
            }
            publicID3D11Texture3D CreateTexture3D(const Texture3DDescription& description, const std::span<SubresourceData>& initialData)
                {
                if (initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture3D(void);
                    }
                }
                else
                {
                    return CreateTexture3D(description, (void*)nullptr);
                }
            }
                                    public T OpenSharedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr handle) where T : ID3D11Resource
            {
                OpenSharedResource(handle, typeof(T).GUID, out IntPtr nativePtr).CheckError();
                return MarshallingHelpers.FromPointer<T>(nativePtr)!;
            }
                                        public Result OpenSharedResource<[DynamicallyAccessedMembers(DynamicallyAccessedMemberTypes.PublicConstructors)] T>(IntPtr handle, out T? resource) where T : ID3D11Resource
            {
                Result result{};
                if (result.Success)
                {
                    resource = MarshallingHelpers.FromPointer<T>(nativePtr);
                    return result{};
                }
                resource = default;
                return result{};
            }
        }

    }
}

#endif // VORTICE_ID3D11DEVICE_H