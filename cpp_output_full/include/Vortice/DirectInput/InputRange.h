// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECTINPUT_INPUTRANGE_H
#define VORTICE_DIRECTINPUT_INPUTRANGE_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_INPUTRANGE_H
#define VORTICE_VORTICE_INPUTRANGE_H

#include <cstdint>

namespace Vortice {

struct InputRange
{
public:
    constexpr InputRange(PropertyRange range)
    {}

    constexpr InputRange(int32_t minimum, int32_t maximum)
    Minimum = minimum;
        Maximum = maximum;
    int32_t Minimum;
    int32_t Maximum;


private:
};

} // namespace Vortice

#endif // VORTICE_VORTICE_INPUTRANGE_H

} // namespace Vortice

#endif // VORTICE_DIRECTINPUT_INPUTRANGE_H
