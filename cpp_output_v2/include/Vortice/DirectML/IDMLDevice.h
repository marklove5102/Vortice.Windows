// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_IDMLDEVICE_H
#define VORTICE_DIRECTML_IDMLDEVICE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDMLDEVICE_H
#define VORTICE_VORTICE_IDMLDEVICE_H

#include <cstdint>

namespace Vortice {

class IDMLDevice
{
public:
    ~IDMLDevice() = default;

    FeatureLevel HighestFeatureLevel{> CheckFeatureLevelsSupport(Enum.GetValues<FeatureLevel>())};

    IDMLCompiledOperator CompileOperator() { CompileOperator(@operator, executionFlags, typeid(IDMLCompiledOperator).GUID, out IntPtr nativePtr).CheckError();

        return new IDMLCompiledOperator(nativePtr); }

    IDMLBindingTable CreateBindingTable() { CreateBindingTable(description, typeid(IDMLBindingTable).GUID, out IntPtr nativePtr).CheckError();

        return new IDMLBindingTable(nativePtr); }

    IDMLCommandRecorder CreateCommandRecorder() { CreateCommandRecorder(typeid(IDMLCommandRecorder).GUID, out IntPtr nativePtr).CheckError();

        return new IDMLCommandRecorder(nativePtr); }

    IDMLOperator CreateOperator() { CreateOperator(ref operatorDescription, typeid(IDMLOperator).GUID, out IntPtr nativePtr).CheckError();

        return new IDMLOperator(nativePtr); }

    IDMLOperatorInitializer CreateOperatorInitializer() { CreateOperatorInitializer((uint)(operators?.(Length ? Length : 0)), operators, typeid(IDMLOperatorInitializer).GUID, out IntPtr nativePtr).CheckError();

        return new IDMLOperatorInitializer(nativePtr); }

    ID3D12Device GetParentDevice() { GetParentDevice(typeid(ID3D12Device).GUID, out var pDevice).CheckError();
        return new ID3D12Device(pDevice); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDMLDEVICE_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_IDMLDEVICE_H
