// Copyright (c) Contributors.

#ifndef VORTICE_SCALEBIAS_H
#define VORTICE_SCALEBIAS_H

#include <cstdint>
#include <string>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.
        namespace Vortice.DirectML;
        publicstruct ScaleBias
        {
                                public ScaleBias(float scale, float bias)
                {
                Scale = scale;
                Bias = bias;
            }
                publicoverride std::string ToString(void) $"Scale={Scale} Bias={Bias}";
        }

    }
}

#endif // VORTICE_SCALEBIAS_H