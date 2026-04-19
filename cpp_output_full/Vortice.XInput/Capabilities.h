// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_CAPABILITIES_H
#define VORTICE_CAPABILITIES_H

#include <cstdint>

namespace Vortice {
    namespace XInput; {

        namespace Vortice.XInput;

        /// <summary>
        /// Describes the capabilities of a connected controller. 
        /// </summary>
        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        public struct Capabilities
        {
            /// <summary>
            /// Controller type. It must be one of the <private: see cref{};

            /// <summary>
            /// Subtype of the game controller. See <private: see cref{};

            /// <summary>
            /// Features of the controller.
            /// </summary>
            public: CapabilityFlags Flags{};

            /// <summary>
            /// <private: see cref{};

            /// <summary>
            /// <private: see cref{};
        }


    }
}

#endif // VORTICE_CAPABILITIES_H