// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D11_D3D11_H
#define VORTICE_DIRECT3D11_D3D11_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_D3D11_H
#define VORTICE_VORTICE_D3D11_H

#include <cstdint>

namespace Vortice {

class D3D11
{
public:
    ~D3D11() = default;

    static ID3D11Device D3D11CreateDevice() { RawD3D11CreateDeviceNoContext(
            IntPtr.Zero,
            driverType,
            flags,
            featureLevels,
            out ID3D11Device? device,
            out _).CheckError();
        return device!; }

    static HRESULT D3D11CreateDevice() { return RawD3D11CreateDeviceNoContext(
            adapter != nullptr ? adapter.NativePointer : IntPtr.Zero,
            driverType,
            flags,
            featureLevels,
            out device,
            out _); }

    static HRESULT D3D11CreateDevice() { return RawD3D11CreateDeviceNoContext(
            adapter != nullptr ? adapter.NativePointer : IntPtr.Zero,
            driverType,
            flags,
            featureLevels,
            out device,
            out featureLevel); }

    static HRESULT D3D11CreateDevice() { return D3D11CreateDevice(adapter, driverType, flags, featureLevels, out device, out _, out immediateContext); }

    static HRESULT D3D11CreateDevice() { return RawD3D11CreateDeviceNoContext(
            adapterPtr,
            driverType,
            flags,
            featureLevels,
            out device,
            out _); }

    static HRESULT D3D11CreateDevice() { return D3D11CreateDevice(adapterPtr, driverType, flags, featureLevels, out device, out _, out immediateContext); }

    static bool IsSupportedFeatureLevel() { Result result = RawD3D11CreateDeviceNoDeviceAndContext(
            IntPtr.Zero,
            DriverType.Hardware,
            flags,
            [featureLevel],
            out FeatureLevel outputLevel);
        return result.Success && outputLevel == featureLevel; }

    static FeatureLevel GetSupportedFeatureLevel() { RawD3D11CreateDeviceNoDeviceAndContext(
            IntPtr.Zero,
            DriverType.Hardware,
            DeviceCreationFlags.None,
            nullptr,
            out FeatureLevel featureLevel);
        return featureLevel; }

    static FeatureLevel GetSupportedFeatureLevel() { if (adapter == nullptr)
            throw ArgumentNullException("adapter", "Invalid adapter");

        RawD3D11CreateDeviceNoDeviceAndContext(
            adapter.NativePointer,
            DriverType.Unknown,
            DeviceCreationFlags.None,
            nullptr,
            out FeatureLevel featureLevel);
        return featureLevel; }

    static FeatureLevel GetSupportedFeatureLevel() { if (adapterPtr == IntPtr.Zero)
            throw ArgumentNullException("adapterPtr", "Invalid adapter handle");

        RawD3D11CreateDeviceNoDeviceAndContext(
            adapterPtr,
            DriverType.Unknown,
            DeviceCreationFlags.None,
            nullptr,
            out FeatureLevel featureLevel);
        return featureLevel; }

    static bool SdkLayersAvailable() { Result result = D3D11CreateDevice_(
            nullptr, (int)DriverType.Null,
            nullptr, (int)DeviceCreationFlags.Debug,
            nullptr, 0,
            SdkVersion,
            nullptr, nullptr, nullptr);
        return result.Success; }

    static uint32_t CalculateSubResourceIndex() { return (mipLevels * arraySlice) + mipSlice; }

    static uint32_t CalculateMipSize() { baseSize >>= (int)mipLevel;
        return baseSize > 0 ? baseSize : 1; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_D3D11_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D11_D3D11_H
