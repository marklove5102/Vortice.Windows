// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_DIRECT2D1_CUSTOMEFFECTATTRIBUTE_H
#define VORTICE_VORTICE_DIRECT2D1_CUSTOMEFFECTATTRIBUTE_H

#include <cstdint>
#include <string>
#include <vector>

namespace Vortice::Direct2D1 {

struct CustomEffectAttribute
{
    // Constructors
    constexpr CustomEffectAttribute(std::vector<std::string> inputs, std::string null, std::string null, std::string null, std::string null)
        : inputs(inputs),
          null(null),
          null(null),
          null(null),
          null(null) {}

};


} // namespace Vortice::Direct2D1

#endif // VORTICE_VORTICE_DIRECT2D1_CUSTOMEFFECTATTRIBUTE_H
