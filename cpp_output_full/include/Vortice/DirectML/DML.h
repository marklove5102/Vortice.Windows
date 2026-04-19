// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_DML_H
#define VORTICE_DIRECTML_DML_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DML_H
#define VORTICE_VORTICE_DML_H

#include <cstdint>

namespace Vortice {

class DML
{
public:
    ~DML() = default;

    static IDMLDevice DMLCreateDevice() { DMLCreateDevice(d3d12Device, createDeviceFlags, typeid(IDMLDevice).GUID, out IntPtr nativePtr).CheckError();
        return new(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DML_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_DML_H
