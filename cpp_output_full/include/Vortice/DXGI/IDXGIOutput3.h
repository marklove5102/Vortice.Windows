// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIOUTPUT3_H
#define VORTICE_DXGI_IDXGIOUTPUT3_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIOUTPUT3_H
#define VORTICE_VORTICE_IDXGIOUTPUT3_H

#include <cstdint>

namespace Vortice {

class IDXGIOutput3
{
public:
    ~IDXGIOutput3() = default;

    OverlaySupportFlags CheckOverlaySupport() { return CheckOverlaySupport_(format, concernedDevice); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIOUTPUT3_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIOUTPUT3_H
