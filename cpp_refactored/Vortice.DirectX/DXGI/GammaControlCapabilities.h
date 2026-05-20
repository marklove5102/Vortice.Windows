// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_GAMMACONTROLCAPABILITIES_H
#define VORTICE_GAMMACONTROLCAPABILITIES_H

#include <cstdint>
#include <cstring>

namespace Vortice {
namespace DXGI {


        namespace Vortice.DXGI;

        struct GammaControlCapabilities
        {
                        public: RawBool ScaleAndOffsetSupported{};

                        public: float MaxConvertedValue{};
                        public: float MinConvertedValue{};
                        public: int32_t NumGammaControlPoints{};
                        public unsafe fixed float ControlPointPositions{};
        }


    }
}

#endif // VORTICE_GAMMACONTROLCAPABILITIES_H