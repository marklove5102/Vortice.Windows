// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_ID3D11DEVICE_H
#define VORTICE_ID3D11DEVICE_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <span>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        class ID3D11Device
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

                                            Result CheckThreadingSupport(bool& supportsConcurrentResources, bool& supportsCommandLists)
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

            FeatureDataThreading CheckFeatureThreading(void)
        {
                return CheckFeatureSupport<FeatureDataThreading>(Feature.Threading);
            }

            FeatureDataDoubles CheckFeatureDoubles(void)
        {
                return CheckFeatureSupport<FeatureDataDoubles>(Feature.Doubles);
            }

            FeatureDataD3D11Options CheckFeatureOptions(void)
        {
                return CheckFeatureSupport<FeatureDataD3D11Options>(Feature.D3D11Options);
            }

            FeatureDataArchitectureInfo CheckFeatureArchitectureInfo(void)
        {
                return CheckFeatureSupport<FeatureDataArchitectureInfo>(Feature.ArchitectureInfo);
            }

            FeatureDataShaderMinPrecisionSupport CheckFeatureShaderMinPrecisionSupport(void)
        {
                return CheckFeatureSupport<FeatureDataShaderMinPrecisionSupport>(Feature.ShaderMinPrecisionSupport);
            }

            FeatureDataD3D11Options1 CheckFeatureOptions1(void)
        {
                return CheckFeatureSupport<FeatureDataD3D11Options1>(Feature.D3D11Options1);
            }

            FeatureDataD3D11Options2 CheckFeatureOptions2(void)
        {
                return CheckFeatureSupport<FeatureDataD3D11Options2>(Feature.D3D11Options2);
            }

            FeatureDataD3D11Options3 CheckFeatureOptions3(void)
        {
                return CheckFeatureSupport<FeatureDataD3D11Options3>(Feature.D3D11Options3);
            }

            FeatureDataD3D11Options4 CheckFeatureOptions4(void)
        {
                return CheckFeatureSupport<FeatureDataD3D11Options4>(Feature.D3D11Options4);
            }

            FeatureDataD3D11Options5 CheckFeatureOptions5(void)
        {
                return CheckFeatureSupport<FeatureDataD3D11Options5>(Feature.D3D11Options5);
            }

            FeatureDataGpuVirtualAddressSupport CheckFeatureGpuVirtualAddressSupport(void)
        {
                return CheckFeatureSupport<FeatureDataGpuVirtualAddressSupport>(Feature.GpuVirtualAddressSupport);
            }

            FeatureDataShaderCache CheckFeatureShaderCache(void)
        {
                return CheckFeatureSupport<FeatureDataShaderCache>(Feature.ShaderCache);
            }

            FormatSupport CheckFeatureFormatSupport(Format format)
        {
                FeatureDataFormatSupport support{};
                support.InFormat = format;
                if (CheckFeatureSupport(Feature.FormatSupport, &support, (uint)sizeof(FeatureDataFormatSupport2)).Failure)
                {
                    return FormatSupport.None;
                }

                return support.OutFormatSupport;
            }

            FormatSupport2 CheckFeatureFormatSupport2(Format format)
        {
                FeatureDataFormatSupport2 support{};
                support.InFormat = format;
                if (CheckFeatureSupport(Feature.FormatSupport2, &support, (uint)sizeof(FeatureDataFormatSupport2)).Failure)
                {
                    return FormatSupport2.None;
                }

                return support.OutFormatSupport2;
            }

            ID3D11DeviceContext CreateDeferredContext(void)
        {
                return CreateDeferredContext(0 param) = 0;
            }

            ID3D11Buffer CreateBuffer(const BufferDescription& description, std::optional<SubresourceData> initialData{};
                return buffer{};
            }

            ID3D11Buffer CreateBuffer(const BufferDescription& description, void* dataPointer)
        {
                CreateBuffer(description,
                    dataPointer != IntPtr.Zero ? new SubresourceData(dataPointer) : (SubresourceData?)default,
                    out ID3D11Buffer buffer).CheckError();
                return buffer{};
            }

            ID3D11Buffer CreateBuffer(const BufferDescription& description, DataStream data)
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

                                                    ID3D11Buffer CreateBuffer(uint32_t sizeInBytes, BindFlags bindFlags, ResourceUsage usage{};

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

            ID3D11VertexShader CreateVertexShader(const span<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11VertexShader CreateVertexShader(const span<const uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11VertexShader CreateVertexShader(const std::vector<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11VertexShader CreateVertexShader(Blob shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
            }

            ID3D11PixelShader CreatePixelShader(const span<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11PixelShader CreatePixelShader(const span<const uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11PixelShader CreatePixelShader(const std::vector<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11PixelShader CreatePixelShader(Blob shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
            }

            ID3D11GeometryShader CreateGeometryShader(const span<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11GeometryShader CreateGeometryShader(const span<const uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11GeometryShader CreateGeometryShader(const std::vector<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11GeometryShader CreateGeometryShader(Blob shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
            }

            ID3D11HullShader CreateHullShader(const span<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11HullShader CreateHullShader(const span<const uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11HullShader CreateHullShader(const std::vector<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11HullShader CreateHullShader(Blob shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
            }

            ID3D11DomainShader CreateDomainShader(const span<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11DomainShader CreateDomainShader(const span<const uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11DomainShader CreateDomainShader(const std::vector<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11DomainShader CreateDomainShader(Blob shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
            }

            ID3D11ComputeShader CreateComputeShader(const span<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11ComputeShader CreateComputeShader(const span<const uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11ComputeShader CreateComputeShader(const std::vector<uint8_t>& shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
                }
            }

            ID3D11ComputeShader CreateComputeShader(Blob shaderBytecode, std::optional<ID3D11ClassLinkage> classLinkage{};
            }

                                    ID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, const span<uint8_t>& shaderBytecode)
        {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateInputLayout(inputElements, (uint)inputElements.Length, pBuffer, (nuint)shaderBytecode.Length);
                }
            }

                                    ID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, const span<const uint8_t>& shaderBytecode)
        {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateInputLayout(inputElements, (uint)inputElements.Length, pBuffer, (nuint)shaderBytecode.Length);
                }
            }

                                    ID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, const std::vector<uint8_t>& shaderBytecode)
        {
                fixed (byte* pBuffer = shaderBytecode)
                {
                    return CreateInputLayout(inputElements, (uint)inputElements.Length, pBuffer, (nuint)shaderBytecode.Length);
                }
            }

                                    ID3D11InputLayout CreateInputLayout(const std::vector<InputElementDescription>& inputElements, Blob blob)
        {
                return CreateInputLayout(inputElements, (uint)inputElements.Length, blob.BufferPointer.ToPointer(), blob.BufferSize);
            }

            ID3D11Query CreateQuery(QueryType queryType, QueryFlags miscFlags{};
            }
            ID3D11Texture1D CreateTexture1D(const Texture1DDescription& description)
        {
                return CreateTexture1D(description, (void*)nullptr);
            }

            ID3D11Texture1D CreateTexture1D(const Texture1DDescription& description, SubresourceData initialData)
        {
                return CreateTexture1D(description param, &initialData param) = 0;
            }

            ID3D11Texture1D CreateTexture1D(const Texture1DDescription& description, SubresourceData[]? initialData = nullptr)
        {
                if (initialData != nullptr && initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture1D(description param, initialDataPtr param) = 0;
                    }
                }
                else
                {
                    return CreateTexture1D(description, (void*)nullptr);
                }
            }

            ID3D11Texture1D CreateTexture1D(const Texture1DDescription& description, const span<SubresourceData>& initialData)
        {
                if (initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture1D(description param, initialDataPtr param) = 0;
                    }
                }
                else
                {
                    return CreateTexture1D(description, (void*)nullptr);
                }
            }

            ID3D11Texture1D CreateTexture1D(Format format, uint32_t width, uint32_t arraySize{};
                return CreateTexture1D(const description& param, initialData param) = 0;
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
                    return CreateTexture1D(description param, &initData param) = 0;
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
                    return CreateTexture1D(description param, &initData param) = 0;
                }
            }
            ID3D11Texture2D CreateTexture2D(const Texture2DDescription& description)
        {
                return CreateTexture2D(description, (void*)nullptr);
            }

            ID3D11Texture2D CreateTexture2D(const Texture2DDescription& description, SubresourceData initialData)
        {
                return CreateTexture2D(description param, &initialData param) = 0;
            }

            ID3D11Texture2D CreateTexture2D(const Texture2DDescription& description, const span<SubresourceData>& initialData)
        {
                if (initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture2D(description param, initialDataPtr param) = 0;
                    }
                }
                else
                {
                    return CreateTexture2D(description, (void*)nullptr);
                }
            }

            ID3D11Texture2D CreateTexture2D(const Texture2DDescription& description, const std::vector<DataRectangle>& data)
        {
                SubresourceData[] subResourceDatas = new SubresourceData{};
                for (int32_t i{}; i < subResourceDatas.Length; i++)
                {
                    subResourceDatas.DataPointer = data.DataPointer;
                    subResourceDatas.RowPitch = data.Pitch;
                }

                return CreateTexture2D(description param, subResourceDatas param) = 0;
            }

            ID3D11Texture2D CreateTexture2D(Format format, uint32_t width, uint32_t height, uint32_t arraySize{};
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
                    return CreateTexture2D(description param, &initData param) = 0;
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
                    return CreateTexture2D(description param, &initData param) = 0;
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
                    return CreateTexture2D(description param, &initData param) = 0;
                }
            }

            ID3D11Texture2D CreateTexture2DMultisample(Format format, uint32_t width, uint32_t height, uint32_t sampleCount, uint32_t arraySize{};
                }

                return CreateTexture2D(new Texture2DDescription(format, width, height, arraySize, 1, bindFlags, ResourceUsage.Default, CpuAccessFlags.None, sampleCount, 0, miscFlags), (void*)nullptr);
            }

            ID3D11Texture2D CreateTextureCube(Format format, uint32_t size, uint32_t mipLevels{};
                return CreateTexture2D(description param, initialData param) = 0;
            }
            ID3D11Texture3D CreateTexture3D(const Texture3DDescription& description)
        {
                return CreateTexture3D(description, (void*)nullptr);
            }

            ID3D11Texture3D CreateTexture3D(const Texture3DDescription& description, SubresourceData initialData)
        {
                return CreateTexture3D(description param, &initialData param) = 0;
            }

            ID3D11Texture3D CreateTexture3D(Texture3DDescription description, SubresourceData[]? initialData = nullptr)
        {
                if (initialData != nullptr && initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture3D(description param, initialDataPtr param) = 0;
                    }
                }
                else
                {
                    return CreateTexture3D(description, (void*)nullptr);
                }
            }

            ID3D11Texture3D CreateTexture3D(Format format, uint32_t width, uint32_t height, uint32_t depth, uint32_t mipLevels{};
            }

            ID3D11Texture3D CreateTexture3D(const Texture3DDescription& description, const span<SubresourceData>& initialData)
        {
                if (initialData.Length > 0)
                {
                    fixed (SubresourceData* initialDataPtr = initialData)
                    {
                        return CreateTexture3D(description param, initialDataPtr param) = 0;
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