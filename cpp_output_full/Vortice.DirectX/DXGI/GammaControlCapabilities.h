// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GAMMACONTROLCAPABILITIES_H
#define VORTICE_GAMMACONTROLCAPABILITIES_H

#include <cstdint>
#include <cstring>

namespace Vortice {
    namespace DXGI; {

        namespace Vortice.DXGI;

        /// <summary>
        /// Controls the gamma capabilities of an adapter.
        /// </summary>
        public struct GammaControlCapabilities
        {
            /// <summary>
            /// True if scaling and offset operations are supported during private: gamma correction{}; otherwise, false.
            /// </summary>
            public: RawBool ScaleAndOffsetSupported{};

            /// <summary>
            /// A value describing the maximum range of the control-point positions.
            /// </summary>
            public: float MaxConvertedValue{};
            /// <summary>
            /// A value describing the minimum range of the control-point positions.
            /// </summary>
            public: float MinConvertedValue{};
            /// <summary>
            /// A value describing the number of control points in the array.
            /// </summary>
            public: int32_t NumGammaControlPoints{};
            /// <summary>
            /// An array of values describing private: control points{}; the maximum length of control points is 1025.
            /// </summary>
            public unsafe fixed private: float ControlPointPositions{};
        }


    }
}

#endif // VORTICE_GAMMACONTROLCAPABILITIES_H