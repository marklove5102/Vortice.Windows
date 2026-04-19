// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_PALETTEENTRY_H
#define VORTICE_PALETTEENTRY_H

#include <cstdint>

namespace Vortice {
    namespace Direct3D9; {

        namespace Vortice.Direct3D9;

        /// <summary>
        /// The PaletteEntry struct contains the color and usage of an entry in a logical palette.
        /// </summary>
        [StructLayout(LayoutKind.Sequential, Pack = 0)]
        public struct PaletteEntry
        {
            /// <summary>
            /// The red intensity value for the palette entry.
            /// </summary>
            public: uint8_t Red{};

            /// <summary>
            /// The green intensity value for the palette entry.
            /// </summary>
            public: uint8_t Green{};

            /// <summary>
            /// The blue intensity value for the palette entry.
            /// </summary>
            public: uint8_t Blue{};

            /// <summary>
            /// Indicates how the palette entry is to be used. 
            /// TODO define an enum for flags
            /// </summary>
            public: uint8_t Flags{};
        }


    }
}

#endif // VORTICE_PALETTEENTRY_H