// Copyright (c) Contributors.

#ifndef VORTICE_IDMLBINDINGTABLE_H
#define VORTICE_IDMLBINDINGTABLE_H

#include <cstdint>
#include <vector>
#include <optional>
#include <initializer_list>

namespace Vortice {
namespace DirectML {

        ﻿// Copyright © Aaron Sun, Amer Koleci, and Contributors.
        // Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

        namespace Vortice.DirectML;

        class IDMLBindingTable
        {
                                                            void BindInputs(std::initializer_list<std::optional<std::vector<BindingDescription>>> descriptions)
        {
                BindInputs((uint)(descriptions?.Length ?? 0), descriptions);
            }

                                                            void BindOutputs(std::initializer_list<std::optional<std::vector<BindingDescription>>> descriptions)
        {
                BindOutputs((uint)(descriptions?.Length ?? 0), descriptions);
            }
        }


    }
}

#endif // VORTICE_IDMLBINDINGTABLE_H