// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT3D12_DREDPAGEFAULTOUTPUT_H
#define VORTICE_DIRECT3D12_DREDPAGEFAULTOUTPUT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DREDPAGEFAULTOUTPUT_H
#define VORTICE_VORTICE_DREDPAGEFAULTOUTPUT_H

#include <cstdint>

namespace Vortice {

class DredPageFaultOutput
{
public:
    ~DredPageFaultOutput() = default;

    uint64_t PageFaultVA;

    uint64_t PageFaultVA{};

};

} // namespace Vortice

#endif // VORTICE_VORTICE_DREDPAGEFAULTOUTPUT_H

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE___NATIVE_H
#define VORTICE_VORTICE___NATIVE_H

#include <cstdint>

namespace Vortice {

struct __Native
{
public:
    uint64_t PageFaultVA;

};

} // namespace Vortice

#endif // VORTICE_VORTICE___NATIVE_H

} // namespace Vortice

#endif // VORTICE_DIRECT3D12_DREDPAGEFAULTOUTPUT_H
