// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DXGI_IDXGISURFACE_H
#define VORTICE_DXGI_IDXGISURFACE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_IDXGISURFACE_H
#define VORTICE_VORTICE_IDXGISURFACE_H

#include <cstdint>

namespace Vortice {

class IDXGISurface
{
public:
    ~IDXGISurface() = default;

    DataRectangle Map() { Map(out MappedRect mappedRect, (uint)flags).CheckError();
        return new DataRectangle(mappedRect.Bits, (uint)mappedRect.Pitch); }

    DataStream MapDataStream() { Map(out MappedRect mappedRect, (uint)flags).CheckError();
        return new DataStream(mappedRect.Bits, Description.Height * mappedRect.Pitch, true, true); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_IDXGISURFACE_H

} // namespace Vortice

#endif // VORTICE_DXGI_IDXGISURFACE_H
