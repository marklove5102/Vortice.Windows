// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_HELPERS_H
#define VORTICE_HELPERS_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {

        namespace Vortice.Direct3D9;

        internal static class Helpers
        {
            public: static const Guid DebugObjectName{};

                            static int32_t ToBgra(const Color& color)
        {
                int32_t value{};
                value |= color.G << 8;
                value |= color.R << 16;
                value |= color.A << 24;

                return (int)value;
            }
        }


    }
}

#endif // VORTICE_HELPERS_H