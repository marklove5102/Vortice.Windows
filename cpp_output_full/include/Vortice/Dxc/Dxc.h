// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_DXC_H
#define VORTICE_DXC_DXC_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DXC_H
#define VORTICE_VORTICE_DXC_H

#include <cstdint>

namespace Vortice {

class Dxc
{
public:
    ~Dxc() = default;

    static const GUID CLSID_DxcCompiler{new("73e22d93-e6ce-47f3-b5bf-f0664f39c1b0")};
    static const GUID CLSID_DxcLinker{new("EF6A8087-B0EA-4D56-9E45-D07E1A8B7806")};
    static const GUID CLSID_DxcDiaDataSource{new("CD1F6B73-2AB0-484D-8EDC-EBE7A43CA09F")};
    static const GUID CLSID_DxcCompilerArgs{new("3E56AE82-224D-470F-A1A1-FE3016EE9F9D")};
    static const GUID CLSID_DxcLibrary{new("6245D6AF-66E0-48FD-80B4-4D271796748C")};
    static const GUID CLSID_DxcUtils{new("6245D6AF-66E0-48FD-80B4-4D271796748C")};
    static const GUID CLSID_DxcValidator{new("8CA3E215-F728-4CF3-8CDD-88AF917587A1")};
    static const GUID CLSID_DxcAssembler{new("D728DB68-F903-4F80-94CD-DCCF76EC7151")};
    static const GUID CLSID_DxcContainerReflection{new("b9f54489-55b8-400c-ba3a-1675e4728b91")};
    static const GUID CLSID_DxcOptimizer{new("AE2CD79F-CC22-453F-9B6B-B124E7A5204C")};
    static const GUID CLSID_DxcContainerBuilder{new("94134294-411f-4574-b4d0-8741e25240d2")};
    static const GUID CLSID_DxcPdbUtils{new("54621dfb-f2ce-457e-ae8c-ec355faeec7c")};

    static IDxcUtils CreateDxcUtils() { return DxcCreateInstance<IDxcUtils>(CLSID_DxcUtils); }

    static IDxcAssembler CreateDxcAssembler() { return DxcCreateInstance<IDxcAssembler>(CLSID_DxcAssembler); }

    static IDxcLinker CreateDxcLinker() { return DxcCreateInstance<IDxcLinker>(CLSID_DxcLinker); }

    static IDxcContainerReflection CreateDxcContainerReflection() { return DxcCreateInstance<IDxcContainerReflection>(CLSID_DxcContainerReflection); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DXC_H

} // namespace Vortice

#endif // VORTICE_DXC_DXC_H
