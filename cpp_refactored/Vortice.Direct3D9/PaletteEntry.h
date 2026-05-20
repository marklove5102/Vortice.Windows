// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PALETTEENTRY_H
#define VORTICE_PALETTEENTRY_H

#include <cstdint>

namespace Vortice {
namespace Direct3D9 {


        namespace Vortice.Direct3D9;

        [StructLayout(LayoutKind.Sequential, Pack = 0)]
        struct PaletteEntry
        {
                        public: uint8_t Red{};

                        public: uint8_t Green{};

                        public: uint8_t Blue{};

                            public: uint8_t Flags{};
        }


    }
}

#endif // VORTICE_PALETTEENTRY_H