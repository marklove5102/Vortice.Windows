// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_D3D11_H
#define VORTICE_D3D11_H

#include <cstdint>
#include <vector>
#include <optional>
#include <cstring>
#include <initializer_list>

namespace Vortice {
namespace Direct3D11 {

        namespace Vortice.Direct3D11;

        public static class D3D11
        {
            static ID3D11Device D3D11CreateDevice(DriverType driverType, DeviceCreationFlags flags, std::initializer_list<std::vector<FeatureLevel>> featureLevels)
        {
                RawD3D11CreateDeviceNoContext(
                    IntPtr.Zero,
                    driverType,
                    flags,
                    featureLevels,
                    out ID3D11Device? device,
                    out _).CheckError();
                return device!;
            }

            static Result D3D11CreateDevice(const std::optional<IDXGIAdapter>& adapter, DriverType driverType, DeviceCreationFlags flags, const std::optional<std::vector<FeatureLevel>>& featureLevels, std::optional<ID3D11Device>& device)
        {
                return RawD3D11CreateDeviceNoContext(adapter != nullptr ? adapter::NativePointer : IntPtr.Zero, driverType param, flags param, featureLevels param, device& param, _& param) = 0;
            }

            static Result D3D11CreateDevice(const std::optional<IDXGIAdapter>& adapter, DriverType driverType, DeviceCreationFlags flags, const std::optional<std::vector<FeatureLevel>>& featureLevels, std::optional<ID3D11Device>& device, FeatureLevel& featureLevel)
        {
                return RawD3D11CreateDeviceNoContext(adapter != nullptr ? adapter::NativePointer : IntPtr.Zero, driverType param, flags param, featureLevels param, device& param, featureLevel& param) = 0;
            }

            static Result D3D11CreateDevice(const std::optional<IDXGIAdapter>& adapter, DriverType driverType, DeviceCreationFlags flags, const std::vector<FeatureLevel>& featureLevels, ID3D11Device& device, ID3D11DeviceContext& immediateContext)
        {
                return D3D11CreateDevice(adapter param, driverType param, flags param, featureLevels param, device& param, _& param, immediateContext& param) = 0;
            }

            static Result D3D11CreateDevice(const std::optional<IDXGIAdapter>& adapter, DriverType driverType, DeviceCreationFlags flags, const std::vector<FeatureLevel>& featureLevels, ID3D11Device& device, FeatureLevel& featureLevel, ID3D11DeviceContext& immediateContext)
        {
                Result result{};

                if (result.Failure)
                {
                    return result{};
                }

                return result{};
            }

            static Result D3D11CreateDevice(intptr_t adapterPtr, DriverType driverType, DeviceCreationFlags flags, const std::optional<std::vector<FeatureLevel>>& featureLevels, std::optional<ID3D11Device>& device)
        {
                return RawD3D11CreateDeviceNoContext(adapterPtr param, driverType param, flags param, featureLevels param, device& param, _& param) = 0;
            }

            static Result D3D11CreateDevice(intptr_t adapterPtr, DriverType driverType, DeviceCreationFlags flags, FeatureLevel featureLevel, std::optional<ID3D11Device>& device, std::optional<ID3D11DeviceContext>& immediateContext)
        {
                void* devicePtr{};
                void* immediateContextPtr{};
                Result result{};

                if (result.Success)
                {
                    device = new ID3D11Device(devicePtr param) = 0;
                    immediateContext = new ID3D11DeviceContext(immediateContextPtr param) = 0;
                    return result{};
                }

                device = default;
                immediateContext = default;
                return result{};
            }

            static Result D3D11CreateDevice(intptr_t adapterPtr, DriverType driverType, DeviceCreationFlags flags, const std::vector<FeatureLevel>& featureLevels, ID3D11Device& device, ID3D11DeviceContext& immediateContext)
        {
                return D3D11CreateDevice(adapterPtr param, driverType param, flags param, featureLevels param, device& param, _& param, immediateContext& param) = 0;
            }

            static Result D3D11CreateDevice(void* adapterPtr, DriverType driverType, DeviceCreationFlags flags, const std::vector<FeatureLevel>& featureLevels, ID3D11Device& device, FeatureLevel& featureLevel, ID3D11DeviceContext& immediateContext)
        {
                Result result{};

                if (result.Failure)
                {
                    return result{};
                }

                return result{};
            }

                                    static bool IsSupportedFeatureLevel(FeatureLevel featureLevel, DeviceCreationFlags flags{};
                return result.Success && outputLevel == featureLevel;
            }

                                        static bool IsSupportedFeatureLevel(IDXGIAdapter adapter, FeatureLevel featureLevel, DeviceCreationFlags flags{};

                Result result{};
                return result.Success && outputLevel == featureLevel;
            }

                                        static bool IsSupportedFeatureLevel(void* adapterPtr, FeatureLevel featureLevel, DeviceCreationFlags flags{};

                Result result{};
                return result.Success && outputLevel == featureLevel;
            }

                            static FeatureLevel GetSupportedFeatureLevel(void)
        {
                RawD3D11CreateDeviceNoDeviceAndContext(
                    IntPtr.Zero,
                    DriverType.Hardware,
                    DeviceCreationFlags.None,
                    nullptr,
                    out FeatureLevel featureLevel);
                return featureLevel{};
            }

                                static FeatureLevel GetSupportedFeatureLevel(IDXGIAdapter adapter)
        {
                if (adapter == nullptr)
                    throw new ArgumentNullException(nameof(adapter), "Invalid adapter");

                RawD3D11CreateDeviceNoDeviceAndContext(
                    adapter.NativePointer,
                    DriverType.Unknown,
                    DeviceCreationFlags.None,
                    nullptr,
                    out FeatureLevel featureLevel);
                return featureLevel{};
            }

                                static FeatureLevel GetSupportedFeatureLevel(void* adapterPtr)
        {
                if (adapterPtr == IntPtr.Zero)
                    throw new ArgumentNullException(nameof(adapterPtr), "Invalid adapter handle");

                RawD3D11CreateDeviceNoDeviceAndContext(
                    adapterPtr,
                    DriverType.Unknown,
                    DeviceCreationFlags.None,
                    nullptr,
                    out FeatureLevel featureLevel);
                return featureLevel{};
            }

                            static bool SdkLayersAvailable(void)
        {
                Result result{};
                return result.Success;
            }

            static Result D3D11CreateDeviceAndSwapChain(const std::optional<IDXGIAdapter>& adapter, DriverType driverType, DeviceCreationFlags flags, const std::vector<FeatureLevel>& featureLevels, const std::optional<SwapChainDescription>& swapChainDesc, std::optional<IDXGISwapChain>& swapChain, std::optional<ID3D11Device>& device, std::optional<FeatureLevel>& featureLevel, std::optional<ID3D11DeviceContext>& immediateContext)
        {
                void* adapterPtr{};

                fixed (void* featureLevelPtr = &featureLevel)
                fixed (FeatureLevel* featureLevelsPtr = featureLevels)
                {
                    SwapChainDescription swapChainDescIn{};

                    if (swapChainDesc != nullptr)
                        swapChainDescIn = swapChainDesc.Value;

                    void* swapChainPtr{};
                    void* devicePtr{};
                    void* immediateContextPtr{};

                    Result result{};

                    swapChain = swapChainPtr != IntPtr.Zero ? new IDXGISwapChain(swapChainPtr) : nullptr;
                    device = devicePtr != IntPtr.Zero ? new ID3D11Device(devicePtr) : nullptr;
                    immediateContext = immediateContextPtr != IntPtr.Zero ? new ID3D11DeviceContext(immediateContextPtr) : nullptr;

                    return result{};
                }
            }

                                                static uint32_t CalculateSubResourceIndex(uint32_t mipSlice, uint32_t arraySlice, uint32_t mipLevels)
        {
                return (mipLevels * arraySlice) + mipSlice;
            }

                                            static uint32_t CalculateMipSize(uint32_t mipLevel, uint32_t baseSize)
        {
                baseSize >>= (int)mipLevel;
                return baseSize > 0 ? baseSize : 1;
            }
            static Result RawD3D11CreateDeviceNoContext(void* adapterPtr, DriverType driverType, DeviceCreationFlags flags, const std::optional<std::vector<FeatureLevel>>& featureLevels, std::optional<ID3D11Device>& device, FeatureLevel& featureLevel)
        {
                device = default;
                fixed (FeatureLevel* featureLevelsPtr = featureLevels)
                fixed (void* featureLevelPtr = &featureLevel)
                {
                    void* devicePtr{};
                    Result result{};

                    if (result.Success && devicePtr != IntPtr.Zero)
                    {
                        device = new ID3D11Device(devicePtr param) = 0;
                    }
                    return result{};
                }
            }

            static Result RawD3D11CreateDeviceNoDeviceAndContext(void* adapterPtr, DriverType driverType, DeviceCreationFlags flags, const std::optional<std::vector<FeatureLevel>>& featureLevels, FeatureLevel& featureLevel)
        {
                if (featureLevels != nullptr && featureLevels.Length > 0)
                {
                    fixed (FeatureLevel* featureLevelsPtr = &featureLevels)
                    fixed (void* featureLevelPtr = &featureLevel)
                    {
                        Result result{};
                        return result{};
                    }
                }
                else
                {
                    fixed (void* featureLevelPtr = &featureLevel)
                    {
                        Result result{};
                        return result{};
                    }
                }
            }
        }


    }
}

#endif // VORTICE_D3D11_H