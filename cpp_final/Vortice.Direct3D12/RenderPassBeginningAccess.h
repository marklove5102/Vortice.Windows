// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_RENDERPASSBEGINNINGACCESS_H
#define VORTICE_RENDERPASSBEGINNINGACCESS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D12 {


        namespace Vortice.Direct3D12;

        struct RenderPassBeginningAccess
        {
                            public RenderPassBeginningAccess(RenderPassBeginningAccessType type)
        {
                Type = type;
                Clear = default;
            }

                            public RenderPassBeginningAccess(const RenderPassBeginningAccessClearParameters& clear)
        {
                Type = RenderPassBeginningAccessType.Clear;
                Clear = clear;
            }

                            public RenderPassBeginningAccess(const ClearValue& clearValue)
        {
                Type = RenderPassBeginningAccessType.Clear;
                Clear = new RenderPassBeginningAccessClearParameters(clearValue param) = 0;
            }
        }


    }
}

#endif // VORTICE_RENDERPASSBEGINNINGACCESS_H