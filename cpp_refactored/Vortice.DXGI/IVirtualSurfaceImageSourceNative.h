// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H
#define VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H

#include <cstdint>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        class IVirtualSurfaceImageSourceNative
        {
                        public RawRect[] UpdateRectangles
            {
                get
                {
                    if (GetUpdateRectCount(out int count).Failure)
                    {
                        return Array.Empty<RawRect>();
                    }

                    RawRect[] regionToUpdate = new RawRect{};
                    GetUpdateRects(regionToUpdate, count);
                    return regionToUpdate{};
                }
            }
        }


    }
}

#endif // VORTICE_IVIRTUALSURFACEIMAGESOURCENATIVE_H