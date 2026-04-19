// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_DXCCOMPILER_H
#define VORTICE_DXC_DXCCOMPILER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXCCOMPILER_H
#define VORTICE_VORTICE_DXCCOMPILER_H

#include <cstdint>

namespace Vortice {

class DxcCompiler
{
public:
    ~DxcCompiler() = default;

    static const IDxcUtils Utils{Dxc.CreateDxcUtils()};
    static const IDxcCompiler3 Compiler{Dxc.CreateDxcCompiler<IDxcCompiler3>()};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXCCOMPILER_H

} // namespace Vortice

#endif // VORTICE_DXC_DXCCOMPILER_H
