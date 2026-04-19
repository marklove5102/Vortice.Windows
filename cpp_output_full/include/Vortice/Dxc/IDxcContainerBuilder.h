// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCCONTAINERBUILDER_H
#define VORTICE_DXC_IDXCCONTAINERBUILDER_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCCONTAINERBUILDER_H
#define VORTICE_VORTICE_IDXCCONTAINERBUILDER_H

#include <cstdint>

namespace Vortice {

class IDxcContainerBuilder
{
public:
    ~IDxcContainerBuilder() = default;

    IDxcOperationResult SerializeContainer() { SerializeContainer(out IDxcOperationResult result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCCONTAINERBUILDER_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCCONTAINERBUILDER_H
