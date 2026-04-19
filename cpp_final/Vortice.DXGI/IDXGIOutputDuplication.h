// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IDXGIOUTPUTDUPLICATION_H
#define VORTICE_IDXGIOUTPUTDUPLICATION_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IDXGIOutputDuplication
        {
            DataRectangle MapDesktopSurface(void)
        {
                MapDesktopSurface(out MappedRect mappedRect).CheckError();
                return new DataRectangle(mappedRect.Bits, (uint)mappedRect.Pitch);
            }
        }


    }
}

#endif // VORTICE_IDXGIOUTPUTDUPLICATION_H