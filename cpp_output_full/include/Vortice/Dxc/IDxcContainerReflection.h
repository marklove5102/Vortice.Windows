// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXC_IDXCCONTAINERREFLECTION_H
#define VORTICE_DXC_IDXCCONTAINERREFLECTION_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXCCONTAINERREFLECTION_H
#define VORTICE_VORTICE_IDXCCONTAINERREFLECTION_H

#include <cstdint>

namespace Vortice {

class IDxcContainerReflection
{
public:
    ~IDxcContainerReflection() = default;

    uint32_t FindFirstPartKind() { FindFirstPartKind(kind, out uint result).CheckError();
        return result; }

    uint32_t GetPartKind() { GetPartKind(index, out uint result).CheckError();
        return result; }

    IDxcBlob GetPartContent() { GetPartContent(index, out IDxcBlob result).CheckError();
        return result; }

    uint32_t GetPartCount() { GetPartCount(out uint result).CheckError();
        return result; }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXCCONTAINERREFLECTION_H

} // namespace Vortice

#endif // VORTICE_DXC_IDXCCONTAINERREFLECTION_H
