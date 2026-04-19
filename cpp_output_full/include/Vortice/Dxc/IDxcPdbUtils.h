// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCPDBUTILS_H
#define VORTICE_DXC_IDXCPDBUTILS_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCPDBUTILS_H
#define VORTICE_VORTICE_IDXCPDBUTILS_H

#include <cstdint>

namespace Vortice {

class IDxcPdbUtils
{
public:
    ~IDxcPdbUtils() = default;

    IDxcResult CompileForFullPDB() { CompileForFullPDB(out IDxcResult result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCPDBUTILS_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCPDBUTILS_H
