// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGISURFACE_H
#define VORTICE_IDXGISURFACE_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;
        publicclass IDXGISurface
        {
                                publicDataRectangle Map(MapFlags flags)
                {
                Map(out MappedRect mappedRect, (uint)flags).CheckError();
                return new DataRectangle(mappedRect.Bits, (uint)mappedRect.Pitch);
            }
                                publicDataStream MapDataStream(MapFlags flags)
                {
                Map(out MappedRect mappedRect, (uint)flags).CheckError();
                return new DataStream(Description.Height *);
            }
        }

    }
}

#endif // VORTICE_IDXGISURFACE_H