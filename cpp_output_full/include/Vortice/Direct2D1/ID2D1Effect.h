// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_DIRECT2D1_ID2D1EFFECT_H
#define VORTICE_DIRECT2D1_ID2D1EFFECT_H

#include <cstdint>
#include <vector>
#include <string>
#include <memory>
#include <span>
#include <unordered_map>

namespace Vortice {

// Copyright (c) Amer Koleci and Contributors.
// Licensed under the MIT License (MIT). See LICENSE in the repository root for more information.

#ifndef VORTICE_VORTICE_ID2D1EFFECT_H
#define VORTICE_VORTICE_ID2D1EFFECT_H

#include <cstdint>

namespace Vortice {

class ID2D1Effect
{
public:
    ~ID2D1Effect() = default;

    void SetInputEffect() { using ID2D1Image output = effect.Output;
        SetInput(index, output, invalidate); }

};

} // namespace Vortice

#endif // VORTICE_VORTICE_ID2D1EFFECT_H

} // namespace Vortice

#endif // VORTICE_DIRECT2D1_ID2D1EFFECT_H
