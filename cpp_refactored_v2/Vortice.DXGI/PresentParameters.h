// Copyright (c) Amer Koleci and contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PRESENTPARAMETERS_H
#define VORTICE_PRESENTPARAMETERS_H

#include <cstdint>
#include <optional>

namespace Vortice {
namespace DXGI {

        namespace Vortice.DXGI;
        publicstruct PresentParameters
        {
                        public RawRect[] DirtyRectangles;
                            public: std::optional<RawRect> ScrollRectangle{};
                            public: std::optional<Int2> ScrollOffset{};
            [StructLayout(LayoutKind.Sequential, Pack = 0)]
            internal struct __Native
        {
                public: int32_t DirtyRectsCount{};
                public RawRect* pDirtyRects;
                public RawRect* pScrollRect;
                public Int2* pScrollOffset;
            }
        }

    }
}

#endif // VORTICE_PRESENTPARAMETERS_H