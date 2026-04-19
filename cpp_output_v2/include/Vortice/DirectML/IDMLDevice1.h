// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTML_IDMLDEVICE1_H
#define VORTICE_DIRECTML_IDMLDEVICE1_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDMLDEVICE1_H
#define VORTICE_VORTICE_IDMLDEVICE1_H

#include <cstdint>

namespace Vortice {

class IDMLDevice1
{
public:
    ~IDMLDevice1() = default;

    IDMLCompiledOperator CompileGraph() { CompileGraph(ref graphDescription, executionFlags, typeid(IDMLCompiledOperator).GUID, out IntPtr nativePtr).CheckError();

        return new IDMLCompiledOperator(nativePtr); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDMLDEVICE1_H

} // namespace Vortice

#endif // VORTICE_DIRECTML_IDMLDEVICE1_H
