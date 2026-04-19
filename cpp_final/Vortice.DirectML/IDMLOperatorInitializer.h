// Copyright (c) Contributors.

#ifndef VORTICE_IDMLOPERATORINITIALIZER_H
#define VORTICE_IDMLOPERATORINITIALIZER_H

#include <cstdint>
#include <vector>
#include <optional>
#include <initializer_list>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        class IDMLOperatorInitializer
        {
                                                        Result Reset(std::initializer_list<std::optional<std::vector<IDMLCompiledOperator>>> operators)
        {
                return Reset((uint)(operators?.Length ?? 0), operators);
            }
        }


    }
}

#endif // VORTICE_IDMLOPERATORINITIALIZER_H