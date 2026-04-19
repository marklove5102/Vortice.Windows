// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCLINKER_H
#define VORTICE_DXC_IDXCLINKER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCLINKER_H
#define VORTICE_VORTICE_IDXCLINKER_H

#include <cstdint>

namespace Vortice {

class IDxcLinker
{
public:
    ~IDxcLinker() = default;

    IDxcOperationResult Link() { Link(entryName, targetProfile, libNames, arguments, out IDxcOperationResult? result).CheckError();
        return result!; }

    IDxcOperationResult Link() { Link(entryName, targetProfile, libNames, libCount, arguments, argumentsCount, out IDxcOperationResult? result).CheckError();
        return result!; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCLINKER_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCLINKER_H
