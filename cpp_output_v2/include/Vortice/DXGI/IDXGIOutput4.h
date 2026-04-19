// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGIOUTPUT4_H
#define VORTICE_DXGI_IDXGIOUTPUT4_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGIOUTPUT4_H
#define VORTICE_VORTICE_IDXGIOUTPUT4_H

#include <cstdint>

namespace Vortice {

class IDXGIOutput4
{
public:
    ~IDXGIOutput4() = default;

    OverlayColorSpaceSupportFlags CheckOverlayColorSpaceSupport() { return CheckOverlayColorSpaceSupport_(format, colorSpace, concernedDevice); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGIOUTPUT4_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGIOUTPUT4_H
