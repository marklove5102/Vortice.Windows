// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTX_IDXCOREADAPTER_H
#define VORTICE_DIRECTX_IDXCOREADAPTER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCOREADAPTER_H
#define VORTICE_VORTICE_IDXCOREADAPTER_H

#include <cstdint>

namespace Vortice {

class IDXCoreAdapter
{
public:
    ~IDXCoreAdapter() = default;

    int64_t InstanceLuid{> GetProperty<long>(AdapterProperty.InstanceLuid)};
    uint64_t DriverVersion{> GetProperty<ulong>(AdapterProperty.DriverVersion)};
    std::string DriverDescription{> GetStringProperty(AdapterProperty.DriverDescription)};
    HardwareID HardwareID{> GetProperty<HardwareID>(AdapterProperty.HardwareID)};
    uint64_t DedicatedAdapterMemory{> GetProperty<ulong>(AdapterProperty.DedicatedAdapterMemory)};
    uint64_t DedicatedSystemMemory{> GetProperty<ulong>(AdapterProperty.DedicatedSystemMemory)};
    uint64_t SharedSystemMemory{> GetProperty<ulong>(AdapterProperty.SharedSystemMemory)};
    bool AcgCompatible{> GetBoolProperty(AdapterProperty.AcgCompatible)};
    bool IsHardware{> GetBoolProperty(AdapterProperty.IsHardware)};
    bool IsIntegrated{> GetBoolProperty(AdapterProperty.IsIntegrated)};
    bool IsDetachable{> GetBoolProperty(AdapterProperty.IsDetachable)};

    uintptr_t GetPropertySize() { GetPropertySize(property, out nuint propertySize).CheckError();
        return propertySize; }

    bool GetBoolProperty() { bool result = default;
        GetProperty(property, 1, &result).CheckError();
        return result; }

    std::string GetStringProperty() { GetPropertySize(property, out nuint propertySize).CheckError();
        byte* strBytes = stackalloc byte[(int)((uint)propertySize)];
        GetProperty(property, propertySize, strBytes).CheckError();
        return System.Text.Encoding.UTF8.GetString(strBytes, (int)((uint)propertySize - 1)); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCOREADAPTER_H

} // namespace Vortice

#endif // VORTICE_DIRECTX_IDXCOREADAPTER_H
